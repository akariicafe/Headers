@class NSObject;
@protocol OS_dispatch_queue;

@interface NMRMediaRemoteUpdater : NSObject {
    unsigned long long _updateState;
    id /* block */ _updateBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)executeUpdateBlock;
- (id)initWithQueue:(id)a0 updateBlock:(id /* block */)a1;

@end
