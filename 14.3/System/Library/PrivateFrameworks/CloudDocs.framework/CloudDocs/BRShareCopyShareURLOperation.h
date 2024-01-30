@class CKShare, NSString, NSError;

@interface BRShareCopyShareURLOperation : BROperation {
    NSError *_error;
}

@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) NSString *appName;
@property (copy) id /* block */ shareCopyURLCompletionBlock;
@property (copy) id /* block */ copyShareURLCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithShare:(id)a0 documentType:(id)a1;
- (id)_initWithShare:(id)a0 documentType:(id)a1;
- (id)initWithFileURL:(id)a0 documentType:(id)a1;

@end
