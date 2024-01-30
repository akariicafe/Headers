@interface EFLocked : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id _object;
}

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } *unfairLockForTesting;

- (void)setObject:(id)a0;
- (id)description;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)performWhileLocked:(id /* block */)a0;
- (id)getObject;
- (id)debugDescription;

@end
