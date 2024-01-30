@class NSArray, NSString, MPCAssistantMutableRemoteControlDestination;
@protocol HMDMPCAssistantRemoteControlDestinationFactory;

@interface HMDMPCResolveDestinationOperation : HMFOperation <HMFLogging, HMFObject>

@property (retain) MPCAssistantMutableRemoteControlDestination *resolvedDestination;
@property (copy) id /* block */ resolveDestinationCompletionBlock;
@property (retain) id<HMDMPCAssistantRemoteControlDestinationFactory> remoteControlDestinationFactory;
@property (readonly, nonatomic) long long mediaApplicationDestination;
@property (readonly, nonatomic) BOOL forceSingleGroup;
@property (readonly, copy, nonatomic) NSArray *hashedRouteIDs;
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
- (void)setCompletionBlock:(id /* block */)a0;
- (id)initWithHashedRouteIDs:(id)a0 mediaApplicationDestination:(long long)a1 forceSingleGroup:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithHashedRouteIDs:(id)a0 mediaApplicationDestination:(long long)a1 forceSingleGroup:(BOOL)a2 completion:(id /* block */)a3 remoteControlDestinationFactory:(id)a4;

@end
