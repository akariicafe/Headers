@class UIView, NSString, SKUILinkButton, UIControl, UIButton, UICollectionView, UILabel, UIColor;

@interface SKUISwooshView : UIView {
    UIView *_borderView;
    UIButton *_seeAllButton;
    SKUILinkButton *_titleButton;
    UILabel *_titleLabel;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } collectionViewInsets;
@property (readonly, nonatomic) UIControl *seeAllControl;
@property (copy, nonatomic) NSString *seeAllTitle;
@property (readonly, nonatomic) UIControl *chevronTitleControl;
@property (nonatomic) BOOL showsChevronForTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *titleColor;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setColoringWithColorScheme:(id)a0;
- (id)_seeAllArrowImage;
- (void)setSeeAllColor:(id)a0 forControlState:(unsigned long long)a1;
- (id)seeAllColorForControlState:(unsigned long long)a0;

@end
