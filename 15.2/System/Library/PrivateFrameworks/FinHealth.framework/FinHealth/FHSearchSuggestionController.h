@class NSXPCConnection;
@protocol FHSuggestionDelegate;

@interface FHSearchSuggestionController : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lockConnection;
@property (weak, nonatomic) id<FHSuggestionDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)sendAllTransactionFeatures;
- (void)transactionsRequireSyncing;
- (id)_remoteObjectInterface;
- (void)deleteAllData:(id /* block */)a0;
- (void)reevaluateTransactionFeatures;
- (void)featuresWithCompletion:(id /* block */)a0;
- (void)deleteDataForPassesWithSourceIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)_newClientConnection;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler;
- (void)aggregateFeaturesWithHandler:(id /* block */)a0;
- (void)transactionUpdated:(id)a0 deferFeatureComputation:(BOOL)a1 completion:(id /* block */)a2;
- (void)featureResponsesForApplication:(id)a0 withCompletion:(id /* block */)a1;
- (void)getSerializedTrialValues:(id /* block */)a0;
- (void)featuresForApplication:(id)a0 withCompletion:(id /* block */)a1;
- (void)dealloc;
- (id)_clientConnection;
- (void)deleteTransactionByTransactionIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_sendAllTransactionFeatures:(BOOL)a0;

@end
