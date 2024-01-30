@class AVAsset, AVAssetImageGenerator;

@interface TSDMoviePosterImageGenerator : NSObject {
    AVAsset *_asset;
    AVAssetImageGenerator *_assetImageGenerator;
    _Atomic int _isCancelled;
}

@property (nonatomic) struct CGSize { double width; double height; } maximumSize;

- (id)initWithAsset:(id)a0;
- (void)cancelAllCGImageGeneration;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGImage { } *)copyCGImageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 error:(id *)a1;
- (struct CGSize { double x0; double x1; })p_scaledSizeForRenderSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)p_copyCGImageUsingAssetImageGeneratorForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 error:(id *)a1;
- (struct CGImage { } *)p_copyCGImageForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 error:(id *)a1;
- (struct CGImage { } *)p_copyCGImageUsingAssetReaderForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct CGImage { } *)p_applyPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 toImage:(struct CGImage { } *)a1;
- (void)generateCGImageAsynchronouslyForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;

@end
