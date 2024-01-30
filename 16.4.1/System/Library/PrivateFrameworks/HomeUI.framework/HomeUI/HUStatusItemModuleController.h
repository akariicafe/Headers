@interface HUStatusItemModuleController : HUItemModuleController

+ (id)_layoutOptionsForEnvironment:(id)a0;

- (void)configureCell:(id)a0 forItem:(id)a1;
- (unsigned long long)didSelectItem:(id)a0;
- (id)_defaultCellLayoutOptionsForViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)cellLayoutOptions;
- (Class)collectionCellClassForItem:(id)a0;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)a0 layoutEnvironment:(id)a1;

@end
