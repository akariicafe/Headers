@class AMSMockURLOverride;

@interface AMSMockPurchaseQueue : AMSPurchaseQueue

@property (retain) AMSMockURLOverride *mockURLOverride;

- (id)initWithConfiguration:(id)a0 mockURLOverride:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
