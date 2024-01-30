@class NSString, INTemporalEventTrigger, INSettingMetadata;

@interface INSetLabeledSettingIntent : INIntent <INSetLabeledSettingIntentExport>

@property (readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
@property (readonly, copy, nonatomic) NSString *labeledValue;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setSettingMetadata:(id)a0;
- (id)initWithSettingMetadata:(id)a0 labeledValue:(id)a1 temporalEventTrigger:(id)a2;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setLabeledValue:(id)a0;
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
