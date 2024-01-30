@interface SKUISearchBar : UISearchBar

@property (nonatomic) double intrinsicWidth;

- (id)init;
- (void)setShowsCancelButton:(BOOL)a0;
- (BOOL)showsCancelButton;
- (void)setShowsCancelButton:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
