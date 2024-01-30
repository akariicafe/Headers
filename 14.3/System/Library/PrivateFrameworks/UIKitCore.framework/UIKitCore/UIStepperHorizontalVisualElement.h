@class NSString, UIImageView, NSTimer, NSMutableDictionary, UIViewPropertyAnimator, UIButton;
@protocol UIStepperControl;

@interface UIStepperHorizontalVisualElement : UIView <_UICursorInteractionDelegate, UIStepperVisualElement> {
    BOOL _isRtoL;
    UIImageView *_leftBackground;
    UIImageView *_rightBackground;
    UIImageView *_leftHighlight;
    UIImageView *_rightHighlight;
    UIImageView *_middleView;
    UIButton *_plusButton;
    UIButton *_minusButton;
    NSTimer *_repeatTimer;
    long long _repeatCount;
    NSMutableDictionary *_dividerImages;
    UIViewPropertyAnimator *_leftAlphaAnimator;
    UIViewPropertyAnimator *_rightAlphaAnimator;
    UIViewPropertyAnimator *_leftFrameAnimator;
    UIViewPropertyAnimator *_rightFrameAnimator;
}

@property (class, readonly) struct CGSize { double x0; double x1; } initialSize;
@property (class, readonly) struct CGSize { double x0; double x1; } initialIntrinsicSize;
@property (class, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } initialAlignmentRectInsets;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) double value;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;
@property (nonatomic) double stepValue;
@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (nonatomic) BOOL wraps;
@property (nonatomic) BOOL autorepeat;
@property (weak, nonatomic) id<UIStepperControl> stepperControl;

+ (id)_highlightOpacityAnimation;
+ (id)_highlightSizeAnimation;

- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (void)cancelTrackingWithEvent:(id)a0;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void)setTintColor:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_updateButton:(id)a0 backgroundView:(id)a1 highlightView:(id)a2 backgroundImage:(id)a3 highlightImage:(id)a4 onRight:(BOOL)a5;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)cursorInteraction:(id)a0 willEnterRegion:(id)a1;
- (void)_updateButtonEnabled;
- (void)_updateCount:(id)a0;
- (void)_updateBackgroundForButtonState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftHighlightFrame;
- (void)_updateDividerImageForButtonState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rightHighlightFrame;
- (id)_alphaAnimator:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftHighlightInsetFrame;
- (void)_updateHighlight:(id)a0 button:(id)a1 onRight:(BOOL)a2;
- (void)_updateHighlightingAtPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rightHighlightInsetFrame;
- (void)setDividerImage:(id)a0 forLeftSegmentState:(unsigned long long)a1 rightSegmentState:(unsigned long long)a2;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1;
- (void)setIncrementImage:(id)a0 forState:(unsigned long long)a1;
- (id)incrementImageForState:(unsigned long long)a0;
- (void)setDecrementImage:(id)a0 forState:(unsigned long long)a1;
- (id)decrementImageForState:(unsigned long long)a0;
- (id)dividerImageForLeftSegmentState:(unsigned long long)a0 rightSegmentState:(unsigned long long)a1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_startTimer;
- (void)_stopTimer;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)cursorInteraction:(id)a0 willExitRegion:(id)a1;
- (id)backgroundImageForState:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forControl:(id)a1;
- (void)_commonStepperInit;
- (struct CGSize { double x0; double x1; })intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0 forControl:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsetsForControl:(id)a0;

@end
