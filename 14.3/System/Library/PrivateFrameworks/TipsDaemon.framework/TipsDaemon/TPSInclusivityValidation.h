@class NSArray;

@interface TPSInclusivityValidation : TPSTargetingValidation

@property (copy, nonatomic) NSArray *targetValues;
@property (copy, nonatomic) NSArray *excludeValues;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTargetValues:(id)a0 excludeValues:(id)a1;

@end
