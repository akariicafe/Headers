@class MPPlaybackArchive, NSString, NSDictionary, NSArray, NSNumber, MPCAssistantRemoteControlDestination;
@protocol HMDMPCSendMRCommandOperationExternalObjectInterface;

@interface HMDMPCSendMRCommandOperation : HMFOperation <HMFObject>

@property (retain, nonatomic) id<HMDMPCSendMRCommandOperationExternalObjectInterface> externalObjectInterface;
@property (readonly, nonatomic) MPCAssistantRemoteControlDestination *destination;
@property (readonly, nonatomic) MPPlaybackArchive *playbackArchive;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSNumber *mediaRemoteCommand;
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
