@class NSIndexSet, NSMutableIndexSet;

@interface _PASSqliteRowIdIndexSetCursor : _PASSqliteRowIdCursor {
    unsigned long long _currentIndex;
    NSIndexSet *_indexSet;
    NSMutableIndexSet *_mutableIndexSet;
    BOOL _isDescending;
}

@property (readonly, nonatomic) NSMutableIndexSet *mutableIndexSet;

+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (double)costFactorForRandomAccess;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)currentIndexedRowId;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (void)setIndexSet:(id)a0;
- (void)finalizeConstraints;
- (void)stepIndexedRow;
- (void)applyRowIdSort:(BOOL)a0;
- (void)matchNoRows;
- (void)matchOneRow:(unsigned long long)a0;

@end
