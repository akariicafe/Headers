@class NSUUID, NSString, NSDate, NSPredicate, Protocol, _MKFMediaDestinationController, _MKFMediaGroup, NSNumber, MKFMediaDestinationDatabaseID;
@protocol MKFHome, MKFMediaDestinationController, MKFMediaGroup;

@interface _MKFMediaDestination : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaDestination, MKFMediaDestinationPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (copy, nonatomic) NSNumber *supportedOptions;
@property (retain, nonatomic) _MKFMediaDestinationController *currentDestinationOf;
@property (retain, nonatomic) _MKFMediaDestinationController *destinationController;
@property (retain, nonatomic) _MKFMediaGroup *group;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (copy, nonatomic) NSNumber *supportedOptions;
@property (retain, nonatomic) id<MKFMediaDestinationController> currentDestinationOf;
@property (retain, nonatomic) id<MKFMediaDestinationController> destinationController;
@property (readonly, retain, nonatomic) id<MKFMediaGroup> group;
@property (readonly, copy, nonatomic) MKFMediaDestinationDatabaseID *databaseID;
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

- (id)castIfMediaDestination;

@end
