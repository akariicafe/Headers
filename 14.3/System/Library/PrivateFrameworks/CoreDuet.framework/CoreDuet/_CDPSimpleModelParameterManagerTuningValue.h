@interface _CDPSimpleModelParameterManagerTuningValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float lambda;
@property (readonly, nonatomic) float w0;
@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) float score;

- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithLambda:(float)a0 w0:(float)a1 threshold:(float)a2 score:(float)a3;
- (void)encodeWithCoder:(id)a0;

@end
