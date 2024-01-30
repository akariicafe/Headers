@class NSString, HDProfile, HKSPSleepStore, NSObject, HKSPThrottler;
@protocol OS_dispatch_queue;

@interface HDSHWidgetSchedulingManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver> {
    HDProfile *_profile;
    HKSPThrottler *_reloadThrottler;
    HKSPSleepStore *_sleepStore;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_logSleepSampleStatistics:(id)a0;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)_startObservingSleep;
- (void)dealloc;
- (void)_stopObservingSleep;
- (void)_reloadWidgetsWithReasons:(unsigned long long)a0;
- (void).cxx_destruct;

@end
