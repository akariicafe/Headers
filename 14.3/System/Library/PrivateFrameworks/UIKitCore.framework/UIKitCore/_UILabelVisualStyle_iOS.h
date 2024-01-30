@interface _UILabelVisualStyle_iOS : _UILabelVisualStyle

- (BOOL)updatesTextColorOnUserInterfaceStyleChanges;
- (BOOL)shouldDelayStartMarquee;
- (void)actionsForInitializationOfLabel:(id)a0;
- (id)defaultFont;
- (void)actionsForDeallocationOfLabel:(id)a0;
- (BOOL)shouldDisableUpdateTextColorOnTraitCollectionChangeForAttributedString:(id)a0 attributes:(id)a1;

@end
