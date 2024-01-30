@class NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_group, OS_dispatch_queue;

@interface VECGCDCoalescer : NSObject {
    double _delay;
    NSObject<OS_dispatch_source> *_processingTimer;
    NSObject<OS_dispatch_group> *_processDoneGroup;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    BOOL _processingTimerActive;
    NSMutableArray *_keys;
    NSMutableArray *_blocks;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)coalescerWithDelay:(double)a0;
+ (id)sharedFiveSecondCoalescer;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_applicationWillTerminate:(id)a0;
- (void)_processImmediately;
- (void)_processTimer;
- (id)initWithQueue:(id)a0 delay:(double)a1;
- (void)_addBlock:(id /* block */)a0 withKey:(id)a1;
- (void)debugWaitUntilBlocksHaveBeenProcessed;
- (void)coalesceBlock:(id /* block */)a0 withKey:(id)a1;

@end
