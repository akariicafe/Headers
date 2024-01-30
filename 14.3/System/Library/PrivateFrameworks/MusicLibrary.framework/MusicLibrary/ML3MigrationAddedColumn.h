@class NSString;

@interface ML3MigrationAddedColumn : NSObject

@property (readonly, nonatomic) NSString *columnName;
@property (readonly, nonatomic) NSString *foreignTableName;
@property (readonly, nonatomic) NSString *foreignColumnName;
@property (readonly, nonatomic) NSString *joinColumnName;
@property (readonly, nonatomic) BOOL shouldImportFromForeignTable;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 foreignTable:(id)a1 foreignColumn:(id)a2 joinColumn:(id)a3;

@end
