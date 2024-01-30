@class CXCallObserver, NSObject;
@protocol OS_dispatch_queue;

@interface CXCallController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) CXCallObserver *callObserver;

- (void)requestTransaction:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_requestTransaction:(id)a0 completion:(id /* block */)a1;
- (void)requestTransactionWithAction:(id)a0 completion:(id /* block */)a1;
- (void)requestTransactionWithActions:(id)a0 completion:(id /* block */)a1;

@end
