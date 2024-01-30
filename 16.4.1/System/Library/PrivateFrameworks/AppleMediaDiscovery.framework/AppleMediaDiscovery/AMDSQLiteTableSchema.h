@class NSString, NSDictionary, NSSet;

@interface AMDSQLiteTableSchema : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *columns;
@property (retain, nonatomic) NSSet *requiredColumns;

- (id)getColumns;
- (id)getCreateTableStatement;
- (id)getRequiredColumns;
- (id)initWithDict:(id)a0 withName:(id)a1 error:(id *)a2;
- (id)getInsertStatement:(id)a0;
- (id)getSpecForColumn:(id)a0;
- (void).cxx_destruct;

@end
