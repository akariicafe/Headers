@class INTemporalEventTrigger, NSString, INSettingMetadata;

@interface INSetBinarySettingIntent : INIntent <INSetBinarySettingIntentExport>

@property (readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
@property (readonly, nonatomic) long long binaryValue;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setSettingMetadata:(id)a0;
- (id)initWithSettingMetadata:(id)a0 binaryValue:(long long)a1 temporalEventTrigger:(id)a2;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setBinaryValue:(long long)a0;
- (void)setTemporalEventTrigger:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;

@end
