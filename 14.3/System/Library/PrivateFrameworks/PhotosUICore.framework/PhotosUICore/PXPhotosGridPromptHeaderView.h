@class NSString, UILabel, UIView;

@interface PXPhotosGridPromptHeaderView : UICollectionReusableView {
    UILabel *_titleLabel;
    UIView *_separatorView;
}

@property (copy, nonatomic) NSString *title;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forTitle:(id)a1;
+ (id)_newTitleLabel;
+ (struct CGSize { double x0; double x1; })_instanceLayoutSubviews:(id)a0 forTitle:(id)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
