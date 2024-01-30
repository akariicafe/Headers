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
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)initWithLabel:(id)a0 duration:(double)a1 state:(long long)a2 type:(long long)a3;
- (void)setType:(long long)a0;
- (void)setLabel:(id)a0;
- (id)domain;
- (void)setVerb:(id)a0;
- (void)setState:(long long)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;
- (void)setDuration:(double)a0;

@end
