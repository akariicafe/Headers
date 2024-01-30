@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IMMultiQueue : NSObject {
    NSMutableDictionary *_queueMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (BOOL)_addBlock:(id /* block */)a0 withGUID:(id)a1 forKey:(id)a2 description:(id)a3;
- (void)_popEnqueuedBlockWithGUID:(id)a0 key:(id)a1;
- (BOOL)addBlock:(id /* block */)a0 forKey:(id)a1 description:(id)a2;
- (BOOL)addBlock:(id /* block */)a0 withTimeout:(double)a1 forKey:(id)a2 description:(id)a3;
- (id)loggableOverview;
- (id)loggableOverviewForKey:(id)a0;

@end
