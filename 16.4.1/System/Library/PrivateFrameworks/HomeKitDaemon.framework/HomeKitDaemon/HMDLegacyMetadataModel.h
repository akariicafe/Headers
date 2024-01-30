@class NSData;

@interface HMDLegacyMetadataModel : HMDLegacyModel

@property (retain, nonatomic) NSData *cloudMetadata;

+ (id)properties;
+ (id)createWithLegacyRecord:(id)a0 modelContainer:(id)a1 error:(id *)a2;

- (id)init;
- (id)encodeWithExistingRecord:(id)a0 cloudZone:(id)a1 modelContainer:(id)a2 error:(id *)a3;

@end
