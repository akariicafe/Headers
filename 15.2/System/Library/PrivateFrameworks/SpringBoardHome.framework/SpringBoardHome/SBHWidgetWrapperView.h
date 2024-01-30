@class SBHShadowedWidgetView, NSString, SBIconView, UILabel, UIView, NSLayoutConstraint;

@interface SBHWidgetWrapperView : UIView

@property (readonly, nonatomic) SBHShadowedWidgetView *shadowedWidgetView;
@property (readonly, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSLayoutConstraint *widgetToTitleSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentWidthConstraint;
@property (readonly, nonatomic) BOOL titleAndSubtitleVisible;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) SBIconView *contentView;
@property (readonly, nonatomic) UIView *containerView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic, getter=isHoverAnimationEnabled) BOOL hoverAnimationEnabled;
@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } hoverTransform;
@property (nonatomic) double extraSpacingBetweenWidgetAndTitle;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)_titleLabelFont;
- (void)_updateContentSizeConstraints;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithTitleAndSubtitleVisible:(BOOL)a0;
- (id)_subititleLabelFont;
- (void)_updateHoverAnimation;
- (id)newPortaledShadowedWidgetView;

@end
