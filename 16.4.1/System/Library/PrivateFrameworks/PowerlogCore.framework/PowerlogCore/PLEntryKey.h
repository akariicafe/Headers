@class NSString;

@interface PLEntryKey : NSObject

@property (copy, nonatomic) NSString *wildCardName;
@property (nonatomic) BOOL isDynamic;
@property (nonatomic) struct _PLTimeIntervalRange { double location; double length; } timeIntervalRange;
@property (weak) PLEntryKey *baseEntryKey;
@property (readonly, retain) NSString *entryKey;
@property (readonly, retain) NSString *operatorName;
@property (readonly, retain) Class operatorClass;
@property (readonly, retain) NSString *entryType;
@property (readonly, retain) NSString *entryName;

+ (id)timeintervalRangeEntryKeyForEntryKey:(id)a0 withTimeIntervalRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
+ (id)PLEntryAggregateKeysForOperatorName:(id)a0;
+ (id)wildCardForEntryKey:(id)a0;
+ (id)entryKeysForOperatorNameCopy:(id)a0;
+ (void)setupEntryObjectsForOperatorClass:(Class)a0;
+ (id)baseEntryKeyForEntryKey:(id)a0;
+ (id)PLEntryAggregateKeysForOperator:(id)a0;
+ (void)addPLEntryKey:(id)a0;
+ (id)PLEntryKeyForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2 withWildCardName:(id)a3 isDynamic:(BOOL)a4;
+ (id)operatorNameForEntryKey:(id)a0;
+ (id)dynamicEntryKeyForEntryKey:(id)a0;
+ (id)entryKeyStringForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2;
+ (struct _PLTimeIntervalRange { double x0; double x1; })timeIntervalRangeForEntryKey:(id)a0;
+ (id)entryKeyForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2;
+ (void)addPLEntryKeyStringToTasking:(id)a0;
+ (BOOL)shouldConfigureTable:(id)a0 withType:(id)a1 withName:(id)a2 withConfigs:(id)a3;
+ (id)PLEntryKeyStringsForTasking;
+ (id)entryKeyForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2 withWildCardName:(id)a3 isDynamic:(BOOL)a4;
+ (BOOL)isEntryKeySetup:(id)a0 forOperatorName:(id)a1;
+ (id)entryKeyForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2 isDynamic:(BOOL)a3;
+ (id)PLEntryAggregateKeysForOperatorClass:(Class)a0;
+ (id)entryKeysForOperatorClass:(Class)a0;
+ (Class)operatorClassForEntryKey:(id)a0;
+ (void)PLEntryKeyStringsForTaskingReset;
+ (id)entryKeysForOperatorName:(id)a0;
+ (id)PLEntryKeysForEntryType:(id)a0;
+ (id)entryKeysForOperator:(id)a0;
+ (id)PLEntryKeyForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2;
+ (BOOL)shouldConfigureAdditionalTable:(id)a0 withType:(id)a1 withName:(id)a2;
+ (id)PLEntryKeyForEntryKey:(id)a0;
+ (id)entryKeyForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2 withWildCardName:(id)a3;

- (id)copyWithWildCardName:(id)a0;
- (id)copyWithTimeIntervalRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id)initWithOperatorName:(id)a0 withEntryType:(id)a1 withEntryName:(id)a2;
- (id)debugDescription;
- (id)copyWithIsDynamic:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;

@end
