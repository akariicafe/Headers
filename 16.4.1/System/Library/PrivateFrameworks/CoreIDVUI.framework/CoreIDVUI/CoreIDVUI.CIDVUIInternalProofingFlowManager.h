@interface CoreIDVUI.CIDVUIInternalProofingFlowManager : NSObject {
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ externalProofingFlowManager;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ eligibilityHelper;
}

@property (nonatomic, readonly) unsigned long long proofingEligibilityStatus;

- (id)init;
- (void).cxx_destruct;
- (id)proofingFlowViewController;
- (id)initWithDelegate:(id)a0 externalProofingFlowManager:(id)a1;
- (void)proofingFlowAvailabilityWithCompletion:(id /* block */)a0;
- (void)proofingFlowAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)startProofingWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
