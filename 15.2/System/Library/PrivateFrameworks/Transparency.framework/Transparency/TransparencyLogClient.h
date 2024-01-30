@class TransparencyManagedDataStore, TransparencyAnalytics, TransparencyLogSession;

@interface TransparencyLogClient : NSObject

@property (retain) TransparencyLogSession *session;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) TransparencyAnalytics *transparencyAnalytics;
@property (readonly) BOOL ready;

+ (double)timeShift:(id)a0;

- (void)download:(id)a0 retry:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)fetch:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteDownloadId:(id)a0;
- (BOOL)needsRetry:(id)a0;
- (BOOL)fetch:(id)a0 shouldRetry:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)needsReauthorization:(id)a0 metadata:(id)a1;
- (BOOL)needsTimeShift:(id)a0 metadata:(id)a1;
- (void)renewAccountTokenForFetch:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithBackgroundSession:(id)a0 transparencyAnalytics:(id)a1 dataStore:(id)a2;
- (void)fetchRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadRequest:(id)a0 retry:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
