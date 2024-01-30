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

- (void)stepIndexedRow;
- (unsigned long long)currentIndexedRowId;
- (void)setIndexSet:(id)a0;
- (void)applyRowIdSort:(BOOL)a0;
- (void)matchNoRows;
- (void)finalizeConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (void)matchOneRow:(unsigned long long)a0;

@end
