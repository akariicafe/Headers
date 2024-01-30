@class CLKUIQuadView, NSString, NUView, NUScene, CLKDevice, NSMutableSet;
@protocol NTKAstronomyVistaViewObserver;

@interface NTKAstronomyVistaView : UIView <NUAnimationObserver, NUViewDelegate> {
    NUView *_viewer;
    NSMutableSet *_activeContentsAnimations;
    unsigned long long _vista;
    unsigned char _isSupplemental : 1;
    unsigned char _isDisplayOn : 1;
    unsigned char _isAnimating : 1;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (weak, nonatomic) id<NTKAstronomyVistaViewObserver> observer;
@property (retain, nonatomic) NUScene *scene;
@property (readonly, nonatomic) CLKUIQuadView *quadView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)snapshotImage;
- (void).cxx_destruct;
- (unsigned long long)vista;
- (void)dealloc;
- (void)stopAnimation;
- (void)setOpaque:(BOOL)a0;
- (void)layoutSubviews;
- (void)startAnimation;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
- (void)setMinFrameInterval:(int)a0;
- (void)updateSunLocationAnimated:(BOOL)a0;
- (void)_updateAnimation;
- (void)_setVista:(unsigned long long)a0 scene:(id)a1;
- (void)universeAnimationFinished:(id)a0;
- (void)viewWillDisplay:(id)a0 forTime:(double)a1;
- (id)rotatable:(unsigned long long)a0;
- (void)showSupplemental:(BOOL)a0 animated:(BOOL)a1;
- (id)generateAnimationArrayFromVista:(unsigned long long)a0 toVista:(unsigned long long)a1;
- (void)setVista:(unsigned long long)a0;
- (void)setZoomFraction:(float)a0 targetDiameter:(float)a1;

@end
