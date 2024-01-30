@class NSArray, NSString, MPCAssistantMutableRemoteControlDestination;
@protocol HMDMPCAssistantRemoteControlDestinationFactory;

@interface HMDMPCResolveDestinationOperation : HMFOperation <HMFLogging, HMFObject>

@property (retain) MPCAssistantMutableRemoteControlDestination *resolvedDestination;
@property (copy) id /* block */ resolveDestinationCompletionBlock;
@property (retain) id<HMDMPCAssistantRemoteControlDestinationFactory> remoteControlDestinationFactory;
@property (readonly, nonatomic) long long mediaApplicationDestination;
@property (readonly, nonatomic) BOOL forceSingleGroup;
@property (readonly, copy, nonatomic) NSArray *hashedRouteIDs;
@property (readonly, copy, nonatomic) NSString *mediaApplicationIdentifier;
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

- (void)setCompletionBlock:(id /* block */)a0;
- (void)main;
- (void).cxx_destruct;
- (id)initWithHashedRouteIDs:(id)a0 mediaApplicationDestination:(long long)a1 mediaApplicationIdentifier:(id)a2 forceSingleGroup:(BOOL)a3 completion:(id /* block */)a4;
- (id)initWithHashedRouteIDs:(id)a0 mediaApplicationDestination:(long long)a1 mediaApplicationIdentifier:(id)a2 forceSingleGroup:(BOOL)a3 completion:(id /* block */)a4 remoteControlDestinationFactory:(id)a5;

@end
