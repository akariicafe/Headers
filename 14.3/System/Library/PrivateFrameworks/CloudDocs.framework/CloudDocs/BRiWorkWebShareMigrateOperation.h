@class NSURL, NSOperationQueue;

@interface BRiWorkWebShareMigrateOperation : BROperation

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (copy) id /* block */ shareMigrationCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithURL:(id)a0;
- (void)_startSharingReadWrite:(BOOL)a0;
- (void)_migrateShare;
- (void)_copyShare;

@end
