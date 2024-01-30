@class NSUUID, NSString, NSArray, NSPredicate, _MKFMediaDestination, NSSet, MKFMediaDestinationControllerDatabaseID, _MKFAccessoryMediaApple, Protocol, NSDate;
@protocol MKFAccessoryMediaApple, MKFHome, MKFMediaDestination;

@interface _MKFMediaDestinationController : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaDestinationController, MKFMediaDestinationControllerPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _MKFMediaDestination *currentDestination;
@property (retain, nonatomic) NSSet *destinations_;
@property (retain, nonatomic) _MKFAccessoryMediaApple *mediaAccessory;
@property (retain, nonatomic) id<MKFMediaDestination> currentDestination;
@property (readonly, retain, nonatomic) NSArray *destinations;
@property (readonly, retain, nonatomic) id<MKFAccessoryMediaApple> mediaAccessory;
@property (readonly, copy, nonatomic) MKFMediaDestinationControllerDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfMediaDestinationController;
- (void)addDestinationsObject:(id)a0;
- (void)removeDestinationsObject:(id)a0;

@end
