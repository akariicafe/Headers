@protocol CALNTimeToLeaveRefreshMonitorDelegate;

@interface CALNNullTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor>

@property (class, readonly, nonatomic) CALNNullTimeToLeaveRefreshMonitor *sharedInstance;

@property (weak, nonatomic) id<CALNTimeToLeaveRefreshMonitorDelegate> delegate;

- (void)removeRefreshTimerForEventExternalURL:(id)a0;
- (void).cxx_destruct;
- (void)setUpRefreshTimerWithTriggerDate:(id)a0 eventExternalURL:(id)a1;

@end
