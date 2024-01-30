@class SBUIAction, UIImageView, SBUIActionViewLabel, UIView, NSArray, MTVisualStylingProvider;

@interface SBUIActionView : UIView {
    BOOL _interfaceOrientationIsPortrait;
    UIImageView *_imageView;
    UIView *_textContainer;
    SBUIActionViewLabel *_titleLabel;
    SBUIActionViewLabel *_subtitleLabel;
    UIView *_highlightView;
    NSArray *_imageViewLayoutConstraints;
    MTVisualStylingProvider *_visualStylingProviderStroke;
    MTVisualStylingProvider *_visualStylingProviderFill;
}

@property (readonly, nonatomic) SBUIAction *action;
@property (nonatomic) long long imagePosition;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) double leadingContentMargin;
@property (readonly, nonatomic) double trailingContentMargin;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAction:(id)a0;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;
- (void)_updateImageViewLayoutConstraints;
- (void)setHighlighted:(BOOL)a0 withFeedbackRetargetBehavior:(id)a1;

@end
