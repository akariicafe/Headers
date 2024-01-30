@class NSArray, NSNumber;

@interface ODCurareModelSelectionPolicy : NSObject

@property (retain, nonatomic) NSArray *modelSelectionParameters;
@property (retain, nonatomic) NSNumber *minimumNumberOfEvaluations;
@property (retain, nonatomic) NSNumber *minimumNumberOfSamples;

- (id)description;
- (void).cxx_destruct;
- (id)initWithModelSelectionParameters:(id)a0 minimumNumberOfEvaluations:(id)a1 minimumNumberOfSamples:(id)a2;

@end
