@class VUILabel, _TVImageView, VUIContextMenuCardViewLayout;

@interface VUIContextMenuCardView : UIView

@property (retain, nonatomic) VUIContextMenuCardViewLayout *layout;
@property (retain, nonatomic) VUILabel *titleTextView;
@property (retain, nonatomic) VUILabel *subtitleTextView;
@property (retain, nonatomic) _TVImageView *badgeView;
@property (retain, nonatomic) _TVImageView *coverImageView;

+ (id)configureViewWithElement:(id)a0 existingView:(id)a1;

- (void).cxx_destruct;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_iOS_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
