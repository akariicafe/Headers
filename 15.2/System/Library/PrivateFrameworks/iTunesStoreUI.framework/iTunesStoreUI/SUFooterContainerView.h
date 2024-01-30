@class UIView;

@interface SUFooterContainerView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic, getter=isFooterVisible) BOOL footerVisible;

- (void)layoutSubviews;
- (void).cxx_destruct;

@end
