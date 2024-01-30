@class EFSQLTableSchema, EFSQLColumnSchema;

@interface EFSQLGeneratorTableRelationship : NSObject <NSCopying>

@property (readonly, nonatomic) EFSQLTableSchema *table;
@property (readonly, nonatomic) EFSQLColumnSchema *sourceColumn;
@property (readonly, nonatomic) EFSQLTableSchema *targetTable;
@property (readonly, nonatomic) unsigned long long relationship;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithPropertyMapper:(id)a0 previousTable:(id)a1;
- (BOOL)isEqualToTableRelationship:(id)a0;

@end
