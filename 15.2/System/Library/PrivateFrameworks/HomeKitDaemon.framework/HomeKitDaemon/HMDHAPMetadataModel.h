@class NSString, NSDictionary, NSData, NSNumber;

@interface HMDHAPMetadataModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *metadataVersion;
@property (retain, nonatomic) NSNumber *schemaVersion;
@property (retain, nonatomic) NSDictionary *rawPlist;
@property (retain, nonatomic) NSData *legacyIDSData;
@property (retain, nonatomic) NSData *legacyCloudData;

+ (id)allowedTypes;
+ (id)properties;
+ (id)metadataModelObjectUUID;
+ (id)modelWithDictionary:(id)a0;

- (id)metadataDictionary;

@end
