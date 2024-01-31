@class CXVoicemailObserver, NSObject;
@protocol OS_dispatch_queue;

@interface CXVoicemailController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, nonatomic) CXVoicemailObserver *voicemailObserver;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)requestTransaction:(id)a0 completion:(id /* block */)a1;
- (void)_requestTransaction:(id)a0 completion:(id /* block */)a1;
- (void)requestTransactionWithAction:(id)a0 completion:(id /* block */)a1;
- (void)requestTransactionWithActions:(id)a0 completion:(id /* block */)a1;

@end
