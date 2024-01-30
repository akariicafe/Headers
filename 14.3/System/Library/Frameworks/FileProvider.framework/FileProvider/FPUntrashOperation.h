@class FPItem;

@interface FPUntrashOperation : FPTransformOperation {
    FPItem *_restoreDirectory;
}

@property (copy, nonatomic) id /* block */ untrashCompletionBlock;

- (void).cxx_destruct;
- (id)replicateForItems:(id)a0;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)postStitchingFinishWithResult:(id)a0 error:(id)a1;
- (id)initWithItems:(id)a0 restoreDirectory:(id)a1;
- (id)fp_prettyDescription;
- (void)presendNotifications;

@end
