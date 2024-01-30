@interface SPZKWQueryTask : SPQueryTask

+ (void)initialize;
+ (int)maxSuggestedApps;

- (id)unsafeSessionEntityString;
- (id)unsafeSections;
- (void)addApplicationResultsFromPredictionResponse:(id)a0 toSection:(id)a1 queryIdent:(unsigned long long)a2;
- (void)start;

@end
