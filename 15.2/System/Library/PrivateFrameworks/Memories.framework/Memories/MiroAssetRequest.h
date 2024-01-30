@class PHAsset, PHAssetResource;

@interface MiroAssetRequest : NSObject

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) PHAssetResource *resource;
@property (nonatomic) int requestID;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) double progress;
@property (nonatomic) double sizeFactor;

- (id)description;
- (void).cxx_destruct;

@end
