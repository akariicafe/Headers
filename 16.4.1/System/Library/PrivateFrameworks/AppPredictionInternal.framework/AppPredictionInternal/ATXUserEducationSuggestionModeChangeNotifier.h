@class BPSSink, NSHashTable, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXUserEducationSuggestionModeChangeNotifier : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void)processModeChangeEvent:(id)a0;
- (void).cxx_destruct;

@end
