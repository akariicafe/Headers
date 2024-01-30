@class NSLayoutConstraint, UIView;

@interface ICCollapsibleBaseView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSLayoutConstraint *zeroWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint;
@property (nonatomic) BOOL setupComplete;
@property (nonatomic) double leadingSpace;
@property (nonatomic) double trailingSpace;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;

- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)ic_setNeedsUpdateConstraints;
- (void)performSetUpWithContentView:(id)a0;
- (void)performSetup;
- (void)setUpIfNeeded;
- (BOOL)wantsLayer;

@end
