@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}

@property (retain, nonatomic) id collection;

+ (const char *)sqliteMethodName;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (BOOL)hasKey;
+ (double)baseEstimatedRows;
+ (const char *)sqliteCreateTableStatement;
+ (double)baseEstimatedCost;
+ (BOOL)hasRowId;
+ (id)planningInfoForKeyConstraint:(int)a0;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (BOOL)canOrderByKey:(BOOL)a0;

- (unsigned long long)outputRowId;
- (void)stepIndexedRow;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)applyValueSort:(BOOL)a0;
- (void)applyKeySort:(BOOL)a0;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyRowIdSort:(BOOL)a0;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (void).cxx_destruct;
- (id)outputKey;
- (id)init;
- (BOOL)currentIndexEof;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
