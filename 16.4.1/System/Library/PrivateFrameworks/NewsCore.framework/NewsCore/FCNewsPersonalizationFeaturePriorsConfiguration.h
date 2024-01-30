@class FCNewsPersonalizationFeaturePrior;

@interface FCNewsPersonalizationFeaturePriorsConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationFeaturePrior *baselineFeaturePrior;
@property (retain, nonatomic) FCNewsPersonalizationFeaturePrior *generalFeaturePrior;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
