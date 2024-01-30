@class NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, CMPocketStateDelegate;

@interface CMPocketStateManager : NSObject {
    NSObject<OS_dispatch_source> *fQueryTimer;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    int fCachedState;
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> { struct __compressed_pair<CLMotionNotifier::Dispatcher *, std::default_delete<CLMotionNotifier::Dispatcher>> { struct Dispatcher *__value_; } __ptr_; } fDispatcher;
    double fMaxMonitorTime;
    NSMutableArray *fQueryBlocks;
}

@property (nonatomic) id<CMPocketStateDelegate> delegate;

+ (BOOL)isPocketStateAvailable;

- (void)onNotification:(id)a0;
- (void)_prepareDispatcher;
- (void)onPocketStateUpdated:(int)a0;
- (void)queryStateOntoQueue:(id)a0 andMonitorFor:(double)a1 withTimeout:(double)a2 andHandler:(id /* block */)a3;
- (void)addToAggdScalarWithName:(id)a0 andScalar:(unsigned long long)a1;
- (long long)translateInternalState:(int)a0;
- (id)externalStateToString:(long long)a0;
- (void)_disableDispatcher;
- (void)queryStateOntoQueue:(id)a0 withTimeout:(double)a1 andHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;

@end
