@class MapsSuggestionsManager, NSString, NSMutableSet, NSMutableArray;

@interface MapsSuggestionsSimpleStrategy : NSObject <MapsSuggestionsStrategy> {
    NSMutableSet *_preFilters;
    NSMutableArray *_improvers;
    NSMutableArray *_dedupers;
    NSMutableSet *_postFilters;
    NSMutableArray *_previousResults;
}

@property (weak, nonatomic) MapsSuggestionsManager *manager;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)postFiltersKept:(id)a0;
- (void)removeAllImprovers;
- (BOOL)preFiltersKept:(id)a0;
- (void)removeAllFilters;
- (void)addImprover:(id)a0;
- (void).cxx_destruct;
- (void)addDeduper:(id)a0;
- (id)init;
- (void)removeFilter:(id)a0;
- (void)clearData;
- (void)addPreFilter:(id)a0;
- (id)topSuggestionsWithSourceEntries:(id)a0 error:(id *)a1;
- (void)removeAllDedupers;
- (void)addPostFilter:(id)a0;

@end
