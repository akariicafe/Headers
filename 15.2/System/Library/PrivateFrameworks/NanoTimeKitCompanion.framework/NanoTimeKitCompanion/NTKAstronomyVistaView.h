@class CLKUIQuadView, NSString, NUNIView, NSMutableSet, NUNIScene, CLKDevice;
@protocol NTKAstronomyVistaViewObserver;

@interface NTKAstronomyVistaView : UIView <NUNIAnimationObserver, NUNIViewDelegate> {
    NUNIView *_viewer;
    NSMutableSet *_activeContentsAnimations;
    unsigned long long _vista;
    unsigned char _isSupplemental : 1;
    unsigned char _isDisplayOn : 1;
    unsigned char _isAnimating : 1;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (weak, nonatomic) id<NTKAstronomyVistaViewObserver> observer;
@property (retain, nonatomic) NUNIScene *scene;
@property (readonly, nonatomic) CLKUIQuadView *quadView;
@property (nonatomic) float supplementalSpheroidSize;
@property (nonatomic) float supplementalHorizontalInset;
@property (nonatomic) float supplementalTopInset;
@property (nonatomic) float supplementalBottomInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAnimation;
- (void)layoutSubviews;
- (id)snapshotImage;
- (unsigned long long)vista;
- (void).cxx_destruct;
- (void)setOpaque:(BOOL)a0;
- (void)dealloc;
- (void)stopAnimation;
- (void)_updateAnimation;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1 textureSuffix:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1 textureSuffix:(id)a2 colorSpace:(long long)a3;
- (void)setMinFrameInterval:(int)a0;
- (void)updateSunLocationAnimated:(BOOL)a0;
- (void)_setVista:(unsigned long long)a0 scene:(id)a1;
- (void)universeAnimationFinished:(id)a0;
- (void)viewWillDisplay:(id)a0 forTime:(double)a1;
- (id)rotatable:(unsigned long long)a0;
- (void)showSupplemental:(BOOL)a0 animated:(BOOL)a1;
- (id)generateAnimationArrayFromVista:(unsigned long long)a0 toVista:(unsigned long long)a1;
- (void)setVista:(unsigned long long)a0;

@end
