@class NSData, NSNumber;

@interface HMDLegacyV0Model : HMDLegacyModel

@property (retain, nonatomic) NSData *cloudBlob;
@property (retain, nonatomic) NSData *cloudBlobV2;
@property (retain, nonatomic) NSNumber *cloudBlobsReadOnly;

+ (id)properties;
+ (id)createWithLegacyRecord:(id)a0 modelContainer:(id)a1 error:(id *)a2;

- (id)init;
- (id)encodeWithExistingRecord:(id)a0 cloudZone:(id)a1 modelContainer:(id)a2 error:(id *)a3;

@end
