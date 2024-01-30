@class HKObserverSet, HDDaemon, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface HDPostInstallUpdateManager : NSObject {
    NSObject<OS_dispatch_source> *_activityPollSource;
    NSObject<OS_dispatch_queue> *_monitoringQueue;
    HKObserverSet *_observers;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;

- (id)initWithDaemon:(id)a0;
- (void)unregisterUpdateTaskHandler:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)registerUpdateTaskHandler:(id)a0 queue:(id)a1;

@end
