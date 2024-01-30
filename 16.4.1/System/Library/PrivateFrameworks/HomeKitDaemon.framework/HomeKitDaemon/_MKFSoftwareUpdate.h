@class NSUUID, NSString, NSDate, NSPredicate, HMSoftwareUpdateDocumentationMetadata, _MKFAccessory, MKFSoftwareUpdateDatabaseID, Protocol, HMFSoftwareVersion, NSNumber;
@protocol MKFHome, MKFAccessory;

@interface _MKFSoftwareUpdate : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFSoftwareUpdate, MKFSoftwareUpdatePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (copy, nonatomic) NSNumber *downloadSize;
@property (copy, nonatomic) NSNumber *installDuration;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFAccessory *accessory;
@property (retain, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (copy, nonatomic) NSNumber *downloadSize;
@property (copy, nonatomic) NSNumber *installDuration;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *releaseDate;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFAccessory> accessory;
@property (readonly, copy, nonatomic) MKFSoftwareUpdateDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfSoftwareUpdate;

@end
