@interface PXMemoriesUITileSourceAccessibility : __PXMemoriesUITileSourceAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (void)_axSetTilingController:(id)a0;
- (void)_axLoadMemoryTileAccessibility;
- (void)_setAXTilingController:(id)a0;
- (id)_axTilingController;
- (void)_axLoadInfoForTile:(id)a0 withLayout:(id)a1 identifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a2;

@end
