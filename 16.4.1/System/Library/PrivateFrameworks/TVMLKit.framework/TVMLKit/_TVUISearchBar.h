@interface _TVUISearchBar : UISearchBar

+ (id)_clearGlyph;
+ (id)_searchGlyph;
+ (id)_tvmlKitBundle;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateRightView;

@end
