@interface FPTrashOperation : FPTransformOperation

- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)fp_prettyDescription;
- (id)initWithItems:(id)a0;
- (void)presendNotifications;
- (id)replicateForItems:(id)a0;
- (void)subclassPreflightWithCompletion:(id /* block */)a0;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;

@end
