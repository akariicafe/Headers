@class NSArray;

@interface BBActionGroup : BBAction

@property (copy, nonatomic) NSArray *actions;

+ (id)actionGroupWithActions:(id)a0;

- (id)awakeAfterUsingCoder:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
