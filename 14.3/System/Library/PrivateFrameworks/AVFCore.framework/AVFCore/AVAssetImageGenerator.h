@class AVAsset, NSString, AVAssetImageGeneratorInternal, AVVideoComposition;
@protocol AVVideoCompositing;

@interface AVAssetImageGenerator : NSObject {
    AVAssetImageGeneratorInternal *_priv;
}

@property (readonly, nonatomic) AVAsset *asset;
@property (nonatomic) BOOL appliesPreferredTrackTransform;
@property (nonatomic) struct CGSize { double x0; double x1; } maximumSize;
@property (copy, nonatomic) NSString *apertureMode;
@property (copy, nonatomic) AVVideoComposition *videoComposition;
@property (readonly, nonatomic) id<AVVideoCompositing> customVideoCompositor;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } requestedTimeToleranceBefore;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } requestedTimeToleranceAfter;

+ (id)assetImageGeneratorWithAsset:(id)a0;

- (id)init;
- (void)dealloc;
- (struct CGImage { } *)copyCGImageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 actualTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 error:(id *)a2;
- (id)initWithAsset:(id)a0;
- (void)_serverDied;
- (id)_NSErrorForError:(int)a0;
- (BOOL)prefersStandardDynamicRange;
- (struct CGSize { double x0; double x1; })_scaledSizeForRenderSize:(struct CGSize { double x0; double x1; })a0;
- (id)_videoSettingWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)_makeAutoreleasedAssetReader;
- (struct CGImage { } *)_copyCGImageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingAssetReader:(id)a1 error:(id *)a2;
- (id)_optionsDictionary;
- (BOOL)_ensureFigAssetImageGeneratorAllowingSynchronousPropertyLoad:(BOOL)a0 error:(id *)a1;
- (id)_requestWithRequestID:(id)a0;
- (void)generateCGImagesAsynchronouslyForTimes:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelAllCGImageGeneration;
- (void)setPrefersStandardDynamicRange:(BOOL)a0;
- (void)_didGenerateCGImage:(id)a0;
- (void)_failedToGenerateCGImage:(id)a0;

@end
