@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSIndexSet *collection;

+ (const char *)sqliteMethodName;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (double)baseEstimatedRows;
+ (const char *)sqliteCreateTableStatement;
+ (double)baseEstimatedCost;

- (void)applyValueSort:(BOOL)a0;
- (void)setCollection:(id)a0;
- (id)currentIndexedValue;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
