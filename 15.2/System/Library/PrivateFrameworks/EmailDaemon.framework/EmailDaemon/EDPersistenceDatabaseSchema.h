@class EFSQLSchema, EFSQLPropertyMapper;

@interface EDPersistenceDatabaseSchema : NSObject

@property (class, readonly, nonatomic) EFSQLSchema *schema;
@property (class, readonly, nonatomic) EFSQLSchema *protectedSchema;
@property (class, readonly, nonatomic) EFSQLPropertyMapper *propertyMapper;

+ (void)_initializeSchemas;
+ (void)test_resetSchema;
+ (id)additionalSchemaProviders;
+ (id)objectPropertyMapperForSchema:(id)a0 protectedSchema:(id)a1;
+ (id)_schemaWithPopulationBlock:(id /* block */)a0;
+ (id)partialMailboxesTableSchema;
+ (id)propertiesTableSchema;
+ (id)_protectedSchemaProviders;
+ (id)propertiesTableName;
+ (id)mailboxesTableName;
+ (id)_schemaProviders;

@end
