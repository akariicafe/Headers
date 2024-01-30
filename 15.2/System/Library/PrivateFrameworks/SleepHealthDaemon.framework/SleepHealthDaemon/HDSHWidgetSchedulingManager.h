@class NSString, HDProfile, HKSPSleepStore, CHSTimelineController, NSObject, HKSPThrottler;
@protocol OS_dispatch_queue;

@interface HDSHWidgetSchedulingManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver> {
    HDProfile *_profile;
    HKSPThrottler *_reloadThrottler;
    HKSPSleepStore *_sleepStore;
    CHSTimelineController *_timelineController;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)_reloadWidgetTimelinesWithReason:(unsigned long long)a0;
- (void)_startObservingSleep;
- (void).cxx_destruct;
- (void)_stopObservingSleep;
- (void)dealloc;

@end
