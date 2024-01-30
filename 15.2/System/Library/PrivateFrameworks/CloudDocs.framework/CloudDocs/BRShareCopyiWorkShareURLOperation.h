@class CKShare, NSString;

@interface BRShareCopyiWorkShareURLOperation : BROperation

@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) NSString *appName;
@property (copy) id /* block */ shareCopyURLCompletionBlock;

+ (id)iWorkShareableExtensions;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithShare:(id)a0 documentType:(id)a1;
- (id)initWithShare:(id)a0 appName:(id)a1;

@end
