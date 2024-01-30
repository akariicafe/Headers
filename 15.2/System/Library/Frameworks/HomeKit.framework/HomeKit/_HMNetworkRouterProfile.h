@class NSSet;
@protocol _HMNetworkRouterProfileDelegate;

@interface _HMNetworkRouterProfile : _HMAccessoryProfile

@property (readonly) unsigned long long networkStatus;
@property (readonly, getter=isSatellite) BOOL satellite;
@property (readonly) NSSet *identifiersForSatelliteProfiles;
@property (weak, nonatomic) id<_HMNetworkRouterProfileDelegate> delegate;

+ (BOOL)supportsSecureCoding;

- (id)messageTargetUUID;
- (id)messageReceiveQueue;
- (void)setNetworkStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)messageDestination;
- (void)_registerNotificationHandlers;
- (void)handleRuntimeStateUpdate:(id)a0;
- (void)setSatellite:(BOOL)a0;
- (void)setIdentifiersForSatelliteProfiles:(id)a0;
- (BOOL)checkForUpdatedIdentifiersForSatellites:(id)a0;
- (BOOL)checkForUpdatedNetworkStatus:(unsigned long long)a0;
- (void)_handleSatelliteProfilesUpdated:(id)a0;
- (void)__handleNetworkStatusUpdated:(id)a0;
- (void)_handleNetworkStatusUpdated:(id)a0;

@end
