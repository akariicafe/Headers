@class PXSectionedSelectionManager, PXSectionedObjectReference;

@interface PXAssetActionManager : PXActionManager

@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (retain, nonatomic) PXSectionedObjectReference *objectReference;

- (id)actionPerformerForActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (BOOL)canPerformActionType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSelectionManager:(id)a0;
- (void)executeActionForActionType:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)shouldEnableActionType:(id)a0 onAsset:(id)a1;
- (void)setAdditionalPropertiesFromActionManager:(id)a0;
- (void)px_registerAdditionalPerformerClasses;
- (id)systemImageNameForActionType:(id)a0;
- (id)initWithSelectedObjectReference:(id)a0 dataSourceManager:(id)a1;
- (BOOL)canPerformAssetVariationActions;

@end
