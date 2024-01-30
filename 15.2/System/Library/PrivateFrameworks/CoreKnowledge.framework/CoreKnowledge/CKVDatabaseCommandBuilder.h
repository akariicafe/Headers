@class NSString, CKVSQLCommandCriterion;

@interface CKVDatabaseCommandBuilder : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) CKVSQLCommandCriterion *criterion;

- (void).cxx_destruct;
- (id)init;
- (void)setCommandCriterion:(id)a0;
- (id)initWithTableName:(id)a0;

@end
