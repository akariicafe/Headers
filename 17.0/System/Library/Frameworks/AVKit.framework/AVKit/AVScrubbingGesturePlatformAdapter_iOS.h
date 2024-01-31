@class AVScrubbingPanGestureRecognizer, NSString, AVTouchGestureRecognizer, AVScrubbingGesturePlatformConfiguration, UIView;

@interface AVScrubbingGesturePlatformAdapter_iOS : AVScrubbingGesturePlatformAdapter <UIGestureRecognizerDelegate> {
    UIView *_view;
    AVScrubbingPanGestureRecognizer *_panGestureRecognizer;
    AVTouchGestureRecognizer *_touchGestureRecognizer;
    float _timelineVelocity;
    long long _gestureActiveCount;
    AVScrubbingGesturePlatformConfiguration *_gestureConfiguration;
    float _coordinateVelocityConstant;
    float _coordinateVelocityScale;
    float _deviceCoordinateVelocityScaleFactor;
    BOOL _gestureEnabled;
    struct CGPoint { double x; double y; } _translation;
}

@property (nonatomic) double scrubbingWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (BOOL)gestureEnabled;
- (float)timelineVelocity;
- (void)setGestureEnabled:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (struct CGPoint { double x0; double x1; })translation;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_panGestureAction:(id)a0;
- (BOOL)gestureActive;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_touchGestureAction:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
