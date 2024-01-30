@class NSArray;

@interface FPPinOperation : FPActionOperation {
    NSArray *_items;
}

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)actionMain;
- (void)presendNotifications;

@end
