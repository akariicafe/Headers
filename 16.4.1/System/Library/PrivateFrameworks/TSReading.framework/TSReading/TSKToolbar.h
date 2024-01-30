@class UIColor, NSString, TSKToolbarTitleView, CALayer, UINavigationItem;

@interface TSKToolbar : UINavigationBar {
    UINavigationItem *_navigationItem;
    CALayer *_shadowLayer;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) TSKToolbarTitleView *navigationTitleView;
@property (nonatomic) BOOL shadowEnabled;
@property (nonatomic) double leftToolbarItemsInset;
@property (nonatomic) double rightToolbarItemsInset;
@property (nonatomic) double leftToolbarItemsMaximumWidth;
@property (nonatomic) double rightToolbarItemsMaximumWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)itemWithTag:(long long)a0;
- (void)setItems:(id)a0 animated:(BOOL)a1 height:(double)a2 isLeft:(BOOL)a3;
- (void)setLeftItems:(id)a0 title:(id)a1 rightItems:(id)a2 duration:(double)a3;

@end
