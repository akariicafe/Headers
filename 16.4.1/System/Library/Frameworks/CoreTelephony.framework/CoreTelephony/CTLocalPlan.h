@class CTPlanIdentifier;

@interface CTLocalPlan : CTPlan

@property (retain, nonatomic) CTPlanIdentifier *planID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPlanID:(id)a0;

@end
