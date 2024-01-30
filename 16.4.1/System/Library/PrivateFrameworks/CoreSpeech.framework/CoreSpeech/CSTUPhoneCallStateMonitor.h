@class TUCallCenter, NSObject;
@protocol OS_dispatch_queue;

@interface CSTUPhoneCallStateMonitor : CSPhoneCallStateMonitor

@property (retain, nonatomic) TUCallCenter *tuCallCenter;
@property (nonatomic) unsigned long long tuPhoneCallState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)firstPartyCall;
- (unsigned long long)phoneCallState;
- (id)init;
- (void).cxx_destruct;
- (void)_callStatusDidChangeHandler:(id)a0;
- (unsigned long long)_fetchTUPhoneCallState;
- (void)_registerPhoneCallStateChangeNotifier;

@end
