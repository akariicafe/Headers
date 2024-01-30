@class NSString;

@interface MAAbsoluteAssetId : NSObject <NSSecureCoding> {
    NSString *_allAttributesHash;
    NSString *_assetIdHash;
    NSString *_nonAssetIdHash;
    NSString *_downloadContentHash;
    NSString *_downloadUrlHash;
    NSString *_downloadPolicyHash;
    NSString *_pallasAssetIdHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetId;
@property (retain, nonatomic) NSString *assetType;

- (id)summary;
- (id)urlHash;
- (void)dealloc;
- (id)contentHash;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetId:(id)a0 forAssetType:(id)a1 attributes:(id)a2;
- (id)allAttributesHash;
- (id)assetIdHash;
- (id)policyHash;
- (id)pallasDynamicAssetIdHash;
- (id)diffFromAssetId:(id)a0 assetType:(id)a1 attributes:(id)a2;
- (id)description;
- (BOOL)hasOnlyAssetTypeAndId;
- (id)initWithAssetId:(id)a0 forAssetType:(id)a1;
- (id)diffFromAsset:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)nonIdHash;
- (id)diffFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
