@class NSArray, NSString;

@interface INListShortcutsIntent : INIntent <INListShortcutsIntentExport>

@property (readonly, nonatomic) long long originDevice;
@property (readonly, copy, nonatomic) NSArray *appTitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (void)setAppTitles:(id)a0;
- (id)initWithOriginDevice:(long long)a0 appTitles:(id)a1;
- (void)setOriginDevice:(long long)a0;
- (id)domain;
- (void)setVerb:(id)a0;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
