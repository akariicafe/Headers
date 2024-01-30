@class NSUUID, NSString, MKFHomeManagerHomeDatabaseID, NSDate, Protocol, _MKFHomeManager, HMDHomeManagerHomeHandle, NSNumber;
@protocol MKFHomeManager;

@interface _MKFHomeManagerHome : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeManagerHome, MKFHomeManagerHomePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deleted;
@property (retain, nonatomic) HMDHomeManagerHomeHandle *handle;
@property (retain, nonatomic) _MKFHomeManager *homeManager;
@property (retain, nonatomic) _MKFHomeManager *homeManagerPrimary;
@property (copy, nonatomic) NSNumber *deleted;
@property (retain, nonatomic) HMDHomeManagerHomeHandle *handle;
@property (readonly, retain, nonatomic) id<MKFHomeManager> homeManager;
@property (retain, nonatomic) id<MKFHomeManager> homeManagerPrimary;
@property (readonly, copy, nonatomic) MKFHomeManagerHomeDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfHomeManagerHome;

@end
