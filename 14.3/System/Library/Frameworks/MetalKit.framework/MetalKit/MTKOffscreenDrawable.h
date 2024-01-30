@class NSString, CAMetalLayer;
@protocol MTLTexture, MTLDevice;

@interface MTKOffscreenDrawable : NSObject <CAMetalDrawable> {
    id<MTLTexture> _texture;
    unsigned long long _pixelFormat;
    struct CGSize { double width; double height; } _size;
    BOOL _textureDirty;
}

@property (readonly) CAMetalLayer *layer;
@property (readonly) id<MTLTexture> texture;
@property (readonly, nonatomic) double presentedTime;
@property (readonly, nonatomic) unsigned long long drawableID;
@property (retain, nonatomic) id<MTLDevice> device;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) unsigned long long pixelFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)present;
- (void)presentAfterMinimumDuration:(double)a0;
- (void).cxx_destruct;
- (void)presentAtTime:(double)a0;
- (void)addPresentedHandler:(id /* block */)a0;
- (id)initWithDevice:(id)a0 pixelFormat:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 drawableID:(unsigned long long)a3;

@end
