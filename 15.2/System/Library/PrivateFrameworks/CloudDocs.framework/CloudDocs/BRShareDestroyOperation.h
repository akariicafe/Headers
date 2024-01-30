@class CKShare;

@interface BRShareDestroyOperation : BRShareOperation

@property (retain, nonatomic) CKShare *share;
@property (copy) id /* block */ shareDestroyCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithShare:(id)a0 fileURL:(id)a1;
- (id)initWithShare:(id)a0;

@end
