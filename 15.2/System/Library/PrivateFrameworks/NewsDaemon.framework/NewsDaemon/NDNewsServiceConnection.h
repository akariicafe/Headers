@class NSObject, NSString, NSXPCConnection;
@protocol NDNewsService, OS_dispatch_queue, NDNewsServiceClient;

@interface NDNewsServiceConnection : NSObject <NDNewsServiceClient, NDNewsService>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id<NDNewsService> daemon;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (weak, nonatomic) id<NDNewsServiceClient> client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClient:(id)a0;
- (void).cxx_destruct;
- (void)fetchModuleDescriptorsWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)fetchLatestResultsWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)fetchPlaceholderResultsWithOperationInfo:(id)a0 syncCompletion:(id /* block */)a1;
- (void)markAnalyticsElements:(id)a0 asSeenAtDate:(id)a1 withCompletion:(id /* block */)a2;
- (void)markAnalyticsElement:(id)a0 asReadAtDate:(id)a1 withCompletion:(id /* block */)a2;
- (void)serviceHasNewTodayResults;
- (void)_establishConnectionIfNeededWithCompletion:(id /* block */)a0;
- (void)_unsafeEstablishConnectionIfNeededWithCompletion:(id /* block */)a0;

@end
