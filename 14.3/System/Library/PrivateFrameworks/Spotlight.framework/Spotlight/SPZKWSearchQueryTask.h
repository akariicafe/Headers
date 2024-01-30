@class NSArray;

@interface SPZKWSearchQueryTask : SPQueryTask {
    NSArray *_mutableSections;
}

@property unsigned long long queryID;

+ (void)initialize;
+ (int)maxSuggestedApps;

- (void).cxx_destruct;
- (void)addApplicationResultsFromPredictionResponse:(id)a0 toSection:(id)a1 queryIdent:(unsigned long long)a2;
- (id)unsafeSections;
- (id)unsafeSessionEntityString;
- (void)start;

@end
