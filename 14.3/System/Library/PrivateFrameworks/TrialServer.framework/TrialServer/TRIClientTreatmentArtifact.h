@class NSData, NSString, NSDictionary;

@interface TRIClientTreatmentArtifact : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *encodedTreatmentDefinition;
@property (readonly, nonatomic) NSString *encodedTreatmentDefinitionSignature;
@property (readonly, nonatomic) NSData *publicCertificate;
@property (readonly, nonatomic) NSDictionary *assetURLs;

+ (id)artifactWithEncodedTreatmentDefinition:(id)a0 encodedTreatmentDefinitionSignature:(id)a1 publicCertificate:(id)a2 assetURLs:(id)a3;
+ (id)artifactFromCKRecordFields:(id)a0 loadAssetUrls:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithEncodedTreatmentDefinition:(id)a0 encodedTreatmentDefinitionSignature:(id)a1 publicCertificate:(id)a2 assetURLs:(id)a3;
- (BOOL)isEqualToArtifact:(id)a0;
- (id)copyWithReplacementEncodedTreatmentDefinition:(id)a0;
- (id)copyWithReplacementEncodedTreatmentDefinitionSignature:(id)a0;
- (id)copyWithReplacementPublicCertificate:(id)a0;
- (id)copyWithReplacementAssetURLs:(id)a0;
- (BOOL)isValidWithTreatmentId:(id)a0;
- (id)unsignedAssetURLs;

@end
