@class AMSMockURLOverride;

@interface AMSMockPurchaseQueue : AMSPurchaseQueue

@property (retain) AMSMockURLOverride *mockURLOverride;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0 mockURLOverride:(id)a1;

@end
