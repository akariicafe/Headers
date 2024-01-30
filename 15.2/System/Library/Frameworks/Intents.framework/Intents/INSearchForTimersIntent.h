@class INSpeakableString, NSString;

@interface INSearchForTimersIntent : INIntent <INSearchForTimersIntentExport>

@property (readonly, copy, nonatomic) INSpeakableString *label;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setState:(long long)a0;
- (void)setDuration:(double)a0;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (id)initWithLabel:(id)a0 duration:(double)a1 state:(long long)a2 type:(long long)a3;
- (void)setDomain:(id)a0;
- (void)setType:(long long)a0;
- (void)setLabel:(id)a0;

@end
