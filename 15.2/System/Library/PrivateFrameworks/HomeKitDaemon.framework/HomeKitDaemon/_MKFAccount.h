@class NSUUID, NSString, NSArray, HMDAccountIdentifier, NSSet, NSDate, Protocol, _MKFHomeManager, NSNumber, MKFAccountDatabaseID;
@protocol MKFHomeManager;

@interface _MKFAccount : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccount, MKFAccountPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDAccountIdentifier *identifier;
@property (copy, nonatomic) NSNumber *local;
@property (retain, nonatomic) NSSet *devices_;
@property (retain, nonatomic) NSSet *handles_;
@property (retain, nonatomic) _MKFHomeManager *homeManager;
@property (retain, nonatomic) HMDAccountIdentifier *identifier;
@property (copy, nonatomic) NSNumber *local;
@property (readonly, retain, nonatomic) NSArray *devices;
@property (readonly, retain, nonatomic) NSArray *handles;
@property (readonly, retain, nonatomic) id<MKFHomeManager> homeManager;
@property (readonly, copy, nonatomic) MKFAccountDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfAccount;
- (id)materializeOrCreateDevicesRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findDevicesRelationWithModelID:(id)a0;
- (void)synchronizeDevicesRelationWith:(id)a0;
- (id)materializeOrCreateHandlesRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findHandlesRelationWithModelID:(id)a0;
- (void)synchronizeHandlesRelationWith:(id)a0;

@end
