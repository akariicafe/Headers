@class PHAsset;

@interface _PHCropInfo : NSObject

@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) double cropScore;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 cropScore:(double)a1;

@end
