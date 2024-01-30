@class NSMutableArray, Protocol;

@interface TSCEDistributor : NSObject

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSMutableArray *receivers;

- (void)disconnect;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasReceiver:(id)a0;
- (void)removeReceiver:(id)a0;
- (void)addReceiver:(id)a0;
- (void)addReceiverIfMissing:(id)a0;
- (void)distributeBlock:(id /* block */)a0;
- (void)dropAllTargets;
- (void)suspendDuringBlock:(id /* block */)a0;

@end
