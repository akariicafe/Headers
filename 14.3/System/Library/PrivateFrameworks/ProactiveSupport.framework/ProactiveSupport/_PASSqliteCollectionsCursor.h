@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}

@property (retain, nonatomic) id collection;

+ (double)baseEstimatedRows;
+ (BOOL)hasKey;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (BOOL)canOrderByKey:(BOOL)a0;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (double)baseEstimatedCost;
+ (id)planningInfoForKeyConstraint:(int)a0;
+ (const char *)sqliteCreateTableStatement;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteMethodName;
+ (BOOL)hasRowId;

- (id)init;
- (void).cxx_destruct;
- (id)currentIndexedValue;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (void)applyValueSort:(BOOL)a0;
- (unsigned long long)outputRowId;
- (void)finalizeConstraints;
- (id)outputKey;
- (void)stepIndexedRow;
- (BOOL)checkCurrentRow;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)stepOutputRow;
- (BOOL)currentIndexEof;
- (id)outputValue;
- (void)applyRowIdSort:(BOOL)a0;
- (void)applyKeySort:(BOOL)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (BOOL)outputEof;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (void)stayOnOrStepToOutputRow;

@end
