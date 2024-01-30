@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, DNDSConfigurationsRecord, NSString, DNDSScheduleSettingsRecord;

@interface DNDSSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) DNDSBehaviorSettingsRecord *behaviorSettings;
@property (readonly, copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings;
@property (readonly, copy, nonatomic) DNDSScheduleSettingsRecord *scheduleSettings;
@property (readonly, copy, nonatomic) DNDSConfigurationsRecord *configurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)backingStoreWithFileURL:(id)a0;
+ (id)recordWithEncodedInfo:(id)a0 error:(id *)a1;

- (id)_initWithRecord:(id)a0;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)_initWithBehaviorSettings:(id)a0 phoneCallBypassSettings:(id)a1 scheduleSettings:(id)a2 configurations:(id)a3;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
