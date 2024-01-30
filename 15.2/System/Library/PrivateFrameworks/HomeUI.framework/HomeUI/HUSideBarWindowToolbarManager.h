@class NSString, HOAppNavigator, HMRoom, HMHome;
@protocol HUSideBarWindowToolbarManagerDelegate;

@interface HUSideBarWindowToolbarManager : NSObject <HUDashboardMenuNavigationActionDelegate, HFHomeManagerObserver, HFHomeObserver, CAAnimationDelegate>

@property (retain, nonatomic) HOAppNavigator *appNavigator;
@property (retain, nonatomic) NSString *tabIdentifier;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMRoom *room;
@property (nonatomic) unsigned long long discoverTabStyle;
@property (nonatomic) unsigned long long discoverTabPosition;
@property (nonatomic) unsigned long long viewStyle;
@property (weak, nonatomic) id<HUSideBarWindowToolbarManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cleanUp;
+ (id)sharedToolbarManager;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (id)windowTitle;
- (void).cxx_destruct;
- (void)homeDidUpdateName:(id)a0;
- (void)home:(id)a0 didUpdateNameForRoom:(id)a1;
- (void)homeManager:(id)a0 didUpdateStateForIncomingInvitations:(id)a1;
- (void)homeManagerDidUpdateCurrentHome:(id)a0;
- (void)startEditing;
- (void)showHome:(id)a0;
- (void)showRoom:(id)a0;
- (void)showAllHomesSettings;
- (void)showHomeSettings:(id)a0;
- (void)showRoomSettings:(id)a0;
- (id)_generateAddMenu;
- (id)_generateHomeMenu;
- (id)_generateRoomMenu;
- (void)_discoverTabBackButton;
- (id)initWithAppNavigator:(id)a0;
- (id)itemIdentifiersForToolbar;
- (id)menuForToolbarItemIdentifier:(id)a0;
- (SEL)actionForToolbarItemIdentifier:(id)a0;
- (id)imageForToolbarItemIdentifier:(id)a0;
- (id)accessibilityLabelForToolbarItemIdentifier:(id)a0;
- (unsigned long long)toolbarItemStyleForToolbarItemIdentifier:(id)a0;

@end
