@class UIView;

@interface CKBrowserSwitcherFooterAccessoryCell : UICollectionReusableView

@property (retain, nonatomic) UIView *seperatorView;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxHeight;

+ (id)supplementryViewKind;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
