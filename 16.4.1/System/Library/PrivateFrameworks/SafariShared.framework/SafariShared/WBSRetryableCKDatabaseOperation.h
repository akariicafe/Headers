@class CKDatabase;

@interface WBSRetryableCKDatabaseOperation : WBSRetryableCKOperation

@property (retain, nonatomic) CKDatabase *database;

- (void)_setUpOperation:(id)a0;
- (void).cxx_destruct;

@end
