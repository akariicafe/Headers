@class UIView, NSString, UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UILongPressGestureRecognizer;
@protocol MediaControlsMasterVolumeSliderDelegate;

@interface MediaControlsMasterVolumeSlider : MediaControlsVolumeSlider <UIGestureRecognizerDelegate> {
    UIView *_growingThumbView;
    double _forcePercent;
    float _initialX;
}

@property (nonatomic) long long syncState;
@property (retain, nonatomic) UIImpactFeedbackGenerator *positiveFeedbackGenerator;
@property (retain, nonatomic) UINotificationFeedbackGenerator *negativeFeedbackGenerator;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;
@property (nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled;
@property (weak, nonatomic) id<MediaControlsMasterVolumeSliderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelTrackingWithEvent:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)handleLongPress:(id)a0;
- (void)shrinkThumbAfterDelay:(double)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createThumbView;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;

@end
