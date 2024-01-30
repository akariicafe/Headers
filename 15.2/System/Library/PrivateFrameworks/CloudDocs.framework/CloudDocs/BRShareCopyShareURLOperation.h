@class CKShare, NSString, NSError;

@interface BRShareCopyShareURLOperation : BRShareOperation {
    NSError *_error;
}

@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) NSString *appName;
@property (copy) id /* block */ shareCopyURLCompletionBlock;
@property (copy) id /* block */ copyShareURLCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithShare:(id)a0 documentType:(id)a1;
- (id)initWithShare:(id)a0 fileURL:(id)a1 documentType:(id)a2;
- (id)initWithFileURL:(id)a0 documentType:(id)a1;

@end
