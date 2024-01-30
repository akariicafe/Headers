@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}

@property (retain, nonatomic) id collection;

+ (BOOL)hasKey;
+ (id)planningInfoForKeyConstraint:(int)a0;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (const char *)sqliteCreateTableStatement;
+ (double)baseEstimatedRows;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteMethodName;
+ (double)baseEstimatedCost;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (BOOL)canOrderByKey:(BOOL)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (BOOL)hasRowId;

- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)applyRowIdSort:(BOOL)a0;
- (void)applyValueSort:(BOOL)a0;
- (BOOL)currentIndexEof;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (void)stepIndexedRow;
- (id)outputKey;
- (void)finalizeConstraints;
- (id)currentIndexedValue;
- (id)init;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (unsigned long long)outputRowId;
- (void)applyKeySort:(BOOL)a0;
- (void).cxx_destruct;

@end
