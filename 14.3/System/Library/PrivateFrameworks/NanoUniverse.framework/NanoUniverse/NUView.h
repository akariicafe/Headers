@class NSString, CLKDevice, NUMetalQuad, CLKUIResourceProviderKey, NSBundle, CLKUIQuadView, NUScene, NUResources;
@protocol NUViewDelegate;

@interface NUView : UIView <CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate> {
    CLKDevice *_device;
    CLKUIQuadView *_quadView;
    CLKUIResourceProviderKey *_resourceProviderKey;
    NUResources *_resources;
    NUMetalQuad *_quad;
    NSBundle *_bundle;
}

@property (retain, nonatomic) NUScene *scene;
@property (weak, nonatomic) id<NUViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stopAnimation;
- (void)setOpaque:(BOOL)a0;
- (void)layoutSubviews;
- (void)setAnimationFrameInterval:(int)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startAnimation;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)quadViewWillDisplay:(id)a0 forTime:(double)a1;
- (id)quadView;
- (id)provideAtlasBacking:(id)a0;
- (id)resourceProviderKey;

@end
