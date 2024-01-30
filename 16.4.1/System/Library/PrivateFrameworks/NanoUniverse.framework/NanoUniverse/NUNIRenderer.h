@interface NUNIRenderer : NSObject

@property (readonly, nonatomic) unsigned long long rendererStyle;
@property (readonly, nonatomic) unsigned long long pixelFormat;

+ (void)_deallocInstanceWithPixelFormat:(unsigned long long)a0 rendererStyle:(unsigned long long)a1;
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)a0 textureSuffix:(id)a1 rendererStyle:(unsigned long long)a2;

- (void)discard;
- (void)dealloc;
- (void)_asyncDeallocInstance;
- (id)initWithPixelFormat:(unsigned long long)a0 textureSuffix:(id)a1 rendererStyle:(unsigned long long)a2;
- (void)purgeUnusedWithScene:(id)a0;
- (void)renderOffscreenWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 commandBuffer:(id)a2;
- (void)renderWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 commandBuffer:(id)a2 passDescriptor:(id)a3;
- (void)renderWithScene:(id)a0 viewport:(struct NUNIViewport { int x0; int x1; })a1 renderEncoder:(id)a2;

@end
