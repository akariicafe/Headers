@class NSTimer, COTimerManager, NSString;
@protocol HUPresentationDelegate;

@interface HUTimerTableViewController : HUMobileTimerObjectTableViewController <UITableViewDelegate, HUTimerCreationDelegate> {
    id<HUPresentationDelegate> presentationDelegate;
}

@property (retain, nonatomic) COTimerManager *timerManager;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (retain, nonatomic) id addNotificationObserver;
@property (retain, nonatomic) id removeNotificationObserver;
@property (retain, nonatomic) id updateNotificationObserver;
@property (retain, nonatomic) id canDispatchNotificationObserver;
@property (retain, nonatomic) id resetNotificationObserver;
@property (retain, nonatomic) id firingNotificationObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)presentationDelegate;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setPresentationDelegate:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_baseMobileTimerObjectsFuture;
- (id)_canManagerControlAccessory;
- (void)_extractUpdatedTimerObjectsFromNotification:(id)a0;
- (id)_findTimerObjectForID:(id)a0;
- (id)_newCellForMTTimerObjectUUID:(id)a0;
- (void)_removeTimerObjectAtIndexPath:(id)a0;
- (void)animationTimerTick:(id)a0;
- (id)initWithMediaProfileContainer:(id)a0;
- (void)presentAddMobileTimerObjectViewControllerOnMainThread;
- (void)timerCreationViewController:(id)a0 didCreateTimer:(id)a1;

@end
