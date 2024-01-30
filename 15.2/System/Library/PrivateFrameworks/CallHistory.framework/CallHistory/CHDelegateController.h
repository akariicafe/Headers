@class NSMapTable;

@interface CHDelegateController : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } delegateLock;
@property (readonly, nonatomic) NSMapTable *delegateToQueue;

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)enumerateDelegatesUsingBlock:(id /* block */)a0;

@end
