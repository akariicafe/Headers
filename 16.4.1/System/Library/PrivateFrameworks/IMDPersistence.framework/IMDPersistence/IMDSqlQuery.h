@class NSString;

@interface IMDSqlQuery : NSObject

@property (readonly, copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSString *columns;
@property (nonatomic) long long limit;
@property (copy, nonatomic) NSString *where;

+ (id)databaseQuery:(id)a0;

- (id)initWithTableName:(id)a0;
- (void)dealloc;
- (id)createQueryString;

@end
