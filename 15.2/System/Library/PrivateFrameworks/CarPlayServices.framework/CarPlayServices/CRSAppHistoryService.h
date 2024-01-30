@class NSString, NSHashTable, NSObject, BSServiceConnectionListener;
@protocol OS_dispatch_queue, CRSAppHistoryServiceDelegate;

@interface CRSAppHistoryService : NSObject <BSServiceConnectionListenerDelegate, CRSAppHistoryClientToServerInterface, BSInvalidatable>

@property (weak, nonatomic) id<CRSAppHistoryServiceDelegate> delegate;
@property (retain, nonatomic) BSServiceConnectionListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSHashTable *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)invalidate;
- (void)fetchSessionFeatureKeysWithCompletion:(id /* block */)a0;
- (void)_connectionQueue_removeConnection:(id)a0;
- (void)_connectionQueue_addConnection:(id)a0;
- (void)setSessionFeatureKeys:(id)a0 completion:(id /* block */)a1;
- (void)fetchUIContextStatesWithCompletion:(id /* block */)a0;
- (void)fetchSessionUIContextStatesWithCompletion:(id /* block */)a0;
- (void)fetchSessionEchoContextStatesWithCompletion:(id /* block */)a0;

@end
