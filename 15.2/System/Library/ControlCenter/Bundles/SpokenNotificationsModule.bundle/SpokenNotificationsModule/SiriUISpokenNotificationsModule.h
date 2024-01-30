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

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)_updateMenuItems;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)contentViewControllerForContext:(id)a0;
- (void)setContentModuleContext:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)_refreshStateWithSelected:(BOOL)a0 expanded:(BOOL)a1;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)_refreshState;
- (void).cxx_destruct;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_createMenuItems;
- (void)_updateMenuItemsWithDate:(id)a0;
- (void)_turnOnSpokenMessages;
- (void)_muteSpokenMessages;
- (void)_turnOffSpokenMessagesForTheDay;
- (BOOL)isConnectedToH1Device;

@end
