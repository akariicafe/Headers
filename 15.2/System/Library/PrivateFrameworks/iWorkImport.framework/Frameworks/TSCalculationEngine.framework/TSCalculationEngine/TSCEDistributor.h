@class NSMutableArray, Protocol;

@interface TSCEDistributor : NSObject

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSMutableArray *receivers;

- (void)addReceiver:(id)a0;
- (void)removeReceiver:(id)a0;
- (void)disconnect;
- (BOOL)hasReceiver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)distributeBlock:(id /* block */)a0;
- (void)dropAllTargets;
- (void)addReceiverIfMissing:(id)a0;
- (void)suspendDuringBlock:(id /* block */)a0;

@end
