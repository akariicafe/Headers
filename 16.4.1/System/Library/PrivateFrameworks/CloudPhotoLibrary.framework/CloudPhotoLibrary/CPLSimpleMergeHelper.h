@class CPLEngineStore;

@interface CPLSimpleMergeHelper : NSObject

@property (readonly, nonatomic) CPLEngineStore *store;

+ (id)_mergerWithNoConflictsForStore:(id)a0;
+ (id)_mergerWithConflictsForStore:(id)a0 conflictingScopeIdentifiers:(id)a1;

- (id)mergerForBatch:(id)a0 error:(id *)a1;
- (id)initWithEngineStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)_changeCanConflict:(id)a0;

@end
