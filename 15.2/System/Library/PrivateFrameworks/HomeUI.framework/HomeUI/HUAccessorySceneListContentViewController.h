@class NSString, HUAccessorySceneListContentItemManager, HFItem, NSSet;
@protocol HFServiceLikeItem, HUAccessorySceneListContentViewControllerDelegate;

@interface HUAccessorySceneListContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate, HUSceneEditorDelegate>

@property (readonly, nonatomic) HUAccessorySceneListContentItemManager *itemManager;
@property (retain, nonatomic) HFItem *currentlyOpenedItem;
@property (readonly, nonatomic) unsigned long long contentSource;
@property (readonly, nonatomic) unsigned long long selectionType;
@property (readonly, copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (retain, nonatomic) NSString *analyticsPresentationContext;
@property (weak, nonatomic) id<HUAccessorySceneListContentViewControllerDelegate> delegate;
@property (nonatomic) BOOL includeTopMargin;
@property (nonatomic) BOOL persistAddedSuggestions;
@property (readonly, copy, nonatomic) NSSet *selectedActionSetBuilders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)computeNumberOfItemsToDisplayForContentSource:(unsigned long long)a0 serviceLikeItem:(id)a1 home:(id)a2;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)layoutOptionsForSection:(long long)a0;
- (void)didChangeSelection;
- (BOOL)canSelectItem:(id)a0 indexPath:(id)a1;
- (unsigned long long)itemTypeForItem:(id)a0;
- (void)sceneEditor:(id)a0 didCommitActionSet:(id)a1;
- (id)initWithServiceLikeItem:(id)a0 contentSource:(unsigned long long)a1 selectionType:(unsigned long long)a2;
- (id)commitChangesToSelectedActionBuilders;

@end
