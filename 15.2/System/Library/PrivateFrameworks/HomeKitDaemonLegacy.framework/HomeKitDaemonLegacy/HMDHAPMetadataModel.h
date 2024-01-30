@class NSNumber, NSDictionary, NSData;

@interface HMDHAPMetadataModel : HMDBackingStoreModelObject

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
