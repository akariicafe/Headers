@class NSArray, NSString, MPCAssistantMutableRemoteControlDestination;

@interface HMDMPCResolveDestinationOperation : HMFOperation <HMFObject>

@property (copy) id /* block */ resolveDestinationCompletionBlock;
@property (retain, nonatomic) MPCAssistantMutableRemoteControlDestination *resolvedDestination;
@property (readonly, nonatomic) long long mediaApplicationDestination;
@property (readonly, nonatomic) BOOL forceSingleGroup;
@property (readonly, copy, nonatomic) NSArray *hashedRouteIDs;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

@end
