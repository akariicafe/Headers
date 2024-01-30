@class NSArray;

@interface FCContentManifest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *assetURLs;
@property (readonly, copy, nonatomic) NSArray *assetWrappingKeyIDs;
@property (readonly, copy, nonatomic) NSArray *recordIDs;
@property (readonly, copy, nonatomic) NSArray *avAssetIDs;
@property (readonly, copy, nonatomic) NSArray *avAssetKeyIDs;
@property (readonly, copy, nonatomic) NSArray *avAssetKeyURIs;
@property (readonly, copy, nonatomic) FCContentManifest *copyWithAssetsOnly;

+ (id)manifestByMergingManifest:(id)a0 withManifest:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssetURLs:(id)a0 assetWrappingKeyIDs:(id)a1 recordIDs:(id)a2 avAssetIDs:(id)a3 avAssetKeyIDs:(id)a4;
- (id)initWithManifests:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
