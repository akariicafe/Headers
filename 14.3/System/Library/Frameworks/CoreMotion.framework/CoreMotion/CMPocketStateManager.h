@class NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, CMPocketStateDelegate;

@interface CMPocketStateManager : NSObject {
    NSObject<OS_dispatch_source> *fQueryTimer;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    int fCachedState;
    struct Dispatcher { void /* function */ **x0; id x1; } *fDispatcher;
    double fMaxMonitorTime;
    NSMutableArray *fQueryBlocks;
}

@property (nonatomic) id<CMPocketStateDelegate> delegate;

+ (BOOL)isPocketStateAvailable;

- (id)init;
- (void)dealloc;
- (void)onNotification:(id)a0;
- (void)onPocketStateUpdated:(int)a0;
- (void)queryStateOntoQueue:(id)a0 andMonitorFor:(double)a1 withTimeout:(double)a2 andHandler:(id /* block */)a3;
- (void)addToAggdScalarWithName:(id)a0 andScalar:(unsigned long long)a1;
- (void)_disableDispatcher;
- (long long)translateInternalState:(int)a0;
- (id)externalStateToString:(long long)a0;
- (void)queryStateOntoQueue:(id)a0 withTimeout:(double)a1 andHandler:(id /* block */)a2;

@end
