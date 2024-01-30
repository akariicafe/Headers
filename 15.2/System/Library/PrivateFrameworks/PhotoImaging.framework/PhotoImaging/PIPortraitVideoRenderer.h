@class PTRenderPipeline, NSDate;
@protocol PTRenderState, MTLDevice;

@interface PIPortraitVideoRenderer : NSObject {
    PTRenderPipeline *_renderPipeline;
    id<PTRenderState> _renderState;
}

@property (nonatomic, getter=isInUse) BOOL inUse;
@property (retain, nonatomic) NSDate *lastUseTime;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) struct { long long width; long long height; } colorSize;
@property (readonly, nonatomic) struct { long long width; long long height; } disparitySize;
@property (readonly, nonatomic) int quality;
@property (readonly, nonatomic) long long debugMode;

+ (void)renderOnDevice:(id)a0 colorSize:(struct { long long x0; long long x1; })a1 disparitySize:(struct { long long x0; long long x1; })a2 quality:(int)a3 debugMode:(long long)a4 usingBlock:(id /* block */)a5;
+ (void)prewarmRendererForDevice:(id)a0 colorSize:(struct { long long x0; long long x1; })a1 disparitySize:(struct { long long x0; long long x1; })a2 quality:(int)a3 debugMode:(long long)a4;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 colorSize:(struct { long long x0; long long x1; })a1 disparitySize:(struct { long long x0; long long x1; })a2 quality:(int)a3 debugMode:(long long)a4;
- (void)renderUsingBlock:(id /* block */)a0;

@end
