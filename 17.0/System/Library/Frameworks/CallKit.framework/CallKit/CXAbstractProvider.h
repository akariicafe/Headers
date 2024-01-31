@class NSString, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CXActionDelegateInternal, CXAbstractProviderDelegate;

@interface CXAbstractProvider : NSObject <CXActionDelegate, CXAbstractProvider>

@property (readonly, nonatomic) NSMutableArray *mutablePendingTransactions;
@property (copy) id /* block */ connectionInterruptionHandler;
@property (weak, nonatomic) id<CXActionDelegateInternal> internalActionDelegate;
@property (weak, nonatomic) id<CXAbstractProviderDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;

- (id)init;
- (void)performDelegateCallback:(id /* block */)a0;
- (void)provider:(id)a0 commitTransaction:(id)a1;
- (void)_performDelegateCallback:(id /* block */)a0;
- (void)sendDidBeginForProvider:(id)a0;
- (void)invalidate;
- (void)actionCompleted:(id)a0;
- (void)handleConnectionInterruptionForProvider:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)_pendingActionWithUUID:(id)a0;
- (void)_updatePendingTransactions;
- (void)provider:(id)a0 handleTimeoutForAction:(id)a1;
- (void)_syncSetDelegate:(id)a0 queue:(id)a1;

@end
