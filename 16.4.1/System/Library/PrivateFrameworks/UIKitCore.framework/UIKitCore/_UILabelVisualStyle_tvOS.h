@interface _UILabelVisualStyle_tvOS : _UILabelVisualStyle

- (BOOL)shouldDisableUpdateTextColorOnTraitCollectionChangeForAttributedString:(id)a0 attributes:(id)a1;
- (BOOL)updatesTextColorOnUserInterfaceStyleChanges;
- (id)defaultFont;
- (void)actionsForDeallocationOfLabel:(id)a0;
- (void)actionsForInitializationOfLabel:(id)a0;
- (BOOL)shouldDelayStartMarquee;

@end
