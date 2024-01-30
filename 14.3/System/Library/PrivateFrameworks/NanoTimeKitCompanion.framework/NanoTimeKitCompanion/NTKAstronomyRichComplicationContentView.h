@class NTKDelayedBlock, CLKUIQuadView, NTKAstronomyLocationDot, CLLocation, NSDate, CLKDevice, NTKAstronomyVistaView;

@interface NTKAstronomyRichComplicationContentView : UIView <NTKAstronomyVistaViewObserver, NTKTimeTravel> {
    NTKAstronomyVistaView *_astronomyVistaView;
    NTKAstronomyLocationDot *_locationDot;
    CLKDevice *_device;
    long long _family;
    NSDate *_timelineDate;
    NSDate *_timeTravelDate;
    unsigned char _isPaused : 1;
    unsigned char _isAnimating : 1;
    unsigned char _isRenderOneFrame : 1;
    NTKDelayedBlock *_stopAnimationDelayedBlock;
    CLLocation *_currentLocation;
}

@property (readonly, nonatomic) CLKUIQuadView *quadView;

- (void)_stopAnimating;
- (void)_startAnimating;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)prepareWristRaiseAnimation;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;
- (void)handleWristRaiseScreenWake;
- (void)handleOrdinaryScreenWake;
- (void)astronomyVistaViewContentsAnimationFinished:(id)a0;
- (void)astronomyVistaViewWillDisplay:(id)a0 forTime:(double)a1;
- (BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)a0;
- (id)initForDevice:(id)a0 family:(long long)a1 diameter:(double)a2;
- (void)applyPausedUpdate:(BOOL)a0;
- (void)handleTemplateMetadata:(id)a0 reason:(long long)a1;
- (void)_showLocationDot;
- (void)_hideLocationDot;

@end
