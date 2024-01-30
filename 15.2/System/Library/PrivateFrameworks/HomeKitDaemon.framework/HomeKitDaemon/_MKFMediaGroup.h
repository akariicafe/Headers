@class NSUUID, NSString, NSArray, NSPredicate, NSSet, NSDate, MKFMediaGroupDatabaseID, Protocol, _MKFHome;
@protocol MKFHome;

@interface _MKFMediaGroup : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaGroup, MKFMediaGroupPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *destinations_;
@property (retain, nonatomic) _MKFHome *home;
@property (copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSArray *destinations;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) MKFMediaGroupDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfMediaGroup;

@end
