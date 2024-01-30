@class NSString;

@interface CSCommandControlStreamEventMonitor : CSEventMonitor <CSCommandControlBehaviorMonitorDelegate> {
    BOOL _isCommandControlStreaming;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isStreaming;
- (void)commandControlBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3;
- (id)init;
- (void)_stopMonitoring;
- (void)commandControlBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)_notifyStopCommandControl;
- (void)commandControlBehaviorMonitor:(id)a0 didStopStream:(id)a1;
- (void)commandControlBehaviorMonitor:(id)a0 willStopStream:(id)a1;
- (void)_startMonitoringWithQueue:(id)a0;

@end
