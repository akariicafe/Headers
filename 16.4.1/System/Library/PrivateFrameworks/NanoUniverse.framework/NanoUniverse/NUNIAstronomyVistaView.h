@class NUNIRenderer, NSString, NSArray, CLKDevice, CALayer, NUNIQuad, NUNIAstronomyVistaConfiguration, NSMutableSet, CLKUIQuadView, NUNIScene;
@protocol NUNIAstronomyVistaViewObserver;

@interface NUNIAstronomyVistaView : UIView <NUNIAnimationObserver, CLKUIQuadViewDelegate> {
    CLKUIQuadView *_quadView0;
    NUNIQuad *_quad;
    NUNIScene *_scene;
    NUNIRenderer *_renderer;
    CALayer *_contentMaskLayer;
    NSMutableSet *_activeContentsAnimations;
    unsigned long long _vista;
    unsigned char _isSupplemental : 1;
    unsigned char _isDisplayOn : 1;
    unsigned char _isAnimating : 1;
    NUNIAstronomyVistaConfiguration *_configuration;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (weak, nonatomic) id<NUNIAstronomyVistaViewObserver> observer;
@property (retain, nonatomic) NUNIScene *scene;
@property (readonly, nonatomic) NSArray *quadViews;
@property (nonatomic) float supplementalSpheroidSize;
@property (nonatomic) float supplementalHorizontalInset;
@property (nonatomic) float supplementalTopInset;
@property (nonatomic) float supplementalBottomInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)snapshotImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)setOpaque:(BOOL)a0;
- (void)startAnimation;
- (void)_startAnimation;
- (void)removeBackBuffers;
- (void)dealloc;
- (void)layoutSubviews;
- (void)discardContents;
- (void)stopAnimation;
- (void).cxx_destruct;
- (void)_stopAnimation;
- (void)setCacheDirectory:(id)a0;
- (void)_updateAnimation;
- (id)generateAnimationArrayFromVista:(unsigned long long)a0 toVista:(unsigned long long)a1 transitionStyle:(unsigned long long)a2;
- (void)quadViewWillDisplay:(id)a0 forTime:(double)a1;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (id)rotatable:(unsigned long long)a0;
- (void)setMinFrameInterval:(int)a0;
- (void)setVista:(unsigned long long)a0;
- (void)showSupplemental:(BOOL)a0 animated:(BOOL)a1;
- (void)updateSunLocationAnimated:(BOOL)a0;
- (unsigned long long)vista;
- (void)setTritiumBrightness:(double)a0;
- (id)_earthLunaPanAnimationArrayFromSceneDescription:(id)a0 toSceneDescription:(id)a1;
- (id)_mtlQuadView;
- (id)_panAnimationArrayFromSceneDescription:(id)a0 toSceneDescription:(id)a1;
- (void)_setVista:(unsigned long long)a0 scene:(id)a1;
- (id)_zoomAnimationArrayFromSceneDescription:(id)a0 toSceneDescription:(id)a1;
- (float)computeDimming;
- (id)contentMaskLayer;
- (void)disableCloudDataFetch:(BOOL)a0;
- (id)generateAnimationArrayFromSceneDescription:(id)a0 toSceneDescription:(id)a1 transitionStyle:(unsigned long long)a2;
- (id)generateAnimationArrayFromVista:(unsigned long long)a0 fromSceneBlock:(id /* block */)a1 toVista:(unsigned long long)a2 toSceneBlock:(id /* block */)a3 transitionStyle:(unsigned long long)a4;
- (void)purgeUnused;
- (void)setAPLFilterAmount:(double)a0;
- (void)universeAnimationFinished:(id)a0;

@end
