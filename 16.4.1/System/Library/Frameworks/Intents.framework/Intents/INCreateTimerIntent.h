@class INSpeakableString, NSString;

@interface INCreateTimerIntent : INIntent <INCreateTimerIntentExport>

@property (readonly, copy, nonatomic) INSpeakableString *label;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)a0;
- (void)setDomain:(id)a0;
- (void)setType:(long long)a0;
- (void)setLabel:(id)a0;
- (void)setDuration:(double)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithLabel:(id)a0 duration:(double)a1 type:(long long)a2;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
