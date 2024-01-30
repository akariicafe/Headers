@class NSString;

@interface WFTriggerMigrator : NSObject <NSKeyedUnarchiverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)migrateTriggerUponUnarchival:(id)a0;
+ (id)migrateUserFocusActivityTriggerFromUniqueIdentifierToSemanticIdentifier:(id)a0;
+ (id)migratedUserFocusActivityTriggerFromLegacyDNDTrigger:(id)a0;

- (id)unarchiver:(id)a0 didDecodeObject:(id)a1;

@end
