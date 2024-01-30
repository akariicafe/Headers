@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSMutableDictionary *fetchDictionariesByWorkerType;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (BOOL)isToMany;

- (int)analysisStateForWorkerType:(short)a0 outLastIgnoreDate:(id *)a1 outIgnoreUntilDate:(id *)a2;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
