@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation : FCOperation

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (nonatomic) BOOL skipPreflight;
@property (nonatomic) BOOL handleIdentityLoss;

- (BOOL)validateOperation;
- (unsigned long long)maxRetries;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)runChildCKOperation:(id)a0 destination:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
