@class HKHealthStore, NSObject;
@protocol OS_dispatch_queue;

@interface REHealthStore : RESingleton {
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)_init;
- (void)accessHealthStore:(id /* block */)a0;
- (id)_createStore;
- (BOOL)_isClockHostApp;

@end
