@class NSString;

@interface HDSQLiteDatabaseColumnSchema : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL isAutoincrement;
@property (nonatomic) BOOL isPrimaryKey;
@property (nonatomic) BOOL isNullable;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *foreignKeyTargetTable;
@property (copy, nonatomic) NSString *foreignKeyTargetColumn;
@property (nonatomic) long long deletionAction;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
