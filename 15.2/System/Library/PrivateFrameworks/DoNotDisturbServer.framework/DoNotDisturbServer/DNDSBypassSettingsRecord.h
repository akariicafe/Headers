@class NSNumber, NSString;

@interface DNDSBypassSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSNumber *immediateBypassEventSourceType;
@property (readonly, copy, nonatomic) NSString *immediateBypassCNGroupIdentifier;
@property (readonly, copy, nonatomic) NSNumber *repeatEventSourceBehaviorEnabledSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)recordForLegacyPrivilegedSenderType:(unsigned long long)a0 legacyAddressBookID:(int)a1;
+ (id)_recordWithEncodedInfo:(id)a0 error:(id *)a1;

- (id)_initWithRecord:(id)a0;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (unsigned long long)legacyPrivilegedSenderType;
- (id)_initWithImmediateBypassEventSourceType:(id)a0 immediateBypassCNGroupIdentifier:(id)a1 repeatEventSourceBehaviorEnabledSetting:(id)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
