@class EFSQLTableSchema, EFSQLColumnSchema;

@interface EFSQLGeneratorTableRelationship : NSObject <NSCopying>

@property (readonly, nonatomic) EFSQLTableSchema *table;
@property (readonly, nonatomic) EFSQLColumnSchema *sourceColumn;
@property (readonly, nonatomic) EFSQLTableSchema *targetTable;
@property (readonly, nonatomic) unsigned long long relationship;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToTableRelationship:(id)a0;
- (id)initWithPropertyMapper:(id)a0 previousTable:(id)a1;

@end
