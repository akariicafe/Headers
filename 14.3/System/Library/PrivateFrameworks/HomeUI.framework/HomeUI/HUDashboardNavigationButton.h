@class UIView, NSString, NSArray, UIImage, CALayer, UIImageView, UIMenu, HFWallpaperSlice, NSLayoutConstraint, HUNavigationButtonLayoutOptions, UILabel, NSNumber;
@protocol HUDashboardNavigationButtonDelegate;

@interface HUDashboardNavigationButton : UIControl

@property (readonly, nonatomic) UIView *backgroundContainerView;
@property (readonly, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) CALayer *filterLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) NSLayoutConstraint *minWidthConstraint;
@property (retain, nonatomic) NSArray *constraints;
@property (weak, nonatomic) id<HUDashboardNavigationButtonDelegate> delegate;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchInsets;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } imageOffset;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *badgeValue;
@property (retain, nonatomic) UIMenu *contextMenu;
@property (nonatomic) double blurAlpha;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HUNavigationButtonLayoutOptions *layoutOptions;
@property (nonatomic) BOOL hidesWhenCollapsed;

+ (BOOL)requiresConstraintBasedLayout;

- (id)viewForFirstBaselineLayout;
- (void)setTintColor:(id)a0;
- (id)viewForLastBaselineLayout;
- (id)initWithStyle:(unsigned long long)a0;
- (void)_didTap:(id)a0;
- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)updateConstraints;
- (id)description;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateWallpaperContentsRectAndScale;
- (void)normalizedWallpaperRectDidChange;

@end
