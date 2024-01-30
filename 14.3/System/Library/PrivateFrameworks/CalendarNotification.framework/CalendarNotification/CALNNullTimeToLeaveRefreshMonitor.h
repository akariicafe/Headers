@protocol CALNTimeToLeaveRefreshMonitorDelegate;

@interface CALNNullTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor>

@property (class, readonly, nonatomic) CALNNullTimeToLeaveRefreshMonitor *sharedInstance;

@property (weak, nonatomic) id<CALNTimeToLeaveRefreshMonitorDelegate> delegate;

- (void).cxx_destruct;
- (void)removeRefreshTimerForEventExternalURL:(id)a0;
- (void)setUpRefreshTimerWithTriggerDate:(id)a0 eventExternalURL:(id)a1;

@end
