@class NSNumber, NSString;

@interface SBFTraitsInputsDefaultValidator : NSObject <SBFTraitsArbitrationInputsValidating>

@property (nonatomic) NSNumber *validatorOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validateInputs:(id)a0;

@end
