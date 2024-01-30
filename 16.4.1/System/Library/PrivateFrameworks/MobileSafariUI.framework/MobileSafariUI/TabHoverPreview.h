@class NSLayoutConstraint, NSString, TabSnapshotImageView, UIView, UILabel;

@interface TabHoverPreview : UIView {
    TabSnapshotImageView *_snapshotView;
    UILabel *_titleLabel;
    UILabel *_secondaryTitleLabel;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_leadingEdgeConstraint;
    NSLayoutConstraint *_trailingEdgeConstraint;
    NSLayoutConstraint *_snapshotHeightWidthRatioConstraint;
}

@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *secondaryTitleText;
@property (readonly, weak) UIView *tabBar;
@property (nonatomic) BOOL insetsPreviewFromTabBarEdge;
@property (nonatomic) double topInset;

- (void)setSnapshotImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithTabBar:(id)a0;
- (void)dismissPreview;
- (void)_updateConstraintsWithItemView:(id)a0;
- (void)_setPositionalConstraintsActive:(BOOL)a0;
- (void)showPreviewForItemView:(id)a0;

@end
