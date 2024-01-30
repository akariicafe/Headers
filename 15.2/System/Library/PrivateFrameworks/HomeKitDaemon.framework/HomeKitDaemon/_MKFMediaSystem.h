@class NSUUID, NSString, NSArray, NSPredicate, NSData, _MKFApplicationData, MKFMediaSystemDatabaseID, NSDate, Protocol, _MKFHome;
@protocol MKFHome, MKFApplicationData;

@interface _MKFMediaSystem : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaSystem, MKFMediaSystemPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *configuredName;
@property (retain, nonatomic) NSArray *mediaSystemComponents;
@property (retain, nonatomic) NSData *symptoms;
@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) _MKFHome *home;
@property (copy, nonatomic) NSString *configuredName;
@property (retain, nonatomic) NSArray *mediaSystemComponents;
@property (retain, nonatomic) NSData *symptoms;
@property (retain, nonatomic) id<MKFApplicationData> applicationData;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) MKFMediaSystemDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfMediaSystem;
- (id)materializeOrCreateApplicationDataRelation:(BOOL *)a0;

@end
