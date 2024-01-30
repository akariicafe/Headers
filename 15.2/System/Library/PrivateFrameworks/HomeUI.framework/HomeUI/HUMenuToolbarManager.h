@class HMRoom, HOAppNavigator, NSString, HMHome;
@protocol HOSideBarSelectionChangeDelegate, UIMenuBuilder;

@interface HUMenuToolbarManager : NSObject <HFHomeObserver, HFHomeManagerObserver>

@property (weak, nonatomic) HOAppNavigator *appNavigator;
@property (weak, nonatomic) id<HOSideBarSelectionChangeDelegate> sideBarSelectionChangeDelegate;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMRoom *room;
@property (retain, nonatomic) id<UIMenuBuilder> menuBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidMenuSelector:(SEL)a0;

- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void).cxx_destruct;
- (void)homeDidUpdateName:(id)a0;
- (void)home:(id)a0 didRemoveRoom:(id)a1;
- (void)home:(id)a0 didUpdateNameForRoom:(id)a1;
- (void)home:(id)a0 didAddTrigger:(id)a1;
- (void)home:(id)a0 didRemoveTrigger:(id)a1;
- (void)homeManager:(id)a0 didUpdateStateForIncomingInvitations:(id)a1;
- (void)home:(id)a0 didAddRoom:(id)a1;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)home:(id)a0 didSelectRoom:(id)a1;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;
- (void)buildMenu;
- (void)refreshViewMenuChildren;
- (void)refreshFileMenu;
- (void)refreshEditMenu;
- (void)refreshViewMenu;
- (void)refreshHelpMenu;
- (id)_helpMenuIdentifiers;
- (id)_buildActionForIdentifier:(id)a0;
- (id)_subViewMenuIdentifiers;
- (id)_buildMenuForIdentifier:(id)a0;
- (id)_viewMenuIdentifiers;
- (id)_buildKeyCommandForIdentifier:(id)a0;
- (id)_fileMenuIdentifiers;
- (id)_editMenuIdentifiers;
- (BOOL)_shouldEnableIdentifier:(id)a0;
- (id)_buildHomeMenu;
- (id)_buildRoomMenu;
- (void)_editHomeMenuSelected;
- (void)_editRoomMenuSelected;
- (void)_homeMenuSelected;
- (void)_roomMenuSelected;
- (void)_automationMenuSelected;
- (void)_discoverMenuSelected;
- (id)initWithAppNavigator:(id)a0 sideBarSelectionChangeDelegate:(id)a1;
- (void)updateHome:(id)a0;

@end
