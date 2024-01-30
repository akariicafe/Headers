@class CKShare;

@interface BRShareDestroyOperation : BROperation

@property (retain, nonatomic) CKShare *share;
@property (copy) id /* block */ shareDestroyCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithShare:(id)a0;

@end
