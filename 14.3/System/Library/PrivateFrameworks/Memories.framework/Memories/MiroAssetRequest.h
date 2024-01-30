@class PHAsset, PHAssetResource;

@interface MiroAssetRequest : NSObject

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) PHAssetResource *resource;
@property (nonatomic) int requestID;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) double progress;
@property (nonatomic) double sizeFactor;

- (void).cxx_destruct;
- (id)description;

@end
