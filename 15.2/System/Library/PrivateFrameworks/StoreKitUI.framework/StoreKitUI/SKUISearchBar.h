@interface SKUISearchBar : UISearchBar

@property (nonatomic) double intrinsicWidth;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (BOOL)showsCancelButton;
- (void)setShowsCancelButton:(BOOL)a0 animated:(BOOL)a1;
- (void)setShowsCancelButton:(BOOL)a0;

@end
