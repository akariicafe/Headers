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
- (void)encodeWithCoder:(id)a0;
- (id)policyHash;
- (id)contentHash;
- (id)description;
- (id)initWithAssetId:(id)a0 forAssetType:(id)a1 attributes:(id)a2;
- (id)allAttributesHash;
- (id)assetIdHash;
- (id)pallasDynamicAssetIdHash;
- (BOOL)hasOnlyAssetTypeAndId;
- (id)initWithAssetId:(id)a0 forAssetType:(id)a1;
- (id)diffFromAsset:(id)a0;
- (id)diffFromAssetId:(id)a0 assetType:(id)a1 attributes:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)urlHash;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)nonIdHash;
- (id)diffFrom:(id)a0;

@end
