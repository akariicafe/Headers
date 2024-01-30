@class INTimer, INSpeakableString, NSString;

@interface INSetTimerAttributeIntent : INIntent <INSetTimerAttributeIntentExport>

@property (readonly, copy, nonatomic) INTimer *targetTimer;
@property (readonly, nonatomic) double toDuration;
@property (readonly, copy, nonatomic) INSpeakableString *toLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (void)setTargetTimer:(id)a0;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithTargetTimer:(id)a0 toDuration:(double)a1 toLabel:(id)a2;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setToDuration:(double)a0;
- (void)setToLabel:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
