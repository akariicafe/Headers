@class HFSetDiff, NSString, HUServiceGridItemManager, HFMutableSetDiff;

@interface HUSelectableServiceGridViewController : HUServiceGridViewController <HUServiceGridItemManagerDelegate>

@property (weak, nonatomic) HUServiceGridItemManager *serviceGridItemManager;
@property (retain, nonatomic) HFMutableSetDiff *mutableSelectedItems;
@property (retain, nonatomic) HFSetDiff *selectedItems;
@property (nonatomic) BOOL allowsEmptySelection;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)defaultItemProviderCreatorWithOptions:(unsigned long long)a0;
+ (id /* block */)transformationBlockWithOptions:(unsigned long long)a0;
+ (id)itemServiceTypesToHide;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)didSelectItem:(id)a0;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)itemManagerDidUpdate:(id)a0;
- (id)initWithItemManager:(id)a0;
- (BOOL)serviceGridItemManager:(id)a0 shouldHideItem:(id)a1;
- (id)initWithServiceGridItemManager:(id)a0;
- (void)didChangeSelection;
- (BOOL)canSelectItem:(id)a0 indexPath:(id)a1;
- (void)didDeselectItem:(id)a0;
- (void)addItemToSelection:(id)a0;
- (void)deleteItemFromSelection:(id)a0;
- (BOOL)_wantsToggleButtonForSection:(unsigned long long)a0;
- (double)headerViewHeightForSectionIndex:(unsigned long long)a0;
- (void)_updateSelectionState:(BOOL)a0 forCell:(id)a1;
- (void)_updateToggleStateForSection:(long long)a0 headerViewCell:(id)a1;
- (void)_setSelected:(BOOL)a0 forItemsInSection:(long long)a1;
- (BOOL)_shouldShowToggleButtonForSection:(long long)a0;
- (void)_deleteItemFromSelection:(id)a0;
- (void)_addItemToSelection:(id)a0;
- (void)_addAllServicesInSectionFromButton:(id)a0;
- (void)_removeAllServicesInSectionFromButton:(id)a0;

@end
