@class INModifyNickname, NSString;

@interface INSetNicknameIntent : INIntent <INSetNicknameIntentExport>

@property (readonly, copy, nonatomic) INModifyNickname *targetNickname;
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
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithTargetNickname:(id)a0;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setTargetNickname:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
