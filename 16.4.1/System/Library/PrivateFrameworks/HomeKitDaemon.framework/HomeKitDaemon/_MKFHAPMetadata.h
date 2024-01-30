@class NSUUID, NSString, NSData, NSDate, Protocol, _MKFHomeManager, NSNumber, MKFHAPMetadataDatabaseID;
@protocol MKFHomeManager;

@interface _MKFHAPMetadata : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHAPMetadata, MKFHAPMetadataPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *legacyCloudData;
@property (retain, nonatomic) NSData *legacyIDSData;
@property (copy, nonatomic) NSNumber *metadataVersion;
@property (copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSData *rawPlist;
@property (copy, nonatomic) NSNumber *schemaVersion;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFHomeManager *homeManager;
@property (retain, nonatomic) NSData *legacyCloudData;
@property (retain, nonatomic) NSData *legacyIDSData;
@property (copy, nonatomic) NSNumber *metadataVersion;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSData *rawPlist;
@property (copy, nonatomic) NSNumber *schemaVersion;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFHomeManager> homeManager;
@property (readonly, copy, nonatomic) MKFHAPMetadataDatabaseID *databaseID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfHAPMetadata;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
