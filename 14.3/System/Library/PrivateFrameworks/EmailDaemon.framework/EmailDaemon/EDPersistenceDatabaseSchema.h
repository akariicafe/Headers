@class EFSQLSchema, EFSQLPropertyMapper;

@interface EDPersistenceDatabaseSchema : NSObject

@property (class, readonly, nonatomic) EFSQLSchema *schema;
@property (class, readonly, nonatomic) EFSQLSchema *protectedSchema;
@property (class, readonly, nonatomic) EFSQLPropertyMapper *propertyMapper;

+ (void)ef_resetOnceTokens;
+ (id)additionalSchemaProviders;
+ (id)propertiesTableName;
+ (id)mailboxesTableName;
+ (void)_initializeSchemas;
+ (id)_schemaProviders;
+ (id)_protectedSchemaProviders;
+ (id)partialMailboxesTableSchema;
+ (id)propertiesTableSchema;
+ (id)_schemaWithPopulationBlock:(id /* block */)a0;
+ (id)objectPropertyMapperForSchema:(id)a0 protectedSchema:(id)a1;

@end
