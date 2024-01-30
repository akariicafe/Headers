@class NSSet, HUTriggerActionFlow, NSString, HFTriggerBuilder, UINavigationItem;
@protocol HUTriggerEditorDelegate;

@interface HUTriggerActionEditorContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate>

@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (retain, nonatomic) HUTriggerActionFlow *flow;
@property (nonatomic) unsigned long long forceDisableReasonsForSecureCharacteristicControl;
@property (retain, nonatomic) NSSet *existingSelectedCharacteristics;
@property (retain, nonatomic) NSSet *existingSelectedActionSets;
@property (retain, nonatomic) NSSet *existingAnonActionSetMediaProfiles;
@property (readonly, nonatomic) UINavigationItem *effectiveNavigationItem;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)_next:(id)a0;
- (void).cxx_destruct;
- (void)_cancel:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)itemManager:(id)a0 didUpdateResultsForSourceItem:(id)a1;
- (void)itemManagerDidUpdate:(id)a0;
- (id)layoutOptionsForSection:(long long)a0;
- (BOOL)serviceGridItemManager:(id)a0 shouldHideItem:(id)a1;
- (void)_validateDoneButton;
- (id)initWithServiceGridItemManager:(id)a0;
- (void)didChangeSelection;
- (BOOL)_canSelectMediaAccessoryItem:(id)a0;
- (void)_presentUnsupportedAlertWithTitle:(id)a0 message:(id)a1;
- (BOOL)canSelectItem:(id)a0 indexPath:(id)a1;
- (id)initWithTriggerBuilder:(id)a0 flow:(id)a1 effectiveNavigationItem:(id)a2 delegate:(id)a3;
- (id)triggerBuilderFutureWithLatestUIChanges;
- (void)goToSummaryScreen;
- (void)_setUpNavButtons;
- (void)_updateSelectedServicesAndActionSets;
- (id)_triggerBuilderFuture;
- (void)_goToSummaryScreen:(id)a0;
- (unsigned long long)_triggerForceDisableReasonsForActionItem:(id)a0;
- (void)_popAlertWithLocalizedTitle:(id)a0 localizedMessage:(id)a1 actions:(id)a2;
- (id)_updateTriggerBuilderActionSets;
- (id)_updateTriggerBuilderAnonymousActions;
- (void)_removeDeletedActionSetsItems:(id)a0 fromTriggerBuilder:(id)a1;
- (void)_addActionSetItems:(id)a0 toTriggerBuilder:(id)a1 inHome:(id)a2;
- (void)_removeDeletedServiceItems:(id)a0 fromTriggerBuilder:(id)a1;
- (void)_updateOrRemoveDeletedMediaItems:(id)a0 fromTriggerBuilder:(id)a1;

@end
