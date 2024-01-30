@class NSString;
@protocol CALNTimeToLeaveRefreshMonitorDelegate, CALNTimeToLeaveRefreshStorage;

@interface CALNDefaultTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor, CADModule>

@property (readonly, nonatomic) id<CALNTimeToLeaveRefreshStorage> storage;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isRegisteredForAlarms) BOOL registeredForAlarms;
@property (weak, nonatomic) id<CALNTimeToLeaveRefreshMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_refreshTimerAlarmNameForEventExternalURL:(id)a0;

- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)didRegisterForAlarms;
- (void)removeRefreshTimerForEventExternalURL:(id)a0;
- (void)_refreshTimerFiredForEventExternalURL:(id)a0;
- (void)setUpRefreshTimerWithTriggerDate:(id)a0 eventExternalURL:(id)a1;
- (id)initWithStorage:(id)a0;
- (void)activate;
- (void).cxx_destruct;

@end
