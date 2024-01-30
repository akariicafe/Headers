@class NSString, NSError;

@interface ML3DatabaseRecoveryOperation : NSOperation

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)main;
- (void)_recreateDatabaseWithCompletion:(id /* block */)a0;
- (id)initWithDatabaseFilePath:(id)a0;
- (id)_createSQLiteErrorWithCode:(int)a0 description:(id)a1;
- (id)_lastCorruptionRestoreAttemptDate;
- (void)_updateLastCorruptionRestoreAttemptDate;

@end
