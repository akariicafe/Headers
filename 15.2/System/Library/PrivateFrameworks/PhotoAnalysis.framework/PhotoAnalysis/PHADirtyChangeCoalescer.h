@class PFCoalescer, NSObject;
@protocol OS_dispatch_queue, PHADirtyChangeCoalescerDelegate;

@interface PHADirtyChangeCoalescer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PFCoalescer *_valueCoalescer;
}

@property (weak, nonatomic) id<PHADirtyChangeCoalescerDelegate> delegate;

- (void)recordDirtyTransitionForAssetIdentifier:(id)a0 workerType:(short)a1 workerFlags:(int)a2;
- (void).cxx_destruct;
- (id)init;

@end
