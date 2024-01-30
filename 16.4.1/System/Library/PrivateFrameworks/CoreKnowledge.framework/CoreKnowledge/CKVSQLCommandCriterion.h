@class NSString, NSArray;

@interface CKVSQLCommandCriterion : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *columnName;
@property (readonly, nonatomic) NSString *comparingColumnName;
@property (readonly, nonatomic) NSArray *columnValues;
@property (readonly, nonatomic) long long sqlOperator;
@property (readonly, nonatomic) NSArray *subCriteria;

+ (id)criterionWithColumnName:(id)a0 INColumnValues:(id)a1;
+ (id)criterionWithColumnName:(id)a0 LIKEWildcardPattern:(id)a1;
+ (id)criterionWithColumnName:(id)a0 EQUALSColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 LESSTHANColumnValue:(id)a1;
+ (id)criterionWithColumnName:(id)a0 MATCHSearchPhrase:(id)a1;
+ (id)criterionWithANDSubCriteria:(id)a0;

- (id)initWithColumnName:(id)a0 columnValue:(id)a1 sqlOperator:(long long)a2;
- (id)initWithSubCriteria:(id)a0 sqlOperator:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColumnName:(id)a0 columnValues:(id)a1 sqlOperator:(long long)a2;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
