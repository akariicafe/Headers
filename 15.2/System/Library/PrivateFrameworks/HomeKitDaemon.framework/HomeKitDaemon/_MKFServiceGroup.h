@class NSUUID, NSString, _MKFApplicationData, NSPredicate, NSSet, NSArray, NSDate, Protocol, _MKFHome, MKFServiceGroupDatabaseID;
@protocol MKFHome, MKFApplicationData;

@interface _MKFServiceGroup : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFServiceGroup, MKFServiceGroupPrivateExtensions>

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
@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) NSSet *services_;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) id<MKFApplicationData> applicationData;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, retain, nonatomic) NSArray *services;
@property (readonly, copy, nonatomic) MKFServiceGroupDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfServiceGroup;
- (id)materializeOrCreateApplicationDataRelation:(BOOL *)a0;
- (void)addServicesObject:(id)a0;
- (void)removeServicesObject:(id)a0;

@end
