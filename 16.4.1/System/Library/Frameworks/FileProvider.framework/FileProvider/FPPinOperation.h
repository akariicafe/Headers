@class NSArray;

@interface FPPinOperation : FPActionOperation {
    NSArray *_items;
}

- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (void)actionMain;
- (void)presendNotifications;

@end
