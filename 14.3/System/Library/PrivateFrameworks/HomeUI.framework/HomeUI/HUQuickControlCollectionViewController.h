@class NSSet, NSMapTable, HUQuickControlCollectionViewLayout, HUQuickControlCollectionViewControllerLayoutOptions, NSString, HUQuickControlContentCharacteristicWritingUpdateAdapter, HUQuickControlCollectionItemManager;
@protocol HULayoutAnchorProviding, HUQuickControlContentCharacteristicWritingDelegate, HUQuickControlContentHosting;

@interface HUQuickControlCollectionViewController : HUItemCollectionViewController <HUQuickControlCollectionViewDelegateLayout, HUQuickControlItemUpdating, HFAccessoryObserver, HUQuickControlInteractiveContentContaining, HUQuickControlContentCharacteristicWriting, HUQuickControlTouchContinuing>

@property (readonly, nonatomic) NSMapTable *viewControllersKeyedByItem;
@property (retain, nonatomic) HUQuickControlCollectionViewLayout *collectionViewLayout;
@property (readonly, nonatomic) HUQuickControlCollectionItemManager *itemManager;
@property (readonly, nonatomic) HUQuickControlContentCharacteristicWritingUpdateAdapter *characteristicWritingAdapter;
@property (retain, nonatomic) id<HULayoutAnchorProviding> preferredFrameLayoutGuide;
@property (retain, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions;
@property (nonatomic) BOOL disableItemUpdatesForOverrideCharacteristicValueChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUQuickControlContentHosting> quickControlHost;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (weak, nonatomic) id<HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate;
@property (readonly, copy, nonatomic) NSSet *affectedCharacteristics;

- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)viewForTouchContinuation;
- (void)loadView;
- (void)accessoryDidUpdateControllable:(id)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewLayoutMarginsDidChange;
- (id)_allViewControllers;
- (BOOL)_canShowWhileLocked;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)viewDidLoad;
- (void)itemManager:(id)a0 didUpdateResultsForItem:(id)a1 atIndexPath:(id)a2;
- (void)itemManager:(id)a0 didRemoveItem:(id)a1 atIndexPath:(id)a2;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)quickControlItemHost:(id)a0 didUpdateVisibility:(BOOL)a1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)overrideValueForCharacteristic:(id)a0;
- (id)initWithItemManager:(id)a0;
- (void)_reconfigureLayoutOptions;
- (id)_viewControllerForItem:(id)a0;
- (id)_controlItemsForItem:(id)a0;
- (unsigned long long)_titlePositionForItem:(id)a0;
- (id)_createCellContainerForViewController:(id)a0 forItem:(id)a1;
- (void)_propagateInteractiveContentStateForChildViewControllers:(id)a0;
- (id)_allContentViewControllers;
- (id)intrinsicSizeDescriptorForItemAtIndexPath:(id)a0 itemSize:(unsigned long long)a1;
- (double)heightForSupplementaryViewAtIndexPath:(id)a0;

@end
