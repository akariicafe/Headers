@class UIHoverGestureRecognizer, NSString, NSArray, UISelectionFeedbackGenerator, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface CCUISteppedSliderView : CCUIBaseSliderView <UIGestureRecognizerDelegate, CCUIContentModuleExpandedStateListener, CCUIContentClipping> {
    NSArray *_stepBackgroundViews;
    NSArray *_separatorViews;
    double _startingHeight;
    float _startingValue;
    BOOL _gestureStartedInside;
    BOOL _valueHasBeenAdjustedForSteppedSlider;
    UIPanGestureRecognizer *_valueChangeGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _hoverStep;
    BOOL _isHoverHighlighting;
    UIHoverGestureRecognizer *_hoverGestureRecognizer;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
}

@property (nonatomic) unsigned long long numberOfSteps;
@property (nonatomic) BOOL firstStepIsDisabled;
@property (nonatomic) BOOL firstStepIsOff;
@property (nonatomic) unsigned long long step;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isContentClippingRequired) BOOL contentClippingRequired;

- (id)_createSeparatorView;
- (void)_layoutStepViews;
- (void)_endTrackingWithGestureRecognizer:(id)a0;
- (float)_valueForTouchTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)_createSeparatorViewsForNumberOfSteps:(unsigned long long)a0;
- (float)_valueForTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)didMoveToWindow;
- (void)setValue:(float)a0 andUpdateStep:(BOOL)a1;
- (void)_updateValueForPanGestureRecognizer:(id)a0 withAbsolutePosition:(BOOL)a1 forContinuedGesture:(BOOL)a2;
- (id)topLevelBlockingGestureRecognizers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_continueTrackingWithGestureRecognizer:(id)a0;
- (void)_handleHoverGestureRecognizer:(id)a0;
- (void)layoutSubviews;
- (void)_handleValueChangeGestureRecognizer:(id)a0;
- (void)_handleValueTapGestureRecognizer:(id)a0;
- (void)_updateStepFromValue:(float)a0 playHaptic:(BOOL)a1 toggleCurrentStep:(BOOL)a2;
- (unsigned long long)_stepFromValue:(float)a0 avoidCurrentStep:(BOOL)a1;
- (unsigned long long)_stepFromValue:(float)a0;
- (void)_createStepViewsForNumberOfSteps:(unsigned long long)a0;
- (void)_updateStepViewVisibility;
- (void)_updateStepFromValue:(float)a0 playHaptic:(BOOL)a1;
- (float)_valueForPanGestureRecognizer:(id)a0 withAbsoluteReference:(BOOL)a1;
- (void)_beginTrackingWithGestureRecognizer:(id)a0;
- (id)_createBackgroundViewForStep:(unsigned long long)a0;
- (void)contentModuleWillTransitionToExpandedContentMode:(BOOL)a0;
- (float)_valueFromStep:(unsigned long long)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)setValue:(float)a0;

@end
