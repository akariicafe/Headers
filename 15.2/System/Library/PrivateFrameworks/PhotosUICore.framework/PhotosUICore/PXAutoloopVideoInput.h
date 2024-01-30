@class AVAsset, NSURL;

@interface PXAutoloopVideoInput : NSObject

@property (readonly, copy, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) NSURL *imageURL;

+ (id)inputWithAsset:(id)a0 imageURL:(id)a1;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 imageURL:(id)a1;

@end
