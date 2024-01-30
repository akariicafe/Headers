@interface _UILabelVisualStyle : NSObject

+ (id)inferredVisualStyle;

- (BOOL)updatesTextColorOnUserInterfaceStyleChanges;
- (id)defaultFont;
- (BOOL)shouldDelayStartMarquee;
- (void)actionsForDeallocationOfLabel:(id)a0;
- (BOOL)shouldDisableUpdateTextColorOnTraitCollectionChangeForAttributedString:(id)a0 attributes:(id)a1;
- (void)actionsForInitializationOfLabel:(id)a0;

@end
