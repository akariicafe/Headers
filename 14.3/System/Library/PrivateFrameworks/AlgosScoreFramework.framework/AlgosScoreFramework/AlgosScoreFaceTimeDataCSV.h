@class NSDictionary;

@interface AlgosScoreFaceTimeDataCSV : AlgosScoreDataCSV

@property (retain, nonatomic) NSDictionary *methods;

+ (id)facetimeDataCSV;

- (id)init;
- (void).cxx_destruct;
- (int)transformer;
- (id)setUpMethods;
- (BOOL)matchesMethod:(id)a0 code:(long long)a1;
- (BOOL)validMethod:(long long)a0;

@end
