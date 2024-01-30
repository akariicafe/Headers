@class TransparencyManagedDataStore, TransparencyAnalytics, TransparencyLogSession;

@interface TransparencyLogClient : NSObject

@property (retain) TransparencyLogSession *session;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) TransparencyAnalytics *transparencyAnalytics;

- (void).cxx_destruct;
- (void)deleteDownloadId:(id)a0;
- (BOOL)needsRetry:(id)a0;
- (BOOL)fetch:(id)a0 shouldRetry:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)fetch:(id)a0 completionHandler:(id /* block */)a1;
- (void)download:(id)a0 retry:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithBackgroundSession:(id)a0 transparencyAnalytics:(id)a1 dataStore:(id)a2;
- (BOOL)fetchRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadRequest:(id)a0 retry:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
