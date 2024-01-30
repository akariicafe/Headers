@class _TtC9CoreIDVUI33CIDVUIInternalProofingFlowManager;

@interface CIDVUIProofingFlowManager : NSObject

@property (retain, nonatomic) _TtC9CoreIDVUI33CIDVUIInternalProofingFlowManager *proofingFlowManager;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)proofingFlowAvailability:(id /* block */)a0;
- (void)startProofing:(id)a0 completion:(id /* block */)a1;
- (id)proofingFlowViewController;
- (void)proofingFlowAvailabilityWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)currentProofingEligibilityStatus;

@end
