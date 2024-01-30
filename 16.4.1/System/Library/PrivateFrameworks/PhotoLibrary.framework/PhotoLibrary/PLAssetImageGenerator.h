@class AVAssetImageGenerator;

@interface PLAssetImageGenerator : NSObject

@property (retain, nonatomic) AVAssetImageGenerator *imageGenerator;
@property (nonatomic) BOOL inUse;

- (id)initWithAsset:(id)a0;
- (void)dealloc;

@end
