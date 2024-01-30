@class Protocol, NSUUID, NSString, NSDate, NSNumber, MKFHomeSettingSoftwareUpdateDatabaseID;
@protocol MKFHome;

@interface _MKFHomeSettingSoftwareUpdate : _MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeSettingSoftwareUpdate, MKFHomeSettingSoftwareUpdatePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *automaticSoftwareUpdateEnabled;
@property (copy, nonatomic) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (copy, nonatomic) NSNumber *automaticSoftwareUpdateEnabled;
@property (copy, nonatomic) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (readonly, copy, nonatomic) MKFHomeSettingSoftwareUpdateDatabaseID *databaseID;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfHomeSettingSoftwareUpdate;

@end
