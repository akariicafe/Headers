@class NSArray, UIView, NSLayoutConstraint, UITableView;

@interface HKStickyHeaderFooterTableWrapperView : UIView

@property (retain, nonatomic) NSArray *headerConstraints;
@property (retain, nonatomic) NSArray *footerConstraints;
@property (nonatomic) struct CGSize { double width; double height; } previousHeaderSize;
@property (nonatomic) struct CGSize { double width; double height; } previousFooterSize;
@property (retain, nonatomic) NSLayoutConstraint *headerPinningConstraint;
@property (retain, nonatomic) NSLayoutConstraint *footerPinningConstraint;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) long long headerBehavior;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic) long long footerBehavior;
@property (readonly, nonatomic) UITableView *tableView;

- (void)safeAreaInsetsDidChange;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setUpSubviews;
- (void)_updatePinningConstraintConstantsForCurrentSafeArea;
- (id)_createHeaderConstraintsForBehavior:(long long)a0;
- (void)_addHeaderConstraintsForBehavior:(long long)a0;
- (id)_createFooterConstraintsForBehavior:(long long)a0;
- (void)_addFooterConstraintsForBehavior:(long long)a0;
- (void)_updateHeaderConstraintsWithPreviousBehavior:(long long)a0;
- (void)_updateFooterConstraintsWithPreviousBehavior:(long long)a0;

@end
