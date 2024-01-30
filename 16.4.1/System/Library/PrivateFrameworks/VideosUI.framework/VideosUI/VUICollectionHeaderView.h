@class VUISeparatorView, _TVImageView, VUILabel, VUICollectionHeaderViewLayout, UIButton;

@interface VUICollectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) VUICollectionHeaderViewLayout *layout;
@property (retain, nonatomic) VUILabel *titleTextView;
@property (retain, nonatomic) VUILabel *subtitleTextView;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) UIButton *headerButton;
@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (copy, nonatomic) id /* block */ selectionHandler;

+ (id)configureCollectionHeaderViewWithTitle:(id)a0 subtitle:(id)a1 buttonString:(id)a2 existingView:(id)a3;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_buttonWithString:(id)a0 existingButton:(id)a1;
- (struct CGSize { double x0; double x1; })_layoutWithSize:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (void)_selectButtonAction:(id)a0;

@end
