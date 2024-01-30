@class NTKDelayedBlock, CLLocation, NUNIAstronomyLocationDot, NUNIAstronomyVistaView, CLKDevice, NSDate;

@interface NTKAstronomyRichComplicationContentView : UIView <NUNIAstronomyVistaViewObserver, CLKUITimeTravel> {
    NUNIAstronomyVistaView *_astronomyVistaView;
    NUNIAstronomyLocationDot *_locationDot;
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

@property (nonatomic) BOOL editing;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_startAnimating;
- (void)_stopAnimating;
- (void)_hideLocationDot;
- (BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)a0;
- (void)_showLocationDot;
- (void)applyPausedUpdate:(BOOL)a0;
- (void)astronomyVistaViewContentsAnimationFinished:(id)a0;
- (void)astronomyVistaViewWillDisplay:(id)a0 forTime:(double)a1;
- (void)handleOrdinaryScreenWake;
- (void)handleTemplateMetadata:(id)a0 reason:(long long)a1;
- (void)handleWristRaiseScreenWake;
- (id)initForDevice:(id)a0 family:(long long)a1 diameter:(double)a2;
- (void)prepareWristRaiseAnimation;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;

@end
