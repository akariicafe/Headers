@class UIColor, NSString, UIView, UILabel;

@interface SKUIQuicklinksView : UIView {
    UIView *_borderView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIView *collectionView;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setColoringWithColorScheme:(id)a0;

@end
