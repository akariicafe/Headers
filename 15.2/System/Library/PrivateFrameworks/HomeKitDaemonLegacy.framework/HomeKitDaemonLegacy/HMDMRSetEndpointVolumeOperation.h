@class NSArray, NSString, NSError, NSNumber;
@protocol HMDMPCAssistantDiscovery, HMDMRSetEndpointVolumeOperationExternalObjectInterface;

@interface HMDMRSetEndpointVolumeOperation : HMFOperation <HMFLogging, HMFObject>

@property (retain, nonatomic) id<HMDMPCAssistantDiscovery> discovery;
@property (retain, nonatomic) NSError *partialExecutionError;
@property (readonly) id<HMDMRSetEndpointVolumeOperationExternalObjectInterface> externalObjectInterface;
@property (readonly, nonatomic) NSNumber *volume;
@property (readonly, copy, nonatomic) NSArray *routeIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

- (void)main;
- (void).cxx_destruct;
- (id)initWithRouteIDs:(id)a0 volume:(id)a1 externalObjectInterface:(id)a2;
- (id)initWithRouteIDs:(id)a0 volume:(id)a1;
- (void)generateOverallResultAndFinishWithDeviceStatuses:(id)a0;
- (BOOL)cancelOnSetup;
- (id)discoverRemoteControlEndpointsForUIDs:(id)a0;
- (id)connectToEndpoint:(id)a0 connection:(id)a1;
- (id)getVolumeCapabilitiesForEndpoint:(id)a0 outputDeviceUID:(id)a1;
- (id)setVolumeOnEndpoint:(id)a0 outputDeviceUID:(id)a1;

@end
