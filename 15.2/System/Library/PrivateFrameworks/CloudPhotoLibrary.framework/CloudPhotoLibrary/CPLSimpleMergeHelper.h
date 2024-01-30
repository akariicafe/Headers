@class CPLEngineStore;

@interface CPLSimpleMergeHelper : NSObject

@property (readonly, nonatomic) CPLEngineStore *store;

+ (id)_mergerWithNoConflictsForStore:(id)a0;
+ (id)_mergerWithConflictsForStore:(id)a0 conflictingScopeIdentifiers:(id)a1;

- (void).cxx_destruct;
- (id)initWithEngineStore:(id)a0;
- (BOOL)_changeCanConflict:(id)a0;
- (id)mergerForBatch:(id)a0 error:(id *)a1;

@end
