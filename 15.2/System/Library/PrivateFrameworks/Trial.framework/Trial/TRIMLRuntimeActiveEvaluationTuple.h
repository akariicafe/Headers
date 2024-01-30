@class TRIFactorsState, TRIMLRuntimeEvaluation;

@interface TRIMLRuntimeActiveEvaluationTuple : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIMLRuntimeEvaluation *eval;
@property (readonly, nonatomic) TRIFactorsState *factorsState;

+ (id)tupleWithEval:(id)a0 factorsState:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToTuple:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementFactorsState:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementEval:(id)a0;
- (id)initWithEval:(id)a0 factorsState:(id)a1;
- (unsigned long long)hash;

@end
