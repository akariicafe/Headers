@class NSArray, NSString;
@protocol HMNetworkRouterProfileDelegate;

@interface HMNetworkRouterProfile : HMAccessoryProfile <_HMNetworkRouterProfileDelegate>

@property (readonly) unsigned long long networkStatus;
@property (weak) id<HMNetworkRouterProfileDelegate> delegate;
@property (readonly, getter=isSatellite) BOOL satellite;
@property (readonly) NSArray *satelliteProfiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)services;
- (void).cxx_destruct;
- (id)identifiersForSatelliteProfiles;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)initWithNetworkRouterProfile:(id)a0;
- (id)networkRouterProfile;
- (void)routerProfileDidUpdateIdentifiersForSatellites:(id)a0;
- (void)routerProfileDidUpdateNetworkStatus:(id)a0;
- (void)setIdentifiersForSatelliteProfiles:(id)a0;

@end
