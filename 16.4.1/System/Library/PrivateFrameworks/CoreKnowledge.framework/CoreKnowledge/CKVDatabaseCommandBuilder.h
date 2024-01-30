@class NSString, CKVSQLCommandCriterion;

@interface CKVDatabaseCommandBuilder : NSObject

@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) CKVSQLCommandCriterion *criterion;

- (id)initWithTableName:(id)a0;
- (void)setCommandCriterion:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
