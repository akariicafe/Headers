@class NUNIMetalQuad, NSString, CLKDevice, CLKUIResourceProviderKey, NSBundle, CLKUIQuadView, NUNIResources, NUNIScene;
@protocol NUNIViewDelegate;

@interface NUNIView : UIView <CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate> {
    CLKDevice *_device;
    CLKUIQuadView *_quadView;
    CLKUIResourceProviderKey *_resourceProviderKey;
    NUNIResources *_resources;
    NUNIMetalQuad *_quad;
    NSBundle *_bundle;
    NSString *_textureSuffix;
}

@property (retain, nonatomic) NUNIScene *scene;
@property (weak, nonatomic) id<NUNIViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimation;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setAnimationFrameInterval:(int)a0;
- (void)setOpaque:(BOOL)a0;
- (void)dealloc;
- (void)stopAnimation;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureSuffix:(id)a1 colorSpace:(long long)a2;
- (id)quadView;
- (void)quadViewWillDisplay:(id)a0 forTime:(double)a1;
- (id)provideAtlasBacking:(id)a0;
- (id)resourceProviderKey;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textureSuffix:(id)a1;

@end
