@class NSString, CCUIContentModuleContext, CCUIMenuModuleItem, NSMutableArray, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface SiriUISpokenNotificationsModule : CCUIMenuModuleViewController <CCUIContentModule> {
    CCUIContentModuleContext *_contentModuleContext;
    BOOL _selectedOnExpansion;
    NSMutableArray *_menuItems;
    CCUIMenuModuleItem *_menuItemOn;
    CCUIMenuModuleItem *_menuItemMute;
    CCUIMenuModuleItem *_menuItemOffForTheDay;
}

@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewControllerForContext:(id)a0;
- (void)_updateMenuItems;
- (void).cxx_destruct;
- (void)setContentModuleContext:(id)a0;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (void)_refreshState;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_refreshStateWithSelected:(BOOL)a0 expanded:(BOOL)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)_createMenuItems;
- (void)_updateMenuItemsWithDate:(id)a0;
- (void)_turnOnSpokenMessages;
- (void)_muteSpokenMessages;
- (void)_turnOffSpokenMessagesForTheDay;
- (BOOL)isConnectedToH1Device;

@end
