@class NSMutableArray, NSLayoutConstraint;

@interface OBBulletedList : UIView

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *verticalConstraints;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint;

- (void).cxx_destruct;
- (BOOL)_shouldHandleLandscapeiPhoneLayout;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)addItemWithTitle:(id)a0 description:(id)a1 image:(id)a2;
- (void)addItemWithDescription:(id)a0 image:(id)a1;
- (void)addBulletedListItem:(id)a0;
- (double)bulletedListItemSpacing;
- (void)_updatePaddingForOrientation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateConstraints;

@end
