@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, NSString, DNDSScheduleSettingsRecord;

@interface DNDSSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) DNDSBehaviorSettingsRecord *behaviorSettings;
@property (readonly, copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings;
@property (readonly, copy, nonatomic) DNDSScheduleSettingsRecord *scheduleSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)newWithDictionaryRepresentation:(id)a0;
+ (id)backingStoreWithFileURL:(id)a0;
+ (id)recordWithEncodedInfo:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)_initWithRecord:(id)a0;
- (id)_initWithBehaviorSettings:(id)a0 phoneCallBypassSettings:(id)a1 scheduleSettings:(id)a2;

@end
