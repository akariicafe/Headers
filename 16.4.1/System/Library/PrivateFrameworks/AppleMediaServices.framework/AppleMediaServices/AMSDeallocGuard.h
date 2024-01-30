@interface AMSDeallocGuard : NSObject

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } invalidationLock;

- (void)dealloc;
- (void)invalidate;
- (id)initWithDeallocGuardBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
