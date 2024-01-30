@protocol MTLTexture, MTLDevice;

@interface PXGCornerRadiusMask : NSObject {
    id<MTLDevice> _device;
}

@property (retain) id<MTLTexture> atomicTexture;
@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) long long texturePixelSide;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) double maxCornerRadius;
@property (readonly, nonatomic) long long numberOfSlices;
@property (readonly, nonatomic) long long byteSize;

+ (id)_loadQueue;
+ (id)cornerRadiusMaskForDevice:(id)a0 maxCornerRadius:(double)a1 screenScale:(double)a2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDevice:(id)a0 maxCornerRadius:(double)a1 screenScale:(double)a2;
- (void)_loadCornerRadiusTexture;

@end
