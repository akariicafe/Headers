@class NSString, UIImageAsset;

@interface _UIImageAssetMapEnvelope : NSObject

@property (weak, nonatomic) UIImageAsset *imageAsset;
@property (copy, nonatomic) NSString *assetName;

+ (id)wrapAsset:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
