@class NSNumber, NSString;

@interface DNDSBypassSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSNumber *immediateBypassEventSourceType;
@property (readonly, copy, nonatomic) NSString *immediateBypassCNGroupIdentifier;
@property (readonly, copy, nonatomic) NSNumber *repeatEventSourceBehaviorEnabledSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)newWithDictionaryRepresentation:(id)a0;
+ (id)recordForLegacyPrivilegedSenderType:(unsigned long long)a0 legacyAddressBookID:(int)a1;
+ (id)_recordWithEncodedInfo:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)_initWithRecord:(id)a0;
- (id)_initWithImmediateBypassEventSourceType:(id)a0 immediateBypassCNGroupIdentifier:(id)a1 repeatEventSourceBehaviorEnabledSetting:(id)a2;
- (unsigned long long)legacyPrivilegedSenderType;

@end
