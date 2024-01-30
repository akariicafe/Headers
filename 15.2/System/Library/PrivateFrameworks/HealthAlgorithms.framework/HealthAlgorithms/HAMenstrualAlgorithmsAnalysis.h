@class NSArray, HAMenstrualAlgorithmsStats;

@interface HAMenstrualAlgorithmsAnalysis : NSObject

@property (retain, nonatomic) NSArray *menstruationPredictions;
@property (retain, nonatomic) NSArray *fertilityPredictions;
@property (retain, nonatomic) HAMenstrualAlgorithmsStats *stats;

- (void).cxx_destruct;

@end
