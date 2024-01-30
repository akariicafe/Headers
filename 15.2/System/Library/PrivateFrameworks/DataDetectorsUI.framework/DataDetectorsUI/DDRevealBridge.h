@interface DDRevealBridge : NSObject

+ (BOOL)_revealItem:(id)a0 view:(id)a1 location:(struct CGPoint { double x0; double x1; })a2 menuInteraction:(id)a3 context:(id)a4;
+ (BOOL)performDefaultActionForRVItem:(id)a0 view:(id)a1 location:(struct CGPoint { double x0; double x1; })a2 fallbackMenuInteraction:(id)a3 context:(id)a4;
+ (id)contextMenuConfigurationWithRVItem:(id)a0 view:(id)a1 context:(id)a2 menuIdentifier:(id)a3;
+ (BOOL)underlyingViewDisappeared:(id)a0;

@end
