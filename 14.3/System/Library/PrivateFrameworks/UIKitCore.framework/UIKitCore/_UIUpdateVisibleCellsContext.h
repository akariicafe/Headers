@class NSIndexSet, NSArray, NSMutableIndexSet, NSMutableArray;

@interface _UIUpdateVisibleCellsContext : NSObject {
    NSMutableArray *_attributes;
    NSMutableIndexSet *_sectionIndexes;
    long long _visibleCellsRefCount;
}

@property (readonly, nonatomic) NSMutableArray *sizes;
@property (readonly, nonatomic) NSMutableArray *indexPaths;
@property (readonly, nonatomic) NSIndexSet *sectionIndexes;
@property (readonly, nonatomic) BOOL hasLeftVisibleCellsPass;
@property (readonly, nonatomic) NSArray *attributes;

- (id)init;
- (void)addPreferredAttributes:(id)a0;
- (void).cxx_destruct;
- (void)didEnterVisibleCellsPass;
- (id)description;
- (void)didLeaveVisibleCellsPass;
- (BOOL)shouldInvalidate;

@end
