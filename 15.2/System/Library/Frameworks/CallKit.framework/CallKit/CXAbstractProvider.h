@class NSArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CXAbstractProviderHostProtocol, CXAbstractProviderDelegate;

@interface CXAbstractProvider : NSObject <CXActionDelegate, CXAbstractProviderVendorProtocol>

@property (readonly, nonatomic) NSMutableArray *mutablePendingTransactions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CXAbstractProviderDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) id<CXAbstractProviderHostProtocol> hostProtocolDelegate;
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performDelegateCallback:(id /* block */)a0;
- (void)_performAction:(id)a0;
- (void)performDelegateCallback:(id /* block */)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)actionCompleted:(id)a0;
- (oneway void)commitTransaction:(id)a0;
- (oneway void)handleActionTimeout:(id)a0;
- (void)_handleConnectionInterruption;
- (id)_pendingActionWithUUID:(id)a0;
- (void)_updatePendingTransactions;
- (void)sendProviderDidBegin;
- (void)handleConnectionInterruption;

@end
