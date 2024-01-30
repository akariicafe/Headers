@class NSString, COAlarmManager;
@protocol HUPresentationDelegate;

@interface HUAlarmTableViewController : HUMobileTimerObjectTableViewController <UITableViewDelegate, HUAlarmEditViewControllerDelegate, HUAlarmTableViewCellDelegate> {
    id<HUPresentationDelegate> presentationDelegate;
}

@property (retain, nonatomic) COAlarmManager *alarmManager;
@property (retain, nonatomic) id addNotificationObserver;
@property (retain, nonatomic) id removeNotificationObserver;
@property (retain, nonatomic) id updateNotificationObserver;
@property (retain, nonatomic) id canDispatchNotificationObserver;
@property (retain, nonatomic) id resetNotificationObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)presentationDelegate;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setPresentationDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_baseMobileTimerObjectsFuture;
- (id)_canManagerControlAccessory;
- (void)_extractUpdatedTimerObjectsFromNotification:(id)a0;
- (id)_fakeMobileAlarmObjectsFuture;
- (id)_findTimerObjectForID:(id)a0;
- (id)_newCellForMTTimerObjectUUID:(id)a0;
- (void)_removeTimerObjectAtIndexPath:(id)a0;
- (void)alarmEditController:(id)a0 didAddAlarm:(id)a1;
- (void)alarmEditController:(id)a0 didDeleteAlarm:(id)a1;
- (void)alarmEditController:(id)a0 didEditAlarm:(id)a1;
- (void)alarmEditControllerDidCancel:(id)a0;
- (void)alarmEditControllerGettingDismissed:(id)a0;
- (id)editViewControllerForAlarm:(id)a0;
- (id)initWithMediaProfileContainer:(id)a0;
- (void)presentAddMobileTimerObjectViewControllerOnMainThread;
- (void)setAlarmEnabled:(BOOL)a0 forCell:(id)a1;

@end
