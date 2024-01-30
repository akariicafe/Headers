@class NSMutableArray, NSLayoutConstraint, TKVibrationRecorderProgressDotImageView, UIView;
@protocol TKVibrationRecorderStyleProvider;

@interface TKVibrationRecorderProgressView : UIView {
    double _maximumTimeInterval;
    double _currentVibrationComponentDidBeginTimeInterval;
    double _previousPauseDidBeginTimeInterval;
    id<TKVibrationRecorderStyleProvider> _styleProvider;
    UIView *_progressView;
    NSLayoutConstraint *_progressViewWidthConstraint;
    TKVibrationRecorderProgressDotImageView *_dotForCurrentVibrationComponent;
    NSLayoutConstraint *_dotForCurrentVibrationComponentLeftConstraint;
    NSLayoutConstraint *_dotForCurrentVibrationComponentRightConstraint;
    NSMutableArray *_dots;
}

@property (nonatomic) double currentTimeInterval;
@property (nonatomic) int roundedCornersCompensationDelayMode;

- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityLabel;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityValue;
- (struct CGSize { double x0; double x1; })_dotSize;
- (id)initWithMaximumTimeInterval:(double)a0 styleProvider:(id)a1;
- (void)clearAllVibrationComponents;
- (void)vibrationComponentDidEnd;
- (void)vibrationComponentDidStart;
- (double)_cappedValueForTimeInterval:(double)a0;
- (struct UIOffset { double x0; double x1; })_dotInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForDotAtTimeInterval:(double)a0 duration:(double)a1;
- (void)_updateHorizontalConstraintsOfDotForCurrentVibrationComponent:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_resizableDotImage;
- (id)_dotTintColor;
- (void)_updateProgressViewBackgroundColor;

@end
