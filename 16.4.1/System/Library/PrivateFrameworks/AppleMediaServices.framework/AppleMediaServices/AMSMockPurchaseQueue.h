@class AMSURLSession, AMSMockURLOverride;

@interface AMSMockPurchaseQueue : AMSPurchaseQueue

@property (retain) AMSMockURLOverride *mockURLOverride;
@property (retain) AMSURLSession *session;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 mockURLOverride:(id)a1;

@end
