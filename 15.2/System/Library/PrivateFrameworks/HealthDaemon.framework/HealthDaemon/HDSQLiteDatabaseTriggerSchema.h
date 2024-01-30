@class NSString;

@interface HDSQLiteDatabaseTriggerSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSString *sql;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
