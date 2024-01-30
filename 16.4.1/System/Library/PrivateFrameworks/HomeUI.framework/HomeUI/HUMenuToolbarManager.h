@class HMRoom, HOAppNavigator, NSString, HMHome;
@protocol UIMenuBuilder;

@interface HUMenuToolbarManager : NSObject <HFHomeObserver, HFHomeManagerObserver>

@property (weak, nonatomic) HOAppNavigator *appNavigator;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMRoom *room;
@property (retain, nonatomic) id<UIMenuBuilder> menuBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidMenuSelector:(SEL)a0;

- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)home:(id)a0 didRemoveRoom:(id)a1;
- (void)home:(id)a0 didAddRoom:(id)a1;
- (void).cxx_destruct;
- (void)home:(id)a0 didAddTrigger:(id)a1;
- (void)home:(id)a0 didRemoveTrigger:(id)a1;
- (void)home:(id)a0 didUpdateNameForRoom:(id)a1;
- (void)homeDidUpdateName:(id)a0;
- (void)homeManager:(id)a0 didUpdateStateForIncomingInvitations:(id)a1;
- (void)refreshEditMenu;
- (void)refreshHelpMenu;
- (void)refreshFileMenu;
- (void)refreshViewMenu;
- (void)_automationMenuSelected;
- (id)_buildActionForIdentifier:(id)a0;
- (id)_buildHomeMenu;
- (id)_buildKeyCommandForIdentifier:(id)a0;
- (id)_buildMenuForIdentifier:(id)a0;
- (void)_discoverMenuSelected;
- (void)_editHomeMenuSelected;
- (id)_editMenuIdentifiers;
- (void)_editRoomMenuSelected;
- (id)_fileMenuIdentifiers;
- (id)_helpMenuIdentifiers;
- (void)_homeMenuSelected;
- (BOOL)_shouldEnableIdentifier:(id)a0;
- (id)_subViewMenuIdentifiers;
- (id)_viewMenuIdentifiers;
- (void)buildMenu;
- (void)home:(id)a0 didSelectRoom:(id)a1;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;
- (id)initWithAppNavigator:(id)a0;
- (void)refreshViewMenuChildren;
- (void)updateHome:(id)a0;

@end
