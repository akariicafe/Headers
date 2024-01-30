@class NSString;

@interface MAAssetDiff : NSObject <NSSecureCoding> {
    unsigned long long _diffRaw;
    unsigned long long _diff;
    unsigned long long _mask;
    NSString *_description;
    NSString *_assessment;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allowEverythingDifferent;
+ (id)requireSameAssetTypeAndAssetId;
+ (id)requireSameAssetTypeAndDownloadContent;
+ (id)requireSameAssetTypeAndAllAttributes;

- (id)summary;
- (id)initWithCoder:(id)a0;
- (unsigned long long)category;
- (id)description;
- (id)initDifferentAssetType:(BOOL)a0 assetId:(BOOL)a1 attributes:(BOOL)a2 assetIdAttributes:(BOOL)a3 dynamicAssetId:(BOOL)a4 nonIdAttributes:(BOOL)a5 content:(BOOL)a6 url:(BOOL)a7 policy:(BOOL)a8;
- (id)initFromDiff:(unsigned long long)a0;
- (BOOL)isAnythingDifferent;
- (id)initFromInverseOfCategories:(unsigned long long)a0;
- (BOOL)isSameAssetType;
- (BOOL)isSameForAllAttributes;
- (BOOL)isSameAssetId;
- (BOOL)isSameForNonAssetIdAttributes;
- (BOOL)isSameDownloadContent;
- (BOOL)isSameDownloadUrl;
- (BOOL)isSameDownloadPolicy;
- (BOOL)hasOnlyAllowedDifferences:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
