@class NSString, UIImageAsset;

@interface _UIImageAssetMapEnvelope : NSObject

@property (weak, nonatomic) UIImageAsset *imageAsset;
@property (copy, nonatomic) NSString *assetName;

+ (id)wrapAsset:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
