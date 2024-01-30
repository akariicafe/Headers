@class NSMutableDictionary;

@interface HMDAccessoryQueues : HMFObject

@property (retain, nonatomic) NSMutableDictionary *queues;

- (id)init;
- (void).cxx_destruct;
- (void)removeAccessory:(id)a0;
- (BOOL)createQueue:(id)a0;
- (id)popAccessoryFromQueue:(id)a0;
- (id)getContextForAccessory:(id)a0;
- (int)countForQueue:(id)a0;
- (void)addAccessory:(id)a0 toQueue:(id)a1 context:(id)a2;
- (id)getAccessoryForContext:(id)a0 fromQueue:(id)a1;
- (id)whichQueueForAccessory:(id)a0;
- (void)enumerateQueue:(id)a0 enumerateAccessory:(id /* block */)a1;
- (BOOL)_inQueue:(id)a0 queue:(id)a1;

@end
