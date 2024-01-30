@interface AMSThreadSafeObject : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) id underlyingObject;

- (id)initWithObject:(id)a0;
- (void)setObject:(id)a0;
- (id)object;
- (void)readWrite:(id /* block */)a0;
- (id)accessAndSetObjectWithBlock:(id /* block */)a0;
- (id)init;
- (void)read:(id /* block */)a0;
- (void).cxx_destruct;

@end
