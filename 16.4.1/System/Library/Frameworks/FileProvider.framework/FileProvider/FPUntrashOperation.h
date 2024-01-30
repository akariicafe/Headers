@class FPItem;

@interface FPUntrashOperation : FPTransformOperation {
    FPItem *_restoreDirectory;
    FPItem *_rootDirectory;
}

@property (copy, nonatomic) id /* block */ untrashCompletionBlock;

- (id)fp_prettyDescription;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 restoreDirectory:(id)a1;
- (void)postStitchingFinishWithResult:(id)a0 error:(id)a1;
- (void)presendNotifications;
- (id)replicateForItems:(id)a0;
- (void)subclassPreflightWithCompletion:(id /* block */)a0;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;

@end
