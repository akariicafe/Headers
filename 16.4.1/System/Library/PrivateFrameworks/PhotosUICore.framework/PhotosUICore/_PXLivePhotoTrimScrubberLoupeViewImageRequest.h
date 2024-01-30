@class AVAsset, AVVideoComposition;

@interface _PXLivePhotoTrimScrubberLoupeViewImageRequest : NSObject

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceTime;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double scale;
@property (readonly, nonatomic) BOOL isValid;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
