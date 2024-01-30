@class NSString, NSURL, NSData;
@protocol TRIAssetId;

@interface TRIAssetDiffArtifact : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIAssetId> *sourceAssetId;
@property (readonly, nonatomic) NSString<TRIAssetId> *destAssetId;
@property (readonly, nonatomic) NSString *diffSignature;
@property (readonly, nonatomic) NSURL *diff;
@property (readonly, nonatomic) long long diffSize;
@property (readonly, nonatomic) NSData *publicCertificate;

+ (id)artifactFromCKRecord:(id)a0;
+ (id)artifactWithSourceAssetId:(id)a0 destAssetId:(id)a1 diffSignature:(id)a2 diff:(id)a3 diffSize:(long long)a4 publicCertificate:(id)a5;
+ (BOOL)_signature:(id)a0 onFileURL:(id)a1 fromCloudKitRecordId:(id)a2 isValidUsingPublicCertificate:(id)a3;

- (id)description;
- (BOOL)isEqualToArtifact:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementPublicCertificate:(id)a0;
- (id)initWithSourceAssetId:(id)a0 destAssetId:(id)a1 diffSignature:(id)a2 diff:(id)a3 diffSize:(long long)a4 publicCertificate:(id)a5;
- (id)copyWithReplacementSourceAssetId:(id)a0;
- (id)copyWithReplacementDestAssetId:(id)a0;
- (id)copyWithReplacementDiffSignature:(id)a0;
- (id)copyWithReplacementDiff:(id)a0;
- (id)copyWithReplacementDiffSize:(long long)a0;

@end
