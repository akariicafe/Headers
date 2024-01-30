@class INDateComponentsRange, NSString, NSNumber, INSpeakableString;

@interface INCreateAlarmIntent : INIntent <INCreateAlarmIntentExport>

@property (readonly, copy, nonatomic) NSNumber *relativeOffsetInMinutes;
@property (readonly, copy, nonatomic) INDateComponentsRange *time;
@property (readonly, copy, nonatomic) INSpeakableString *label;
@property (readonly, nonatomic) unsigned long long alarmRepeatScheduleOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (void)setLabel:(id)a0;
- (void)setTime:(id)a0;
- (id)domain;
- (void)setRelativeOffsetInMinutes:(id)a0;
- (void)setVerb:(id)a0;
- (void)setAlarmRepeatScheduleOptions:(unsigned long long)a0;
- (id)initWithRelativeOffsetInMinutes:(id)a0 time:(id)a1 label:(id)a2 alarmRepeatScheduleOptions:(unsigned long long)a3;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
