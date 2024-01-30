@class NSString, EFSQLColumnSchema;

@interface EDPersistenceAssociationPlaceholder : NSObject

@property (readonly, nonatomic) EFSQLColumnSchema *column;
@property (readonly, copy, nonatomic) NSString *tableName;

- (id)initWithColumn:(id)a0 tableName:(id)a1;
- (id)description;
- (BOOL)resolveWithSchema:(id)a0;
- (void).cxx_destruct;

@end
