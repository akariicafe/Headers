@class NSDictionary;

@interface AlgosScoreFaceTimeDataCSV : AlgosScoreDataCSV

@property (retain, nonatomic) NSDictionary *methods;

+ (id)facetimeDataCSV;

- (void).cxx_destruct;
- (id)init;
- (int)transformer;
- (id)setUpMethods;
- (BOOL)matchesMethod:(id)a0 code:(long long)a1;
- (BOOL)validMethod:(long long)a0;

@end
