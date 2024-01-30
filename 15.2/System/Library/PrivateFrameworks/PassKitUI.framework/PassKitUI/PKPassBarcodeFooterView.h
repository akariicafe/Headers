@class LAContext, NSMutableArray;

@interface PKPassBarcodeFooterView : PKPassFooterContentView {
    LAContext *_context;
    NSMutableArray *_contextCompletions;
}

- (void)layoutSubviews;
- (id)initWithPass:(id)a0;
- (void).cxx_destruct;
- (void)_didInvalidate;
- (void)willBecomeVisibleAnimated:(BOOL)a0;
- (void)_authenticateWithCompletion:(id /* block */)a0;

@end
