@class NSArray, NSNumber, NSString;

@interface INFindDeviceAndPlaySoundIntent : INIntent <INFindDeviceAndPlaySoundIntentExport>

@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly, copy, nonatomic) NSNumber *isStopRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDevices:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)setIsStopRequest:(id)a0;
- (id)initWithDevices:(id)a0 isStopRequest:(id)a1;

@end
