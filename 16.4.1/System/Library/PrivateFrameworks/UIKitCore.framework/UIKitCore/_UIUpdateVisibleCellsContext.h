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

- (BOOL)shouldInvalidate;
- (void)didEnterVisibleCellsPass;
- (void)addPreferredAttributes:(id)a0;
- (void)didLeaveVisibleCellsPass;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
