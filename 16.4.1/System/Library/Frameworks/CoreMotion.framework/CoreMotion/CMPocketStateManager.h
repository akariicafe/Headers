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

- (id)externalStateToString:(long long)a0;
- (id).cxx_construct;
- (void)addToAggdScalarWithName:(id)a0 andScalar:(unsigned long long)a1;
- (void)onPocketStateUpdated:(int)a0;
- (void)onNotification:(id)a0;
- (long long)translateInternalState:(int)a0;
- (void)dealloc;
- (void)queryStateOntoQueue:(id)a0 andMonitorFor:(double)a1 withTimeout:(double)a2 andHandler:(id /* block */)a3;
- (void)_disableDispatcher;
- (id)init;
- (void)_prepareDispatcher;
- (void)queryStateOntoQueue:(id)a0 withTimeout:(double)a1 andHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
