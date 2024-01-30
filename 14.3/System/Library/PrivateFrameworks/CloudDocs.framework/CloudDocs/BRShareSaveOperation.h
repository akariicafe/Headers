@class CKShare;

@interface BRShareSaveOperation : BROperation

@property (retain, nonatomic) CKShare *share;
@property (copy) id /* block */ shareSaveCompletionBlock;

+ (BOOL)shouldRetryShareSaveOnError:(id)a0;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithShare:(id)a0;

@end
