@class HUHomePodAlarmItemModuleController, UIBarButtonItem, NSString, MTAlarm, _UIContentUnavailableView;
@protocol HUPresentationDelegate, HFMediaProfileContainer;

@interface HUAlarmTableViewController : HUItemTableViewController <HUAlarmEditViewControllerDelegate, HUHomePodAlarmItemModuleControllerDelegate, HFAccessoryObserver, HFMediaObjectObserver, HFAccessorySettingMobileTimerAdapterObserver, UITableViewDelegatePrivate, HUPresentationDelegateHost>

@property (retain, nonatomic) HUHomePodAlarmItemModuleController *alarmModuleController;
@property (retain, nonatomic) MTAlarm *alarmToEdit;
@property (retain, nonatomic) _UIContentUnavailableView *noItemsView;
@property (retain, nonatomic) UIBarButtonItem *addButtonItem;
@property (retain, nonatomic) UIBarButtonItem *editDoneButtonItem;
@property (readonly, nonatomic) BOOL isAccessoryControllable;
@property (readonly, nonatomic) BOOL isAlarmsSettingReady;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithMediaProfileContainer:(id)a0;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (id)backgroundView;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)accessoryDidUpdateControllable:(id)a0;
- (void)accessoryDidUpdateReachableTransports:(id)a0;
- (void)accessoryDidUpdateReachability:(id)a0;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)heightForFooterInTableView:(id)a0;
- (BOOL)_canShowWhileLocked;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (void)mobileTimerAdapterDidUpdateReadiness:(id)a0;
- (void)alarmItemModuleController:(id)a0 didSelectAlarmItem:(id)a1;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (void)presentAddNewAlarmViewController;
- (id)itemModuleControllers;
- (void)alarmEditController:(id)a0 didDeleteAlarm:(id)a1 forMediaProfile:(id)a2;
- (void)alarmEditController:(id)a0 didAddAlarm:(id)a1 forMediaProfile:(id)a2;
- (void)alarmEditController:(id)a0 didMoveAlarm:(id)a1 fromProfile:(id)a2 toProfile:(id)a3;
- (void)alarmEditController:(id)a0 didEditAlarm:(id)a1 forMediaProfile:(id)a2;
- (void)alarmEditControllerDidCancel:(id)a0;
- (void)_showAddView:(id)a0;
- (void)_editDoneAction:(id)a0;
- (void)_discernReachabilityForAccessory:(id)a0;
- (void)_updateNavigationItems:(BOOL)a0;
- (void)_numberOfItemsDidChangeAnimated:(BOOL)a0;
- (void)_layoutNoItemsLabel;
- (id)editViewControllerForAlarmItem:(id)a0;
- (id)alarmItemManager;
- (void)_updateAccessoryControllable:(BOOL)a0 alarmsSettingReady:(BOOL)a1;
- (BOOL)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;

@end
