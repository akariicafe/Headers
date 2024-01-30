@class NSUUID, NSString, MKFAccessoryNetworkProtectionGroupDatabaseID, NSPredicate, NSDate, Protocol, _MKFHome, NSNumber;
@protocol MKFHome;

@interface _MKFAccessoryNetworkProtectionGroup : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessoryNetworkProtectionGroup, MKFAccessoryNetworkProtectionGroupPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *category;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSNumber *targetProtectionMode;
@property (retain, nonatomic) _MKFHome *home;
@property (copy, nonatomic) NSNumber *category;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSNumber *targetProtectionMode;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) MKFAccessoryNetworkProtectionGroupDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfAccessoryNetworkProtectionGroup;

@end
