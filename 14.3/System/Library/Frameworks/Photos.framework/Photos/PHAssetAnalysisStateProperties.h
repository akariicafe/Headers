@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSMutableDictionary *fetchDictionariesByWorkerType;

+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (BOOL)isToMany;
+ (id)keyPathFromPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;
- (int)analysisStateForWorkerType:(short)a0 outLastIgnoreDate:(id *)a1 outIgnoreUntilDate:(id *)a2;

@end
