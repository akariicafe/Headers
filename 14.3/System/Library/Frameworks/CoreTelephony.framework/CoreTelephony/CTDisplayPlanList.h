@class NSArray;

@interface CTDisplayPlanList : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *plans;

- (void).cxx_destruct;
- (id)initWithDisplayPlans:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
