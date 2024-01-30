@interface CNProbabilityUtilityTestDouble : NSObject <CNProbabilityUtility>

@property (nonatomic) BOOL expectedResult;

- (id)init;
- (id)initWithExpectedResult:(BOOL)a0;
- (BOOL)trueWithProbability:(double)a0;

@end
