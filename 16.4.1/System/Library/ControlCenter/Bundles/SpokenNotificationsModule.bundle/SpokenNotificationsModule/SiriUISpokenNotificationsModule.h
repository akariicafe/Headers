@class BBSettingsGateway, NSString, CCUIContentModuleContext, CCUIMenuModuleItem, NSObject, NSMutableArray, UIViewController;
@protocol CCUIContentModuleBackgroundViewController, OS_dispatch_queue, CCUIContentModuleContentViewController;

@interface SiriUISpokenNotificationsModule : CCUIMenuModuleViewController <CCUIContentModule> {
    CCUIContentModuleContext *_contentModuleContext;
    BOOL _selectedOnExpansion;
    NSMutableArray *_menuItems;
    CCUIMenuModuleItem *_menuItemOn;
    CCUIMenuModuleItem *_menuItemMute;
    CCUIMenuModuleItem *_menuItemOffForTheDay;
    BOOL _headphonesAnnounceEnabled;
    BOOL _hearingAidsAnnounceEnabled;
    BOOL _builtInSpeakerAnnounceEnabled;
    BBSettingsGateway *_settingsGateway;
    NSObject<OS_dispatch_queue> *_spokenNotificationsModuleQueue;
}

@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_refreshState;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (id)contentViewControllerForContext:(id)a0;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)setContentModuleContext:(id)a0;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)viewDidLoad;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_turnOffSpokenMessagesForTheDay;
- (void)_createMenuItems;
- (void)_fetchAnnounceSettingsAndRefreshState;
- (void)_muteSpokenMessages;
- (void)_refreshStateWithSelected:(BOOL)a0 expanded:(BOOL)a1;
- (void)_turnOnSpokenMessages;
- (void)_updateMenuItems;
- (void)_updateMenuItemsWithDate:(id)a0;
- (BOOL)isDeviceInEligibleAnnounceNotificationsConfiguration;

@end
