@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSIndexSet *collection;

+ (double)baseEstimatedRows;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (double)baseEstimatedCost;
+ (const char *)sqliteCreateTableStatement;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteMethodName;

- (void)setCollection:(id)a0;
- (id)currentIndexedValue;
- (void)applyValueSort:(BOOL)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
