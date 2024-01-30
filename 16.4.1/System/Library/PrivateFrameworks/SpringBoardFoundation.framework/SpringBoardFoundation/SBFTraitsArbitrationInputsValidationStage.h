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
@property (readonly, nonatomic) NSNumber *validatorOrder;

- (void)addInputsValidator:(id)a0 update:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)removeInputsValidator:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)validateInputs:(id)a0;
- (void)dealloc;
- (id)_setupStateDump;
- (void)removeInputsValidator:(id)a0 update:(BOOL)a1;
- (void)addInputsValidator:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithValidators:(id)a0 arbiter:(id)a1;
- (void).cxx_destruct;

@end
