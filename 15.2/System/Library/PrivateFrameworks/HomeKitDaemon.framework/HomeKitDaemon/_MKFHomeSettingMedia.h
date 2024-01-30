@class Protocol, NSUUID, NSString, MKFHomeSettingMediaDatabaseID, NSDate, NSNumber;
@protocol MKFHome;

@interface _MKFHomeSettingMedia : _MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeSettingMedia, MKFHomeSettingMediaPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *mediaPassword;
@property (copy, nonatomic) NSNumber *mediaPeerToPeerEnabled;
@property (copy, nonatomic) NSNumber *minimumMediaUserPrivilege;
@property (copy, nonatomic) NSString *mediaPassword;
@property (copy, nonatomic) NSNumber *mediaPeerToPeerEnabled;
@property (copy, nonatomic) NSNumber *minimumMediaUserPrivilege;
@property (readonly, copy, nonatomic) MKFHomeSettingMediaDatabaseID *databaseID;
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

- (id)castIfHomeSettingMedia;

@end
