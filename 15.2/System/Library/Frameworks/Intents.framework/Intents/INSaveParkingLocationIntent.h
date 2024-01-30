@class NSString, CLPlacemark;

@interface INSaveParkingLocationIntent : INIntent <INSaveParkingLocationIntentExport>

@property (readonly, copy, nonatomic) CLPlacemark *parkingLocation;
@property (readonly, copy, nonatomic) NSString *parkingNote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (id)initWithParkingLocation:(id)a0 parkingNote:(id)a1;
- (void)setVerb:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)setParkingLocation:(id)a0;
- (void)setParkingNote:(id)a0;

@end
