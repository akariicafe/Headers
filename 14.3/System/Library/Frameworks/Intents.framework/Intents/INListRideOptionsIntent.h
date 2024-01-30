@class NSString, CLPlacemark;

@interface INListRideOptionsIntent : INIntent <INListRideOptionsIntentExport>

@property (readonly, copy, nonatomic) CLPlacemark *pickupLocation;
@property (readonly, copy, nonatomic) CLPlacemark *dropOffLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)domain;
- (void)setVerb:(id)a0;
- (void)setPickupLocation:(id)a0;
- (void)setDropOffLocation:(id)a0;
- (id)initWithPickupLocation:(id)a0 dropOffLocation:(id)a1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (id)_dictionaryRepresentation;

@end
