@class HUAlarmsAndTimersAccessMonitor, HUQuickControlCollectionViewControllerLayoutOptions, HUQuickControlContentCharacteristicWritingUpdateAdapter, NSString, NSSet, HFItemManager, NSMapTable, HUQuickControlCollectionViewLayout;
@protocol HULayoutAnchorProviding, HUQuickControlCollectionItemManaging, HUQuickControlContentCharacteristicWritingDelegate, HUQuickControlContentHosting;

@interface HUQuickControlCollectionViewController : HUItemCollectionViewController <HUQuickControlCollectionViewDelegateLayout, HUQuickControlItemUpdating, HFAccessoryObserver, HUQuickControlContentHelper, HUQuickControlInteractiveContentContaining, HUQuickControlContentCharacteristicWriting, HUQuickControlTouchContinuing>

@property (readonly, nonatomic) NSMapTable *viewControllersKeyedByItem;
@property (retain, nonatomic) HUQuickControlCollectionViewLayout *collectionViewLayout;
@property (readonly, nonatomic) HFItemManager<HUQuickControlCollectionItemManaging> *itemManager;
@property (readonly, nonatomic) HUQuickControlContentCharacteristicWritingUpdateAdapter *characteristicWritingAdapter;
@property (retain, nonatomic) HUAlarmsAndTimersAccessMonitor *alarmAndTimerAccessMonitor;
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

- (id)viewForTouchContinuation;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewLayoutMarginsDidChange;
- (void)viewDidLoad;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (BOOL)_canShowWhileLocked;
- (void)accessoryDidUpdateControllable:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (id)_allViewControllers;
- (void)itemManager:(id)a0 didUpdateResultsForItem:(id)a1 atIndexPath:(id)a2;
- (void)itemManager:(id)a0 didRemoveItem:(id)a1 atIndexPath:(id)a2;
- (void)diffableDataItemManager:(id)a0 didUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)quickControlItemHost:(id)a0 didUpdateVisibility:(BOOL)a1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)overrideValueForCharacteristic:(id)a0;
- (id)initWithItemManager:(id)a0;
- (void)_reconfigureLayoutOptions;
- (id)_viewControllerForItem:(id)a0;
- (id)_controlItemsForItem:(id)a0;
- (unsigned long long)_determineReachabilityForIndexPath:(id)a0;
- (void)_fetchReachabilityStateForMediaAccessory:(id)a0 accessType:(unsigned long long)a1 itemSectionIdentifier:(id)a2;
- (void)_setReachabilityForHeaderForIdentifier:(id)a0 to:(BOOL)a1;
- (unsigned long long)_titlePositionForItem:(id)a0;
- (id)_createCellContainerForViewController:(id)a0 forItem:(id)a1;
- (void)_propagateInteractiveContentStateForChildViewControllers:(id)a0;
- (id)_allContentViewControllers;
- (id)intrinsicSizeDescriptorForItemAtIndexPath:(id)a0 itemSize:(unsigned long long)a1;
- (double)heightForSupplementaryViewAtIndexPath:(id)a0;
- (void)invalidateContentViewLayout;
- (void)shouldHideQuickControlHeaderButton:(BOOL)a0 forSectionIdentifier:(id)a1;
- (void)shouldHideQuickControlHeaderText:(BOOL)a0 forSectionIdentifier:(id)a1;
- (void)viewWillDismiss;

@end
