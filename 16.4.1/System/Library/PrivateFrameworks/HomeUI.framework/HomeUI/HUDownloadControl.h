@class UIColor, NSMutableDictionary, UIImageView, HUDownloadProgressView, UILabel, UIView;

@interface HUDownloadControl : UIControl {
    UILabel *_controlTitleLabel;
    UIView *_backgroundView;
    UIImageView *_controlImageView;
    NSMutableDictionary *_controlStatusTypeToTitle;
    long long _controlStatusRevision;
    HUDownloadProgressView *_downloadProgressView;
    BOOL _hadFirstTouchHighlight;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _controlImageEdgeInsets;
    UIView *_transientContentView;
    long long _transientContentViewTransactionCount;
    BOOL _traitCollectionDidChangeWasCalled;
}

@property (nonatomic) BOOL allowsAddImage;
@property (nonatomic) struct HUDownloadControlStatus { long long statusType; double downloadProgress; } controlStatus;
@property (nonatomic) long long displayStyle;
@property (nonatomic) BOOL scaleImageForAccessibility;
@property (nonatomic) BOOL showStopImageWhenDownloading;
@property (retain, nonatomic) UIColor *filledTintColor;
@property (nonatomic) double minTitleLength;

+ (id)_imageNamed:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)_newControlTitleLabel;
+ (id)controlTitleFontForControlStatusType:(long long)a0;
+ (struct CGSize { double x0; double x1; })_expectedSizeForControlStatusType:(long long)a0 controlTitle:(id)a1 hasControlImage:(BOOL)a2 displayScale:(double)a3 preferredHeight:(double)a4 minTitleLength:(double)a5;

- (void)setContentHorizontalAlignment:(long long)a0;
- (void)_removeAllAnimations:(BOOL)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })maximumSizeWithPreferredHeight:(double)a0;
- (void)_beginTransientContentViewTransaction;
- (id)_currentContentSuperview;
- (void)_endTransientContentViewTransaction;
- (void)_updateBackgroundViewCornerRadius;
- (void)_updateControlImageViewAnimation;
- (void)_updateControlStatusProperties;
- (void)_updateControlTitleLabelVisualProperties;
- (void)setControlStatus:(struct HUDownloadControlStatus { long long x0; double x1; })a0 animated:(BOOL)a1;
- (void)setTitle:(id)a0 forControlStatusType:(long long)a1;
- (id)titleForControlStatusType:(long long)a0;

@end
