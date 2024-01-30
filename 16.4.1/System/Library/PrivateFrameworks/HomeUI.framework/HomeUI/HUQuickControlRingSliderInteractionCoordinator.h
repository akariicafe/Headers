@class UIView, NSString, HUQuickControlViewProfile;
@protocol HUQuickControlRingSliderInteractionCoordinatorDelegate, HUQuickControlIncrementalConvertibleProfile, HUQuickControlInteractiveView;

@interface HUQuickControlRingSliderInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlViewInteractionDelegate>

@property (nonatomic) struct { double minimum; double maximum; } modelRangeValue;
@property (readonly, nonatomic) HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile> *viewProfile;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (nonatomic, getter=isFirstTouchDown) BOOL firstTouchDown;
@property (readonly, nonatomic) UIView<HUQuickControlInteractiveView> *controlView;
@property (nonatomic) BOOL hasSecondaryValue;
@property (weak, nonatomic) id<HUQuickControlRingSliderInteractionCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)value;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)setValue:(id)a0;
- (void)_updateControlViewValueOfType:(unsigned long long)a0 withValue:(double)a1;
- (void)_updateModelValue:(struct { double x0; double x1; })a0 roundValue:(BOOL)a1 notifyDelegate:(BOOL)a2;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (void)controlView:(id)a0 interactionStateDidChange:(BOOL)a1 forFirstTouch:(BOOL)a2;
- (void)controlView:(id)a0 valueDidChange:(id)a1;
- (id)initWithControlView:(id)a0 delegate:(id)a1;

@end
