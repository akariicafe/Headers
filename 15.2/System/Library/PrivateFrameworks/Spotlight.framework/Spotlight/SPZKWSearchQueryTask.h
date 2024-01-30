@class NSArray;

@interface SPZKWSearchQueryTask : SPQueryTask {
    NSArray *_mutableSections;
}

@property unsigned long long queryID;

+ (void)initialize;
+ (int)maxSuggestedApps;

- (id)unsafeSessionEntityString;
- (id)unsafeSections;
- (void)start;
- (void).cxx_destruct;
- (void)addApplicationResultsFromPredictionResponse:(id)a0 toSection:(id)a1 queryIdent:(unsigned long long)a2;

@end
