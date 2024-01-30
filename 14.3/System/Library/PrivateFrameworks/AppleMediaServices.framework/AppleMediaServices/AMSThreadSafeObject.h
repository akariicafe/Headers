@class NSObject;
@protocol OS_dispatch_queue;

@interface AMSThreadSafeObject : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *objectAccessQueue;
@property (retain, nonatomic) id object;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (id)accessAndSetObjectWithBlock:(id /* block */)a0;

@end
