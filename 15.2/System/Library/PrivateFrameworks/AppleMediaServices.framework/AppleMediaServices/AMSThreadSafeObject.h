@class NSObject;
@protocol OS_dispatch_queue;

@interface AMSThreadSafeObject : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) id underlyingObject;

- (id)accessAndSetObjectWithBlock:(id /* block */)a0;
- (void)setObject:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)readWrite:(id /* block */)a0;
- (void)read:(id /* block */)a0;
- (id)object;

@end
