@class UIActivityIndicatorView, UIView;

@interface PUImportOneUpCellBadgeView : UICollectionReusableView

@property (retain, nonatomic) UIView *badgeContainerView;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) BOOL inUpdateBlock;
@property (nonatomic) BOOL needsBadgeUpdate;
@property (nonatomic) long long badgeType;
@property (nonatomic) BOOL selectable;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsBadgeUpdate;
- (void)performBadgeUpdates:(id /* block */)a0;
- (void)_createSpinnerIfNecessary;
- (void)updateBadgeUIIfNeeded;

@end
