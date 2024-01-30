@class NSObject;
@protocol OS_dispatch_queue;

@interface _COMediaSystemLeaderObserver : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0 block:(id /* block */)a1;

@end
