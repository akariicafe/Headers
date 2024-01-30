@class NSString, SBFTraitsArbiter, NSNumber, NSMutableArray;
@protocol BSInvalidatable;

@interface SBFTraitsArbitrationInputsValidationStage : NSObject <BSDescriptionProviding, SBFTraitsArbitrationInputsValidating> {
    NSMutableArray *_inputsValidators;
    id<BSInvalidatable> _stateDumpHandle;
}

@property (weak, nonatomic) SBFTraitsArbiter *arbiter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSNumber *validatorOrder;

- (id)validateInputs:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)initWithValidators:(id)a0 arbiter:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)removeInputsValidator:(id)a0;
- (void)dealloc;
- (id)_setupStateDump;
- (void)addInputsValidator:(id)a0;

@end
