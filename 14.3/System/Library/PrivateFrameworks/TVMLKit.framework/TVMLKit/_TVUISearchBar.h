@interface _TVUISearchBar : UISearchBar

+ (id)_tvmlKitBundle;
+ (id)_clearGlyph;
+ (id)_searchGlyph;

- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateRightView;

@end
