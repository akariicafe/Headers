@class NSArray, NSString, NSError, NSNumber, MPCAssistantDiscovery;
@protocol HMDMRSetEndpointVolumeOperationExternalObjectInterface;

@interface HMDMRSetEndpointVolumeOperation : HMFOperation <HMFObject>

@property (retain, nonatomic) MPCAssistantDiscovery *discovery;
@property (retain, nonatomic) NSError *partialExecutionError;
@property (retain, nonatomic) id<HMDMRSetEndpointVolumeOperationExternalObjectInterface> externalObjectInterface;
@property (readonly, nonatomic) NSNumber *volume;
@property (readonly, copy, nonatomic) NSArray *routeIDs;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)main;
- (BOOL)cancelOnSetup;
- (id)discoverRemoteControlEndpointsForUIDs:(id)a0;
- (void)generateOverallResultAndFinishWithDeviceStatuses:(id)a0;
- (id)connectToEndpoint:(id)a0 connection:(id)a1;
- (id)getVolumeCapabilitiesForEndpoint:(id)a0 outputDeviceUID:(id)a1;
- (id)setVolumeOnEndpoint:(id)a0 outputDeviceUID:(id)a1;
- (id)initWithRouteIDs:(id)a0 volume:(id)a1;

@end
