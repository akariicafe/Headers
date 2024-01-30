@class NSString, PHAsset, NSURL;

@interface JTAssetMediaItem : JTLocalAssetMediaItem

@property (copy, nonatomic) NSString *assetIdentifier;
@property (copy, nonatomic) NSString *masterFingerprint;
@property (copy, nonatomic) NSString *adjustedFingerprint;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSURL *assetLocalURL;

- (id)info;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAssetIdentifier:(id)a0;
- (void)checkIfAssetIsMissing;
- (void)fetchAssetForce:(BOOL)a0;
- (id)initWithInfo:(id)a0 delegate:(id)a1;
- (void)reloadAsset;

@end
