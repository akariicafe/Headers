@class EFSQLSchema, EFSQLPropertyMapper;

@interface EDPersistenceDatabaseSchema : NSObject

@property (class, readonly, nonatomic) EFSQLSchema *schema;
@property (class, readonly, nonatomic) EFSQLSchema *protectedSchema;
@property (class, readonly, nonatomic) EFSQLPropertyMapper *propertyMapper;

+ (id)objectPropertyMapperForSchema:(id)a0 protectedSchema:(id)a1;
+ (id)additionalSchemaProviders;
+ (id)mailboxesTableName;
+ (id)partialMailboxesTableSchema;
+ (id)propertiesTableSchema;
+ (id)_schemaProviders;
+ (void)_initializeSchemas;
+ (id)_protectedSchemaProviders;
+ (id)_schemaWithPopulationBlock:(id /* block */)a0;
+ (id)propertiesTableName;
+ (void)test_resetSchema;

@end
