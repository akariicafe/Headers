@class UIView;

@interface SUFooterContainerView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic, getter=isFooterVisible) BOOL footerVisible;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
