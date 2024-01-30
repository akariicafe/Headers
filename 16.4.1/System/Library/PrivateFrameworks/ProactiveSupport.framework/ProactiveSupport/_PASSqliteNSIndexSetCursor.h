@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSIndexSet *collection;

+ (BOOL)canOrderByValue:(BOOL)a0;
+ (const char *)sqliteCreateTableStatement;
+ (double)baseEstimatedRows;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteMethodName;
+ (double)baseEstimatedCost;

- (void)applyValueSort:(BOOL)a0;
- (void)setCollection:(id)a0;
- (id)currentIndexedValue;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
