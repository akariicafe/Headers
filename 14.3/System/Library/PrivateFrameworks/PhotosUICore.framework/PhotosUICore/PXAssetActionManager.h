@class PXSectionedSelectionManager, PXSectionedObjectReference;

@interface PXAssetActionManager : PXActionManager

@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (retain, nonatomic) PXSectionedObjectReference *objectReference;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSelectedObjectReference:(id)a0 dataSourceManager:(id)a1;
- (BOOL)canPerformAssetVariationActions;
- (id)systemImageNameForActionType:(id)a0;
- (void)executeActionForActionType:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)shouldEnableActionType:(id)a0 onAsset:(id)a1;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;
- (void)px_registerAdditionalPerformerClasses;
- (id)initWithSelectionManager:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (BOOL)canPerformActionType:(id)a0;

@end
