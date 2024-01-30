@class SFCounterfactualInfo;

@interface SFExperimentTriggeredFeedback : SFFeedback

@property (retain, nonatomic) SFCounterfactualInfo *counterfactual;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCfDiffered:(BOOL)a0 cfUsed:(BOOL)a1 cfError:(unsigned long long)a2;

@end
