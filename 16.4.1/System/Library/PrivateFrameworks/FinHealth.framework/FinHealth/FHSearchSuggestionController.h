@class NSMutableArray, NSXPCConnection;
@protocol FHSuggestionDelegate;

@interface FHSearchSuggestionController : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lockConnection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lockCache;
@property (nonatomic) BOOL cacheConnectionInitiated;
@property (retain, nonatomic) NSMutableArray *instrumentationCache;
@property (weak, nonatomic) id<FHSuggestionDelegate> delegate;

- (id)_clientConnection;
- (void)_init;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_remoteObjectInterface;
- (void)fetchUserProperties:(id)a0 withParameters:(id)a1 completion:(id /* block */)a2;
- (void)recordUserInteraction:(id)a0;
- (id)_validateInstrumentationRecord:(id)a0;
- (id)_newClientConnection;
- (id)_remoteObjectProxyWithErrorHandler;
- (void)_sendAllTransactionFeatures:(BOOL)a0;
- (void)_updateOrRecordCacheEntries:(id)a0 instrumentationCacheSize:(unsigned long long)a1;
- (void)aggregateFeaturesWithHandler:(id /* block */)a0;
- (void)deleteAllData:(id /* block */)a0;
- (void)deleteDataForPassesWithSourceIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)deleteTransactionByTransactionIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)featureResponsesForApplication:(id)a0 withCompletion:(id /* block */)a1;
- (void)featuresForApplication:(id)a0 withCompletion:(id /* block */)a1;
- (void)featuresWithCompletion:(id /* block */)a0;
- (void)getSerializedTrialValues:(id /* block */)a0;
- (void)paymentRingSuggestionsFromSearchFeatures:(id)a0 startDate:(id)a1 endDate:(id)a2 completion:(id /* block */)a3;
- (void)reevaluateTransactionFeatures;
- (void)sendAllTransactionFeatures;
- (void)transactionUpdated:(id)a0 deferFeatureComputation:(BOOL)a1 completion:(id /* block */)a2;
- (void)transactionsRequireSyncing;

@end
