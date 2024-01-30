@class NSString;

@interface HDSQLiteDatabaseTriggerSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSString *sql;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
