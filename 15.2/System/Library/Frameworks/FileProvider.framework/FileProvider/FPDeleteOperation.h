@class NSArray;

@interface FPDeleteOperation : FPActionOperation {
    NSArray *_items;
}

- (id)initWithItems:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)actionMain;
- (void)presendNotifications;
- (id)replicateForItems:(id)a0;

@end
