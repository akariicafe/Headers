@class NSString;

@interface CSCommandControlStreamEventMonitor : CSEventMonitor <CSCommandControlBehaviorMonitorDelegate> {
    BOOL _isCommandControlStreaming;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)commandControlBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)commandControlBehaviorMonitor:(id)a0 didStopStream:(id)a1;
- (void)commandControlBehaviorMonitor:(id)a0 willStopStream:(id)a1;
- (void)commandControlBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3;
- (void)_notifyStopCommandControl;
- (BOOL)isStreaming;
- (id)init;

@end
