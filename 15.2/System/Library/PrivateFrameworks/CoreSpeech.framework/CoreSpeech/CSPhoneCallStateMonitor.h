@class CXCallObserver, NSString;

@interface CSPhoneCallStateMonitor : CSEventMonitor <CXCallObserverDelegate>

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (unsigned long long)phoneCallState;
- (void).cxx_destruct;

@end
