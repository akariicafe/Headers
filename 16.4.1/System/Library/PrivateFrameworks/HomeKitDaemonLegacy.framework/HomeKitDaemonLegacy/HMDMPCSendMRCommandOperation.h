@class MPPlaybackArchive, NSString, NSDictionary, NSArray, NSNumber, MPCAssistantRemoteControlDestination;
@protocol HMDMPCSendMRCommandOperationExternalObjectInterface;

@interface HMDMPCSendMRCommandOperation : HMFOperation <HMFLogging, HMFObject>

@property (readonly) id<HMDMPCSendMRCommandOperationExternalObjectInterface> externalObjectInterface;
@property (readonly, nonatomic) MPCAssistantRemoteControlDestination *destination;
@property (readonly, nonatomic) MPPlaybackArchive *playbackArchive;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSNumber *mediaRemoteCommand;
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
- (id)initWithCommand:(unsigned int)a0 destination:(id)a1 options:(id)a2 externalObjectInterface:(id)a3;
- (id)initWithCommand:(unsigned int)a0 options:(id)a1 destination:(id)a2;
- (id)initWithPlaybackArchive:(id)a0 destination:(id)a1 options:(id)a2 externalObjectInterface:(id)a3;
- (id)initWithPlaybackArchive:(id)a0 options:(id)a1 destination:(id)a2;

@end
