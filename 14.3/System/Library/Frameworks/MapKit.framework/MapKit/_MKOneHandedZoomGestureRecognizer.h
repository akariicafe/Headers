@class UITapGestureRecognizer, _MKZoomingPanGestureRecognizer, NSString;
@protocol MKZoomingGestureControlConfiguration;

@interface _MKOneHandedZoomGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    BOOL _didReceive1stTap;
    BOOL _timerOn;
}

@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) _MKZoomingPanGestureRecognizer *panGestureRecognizer;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } locationOfTapGesture;
@property (copy, nonatomic) id<MKZoomingGestureControlConfiguration> configuration;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) double velocity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setAllowedPressTypes:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)reset;
- (void)dealloc;
- (void)_startTapTimer:(double)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_clearTapTimer;
- (void)_tapGestureRecognizerStateDidChange:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)_tooSlow:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_panGestureRecognizerStateDidChange:(id)a0;

@end
