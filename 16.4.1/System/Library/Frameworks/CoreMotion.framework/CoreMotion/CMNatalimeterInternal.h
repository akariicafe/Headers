@class NSObject;
@protocol OS_dispatch_queue;

@interface CMNatalimeterInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fStartedUpdates;
    id /* block */ fHandler;
}

- (void)_teardown;
- (void)dealloc;
- (id)init;
- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 withHandler:(id /* block */)a1;
- (unsigned long long)_promptsNeeded;
- (void)_queryAbsoluteNatalimetryDataSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;
- (void)_queryAbsoluteNatalimetryDataSinceRecord:(long long)a0 withHandler:(id /* block */)a1;
- (void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* block */)a0;
- (void)_stopAbsoluteNatalimetryDataUpdates;

@end
