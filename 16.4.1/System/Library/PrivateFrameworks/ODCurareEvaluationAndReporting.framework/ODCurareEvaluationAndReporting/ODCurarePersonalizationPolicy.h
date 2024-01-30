@class NSArray, NSNumber;

@interface ODCurarePersonalizationPolicy : NSObject

@property (retain, nonatomic) NSArray *hyperparameterSelectionPolicy;
@property (retain, nonatomic) NSNumber *minimumNumberOfSamplesForPersonalization;
@property (retain, nonatomic) NSNumber *minimumNumberOfSamplesForPersonalizationSelection;

- (void).cxx_destruct;
- (id)initWithModelSelectionParameters:(id)a0 minimumNumberOfSamplesForPersonalization:(id)a1 minimumNumberOfSamplesForPersonalizationSelection:(id)a2;

@end
