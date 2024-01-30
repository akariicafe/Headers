@class NSString, UIActivityIndicatorView, PLRoundProgressView, UIVisualEffectView, UILabel, NSArray;

@interface PUProgressIndicatorView : UIView {
    UIActivityIndicatorView *_spinnerView;
    PLRoundProgressView *_pieProgressView;
    UIVisualEffectView *_visualEffectView;
    UILabel *_messageLabel;
    NSArray *_spinnerViewConstraints;
    NSArray *_pieProgressViewConstraints;
    NSArray *_backgroundViewConstraints;
    NSArray *_messageLabelConstraints;
    NSArray *_labelAndSpinnerConstraints;
    NSArray *_labelAndPieProgressConstraints;
    BOOL _wantsImmediateHide;
    BOOL _wantsAnimatedHide;
    id /* block */ _completionHandler;
}

@property (nonatomic, setter=_setCurrentState:) long long _currentState;
@property (nonatomic, setter=_setTimestampBeganShowing:) double _timestampBeganShowing;
@property (readonly) BOOL isStyleCompactBackground;
@property (readonly) BOOL isStyleDark;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic, getter=isShowingProgress) BOOL showingProgress;
@property (nonatomic) double currentProgress;
@property (copy, nonatomic) NSString *localizedMessage;
@property (nonatomic, setter=setDeterminate:) BOOL isDeterminate;
@property (nonatomic) BOOL showsBackground;
@property (readonly) double defaultProgressIndicatorDelay;

- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_updateSubviewsOrdering;
- (void)_endShowingProgressIfReady;
- (void)_handleBeginShowingAnimated:(BOOL)a0 wasImmediate:(BOOL)a1;
- (id)_newVisualEffectBackgroundView;
- (void)_updatePieProgress;
- (void)_updateProgressViewsAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_updateProgressViewsWithAnimation:(long long)a0 completion:(id /* block */)a1;
- (void)beginShowingProgressImmediately:(BOOL)a0 animated:(BOOL)a1;
- (void)beginShowingProgressWithDelay:(double)a0 animated:(BOOL)a1;
- (void)endShowingProgressImmediately:(BOOL)a0 animated:(BOOL)a1 withCompletionHandler:(id /* block */)a2;

@end
