@interface _UILabelVisualStyle : NSObject

+ (id)inferredVisualStyle;

- (BOOL)updatesTextColorOnUserInterfaceStyleChanges;
- (BOOL)shouldDelayStartMarquee;
- (void)actionsForInitializationOfLabel:(id)a0;
- (id)defaultFont;
- (void)actionsForDeallocationOfLabel:(id)a0;
- (BOOL)shouldDisableUpdateTextColorOnTraitCollectionChangeForAttributedString:(id)a0 attributes:(id)a1;

@end
