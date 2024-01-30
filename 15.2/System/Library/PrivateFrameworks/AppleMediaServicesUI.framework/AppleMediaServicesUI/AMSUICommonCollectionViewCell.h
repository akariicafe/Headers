@class AMSUICommonView;

@interface AMSUICommonCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) AMSUICommonView *underlyingContentView;
@property (readonly, nonatomic) AMSUICommonView *contentView;

- (void)layoutSubviews;
- (void)_setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tintColor;
- (void).cxx_destruct;
- (id)init;

@end
