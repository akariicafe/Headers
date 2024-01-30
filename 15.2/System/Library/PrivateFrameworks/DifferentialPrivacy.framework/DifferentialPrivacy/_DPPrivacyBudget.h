@class _DPPrivacyBudgetRecord, _DPPrivacyBudgetProperties, NSString;

@interface _DPPrivacyBudget : NSObject

@property (readonly, nonatomic) _DPPrivacyBudgetProperties *budgetProperties;
@property (retain) _DPPrivacyBudgetRecord *budgetRecord;
@property (readonly, copy, nonatomic) NSString *name;

+ (void)initialize;
+ (void)removeBudgetWithName:(id)a0;
+ (id)budgetWithName:(id)a0;
+ (void)updateAllBudgetsUnsafeIn:(id)a0;
+ (BOOL)debit:(unsigned long long)a0 budgetWithName:(id)a1;
+ (BOOL)isMultiDayIntervalBudgetWithName:(id)a0;
+ (BOOL)createDatabaseRecordIfMissingIn:(id)a0 key:(id)a1 balance:(long long)a2;
+ (BOOL)credit:(unsigned long long)a0 budgetWithName:(id)a1;
+ (void)resetLastUpdateDateForName:(id)a0;
+ (long long)balanceForBudgetWithName:(id)a0;
+ (id)fetchBudgetKeyNamesFrom:(id)a0;
+ (void)updateAllBudgetsIn:(id)a0;
+ (void)createBudgetRecordsIn:(id)a0;
+ (id)fetchBudgetRecordFrom:(id)a0 key:(id)a1;

- (id)initWithName:(id)a0 budgetProperties:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)initializeBudgetRecordFrom:(id)a0;

@end
