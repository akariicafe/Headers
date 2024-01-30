@class NSHashTable, NSString, NSArray, BSServiceConnectionListener, CRCarPlayAppPolicyEvaluator, NSObject, FBSALOToken, FBSApplicationLibrary;
@protocol OS_dispatch_queue, CRSAppHistoryDataProviding;

@interface CRSAppHistoryService : NSObject <BSServiceConnectionListenerDelegate, CARAppHistoryClientToServerInterface, BSInvalidatable>

@property (weak, nonatomic) id<CRSAppHistoryDataProviding> dataProvider;
@property (retain, nonatomic) BSServiceConnectionListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSHashTable *connections;
@property (retain, nonatomic) FBSApplicationLibrary *applicationLibrary;
@property (retain, nonatomic) CRCarPlayAppPolicyEvaluator *policyEvaluator;
@property (retain, nonatomic) FBSALOToken *installToken;
@property (retain, nonatomic) FBSALOToken *uninstallToken;
@property (retain, nonatomic) FBSALOToken *replaceToken;
@property (copy, nonatomic) NSArray *instrumentClusterURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)setSessionFeatureKeys:(id)a0 completion:(id /* block */)a1;
- (void)setAnalyticsValues:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)fetchSessionEchoContextStatesWithCompletion:(id /* block */)a0;
- (void)fetchSessionFeatureKeysWithCompletion:(id /* block */)a0;
- (void)fetchSessionUIContextStatesWithCompletion:(id /* block */)a0;
- (void)fetchUIContextStatesWithCompletion:(id /* block */)a0;
- (void)serviceFetchInstrumentClusterURLs:(id /* block */)a0;
- (void)_connectionQueue_addConnection:(id)a0;
- (void)_connectionQueue_removeConnection:(id)a0;
- (void)_appLibraryUpdated:(id)a0;
- (void)_setupApplicationLibraryObservations;
- (id)initWithDataProvider:(id)a0 applicationLibrary:(id)a1 policyEvaluator:(id)a2;

@end
