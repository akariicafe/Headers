@class NUImageLayout, NUColorSpace, NUPixelFormat, NSObject;
@protocol OS_dispatch_queue, NUMutablePurgeableImage;

@interface NUImageAccumulationNode : NURenderNode {
    id<NUMutablePurgeableImage> _image;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NUImageLayout *layout;
@property (readonly, nonatomic) struct { long long width; long long height; } imageSize;
@property (readonly, nonatomic) NUPixelFormat *pixelFormat;
@property (readonly, nonatomic) NUColorSpace *colorSpace;
@property (readonly, nonatomic) id<NUMutablePurgeableImage> image;

- (id)debugQuickLookObject;
- (void).cxx_destruct;
- (id)_image;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)_newImage;
- (id)initWithImageSize:(struct { long long x0; long long x1; })a0 tileSize:(struct { long long x0; long long x1; })a1 borderSize:(struct { long long x0; long long x1; })a2 pixelFormat:(id)a3 colorSpace:(id)a4 input:(id)a5;

@end
