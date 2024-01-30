@class NSDictionary, NSArray;

@interface FCCKPrivateDatabaseSchema : NSObject {
    NSDictionary *_zoneSchemasByClientName;
    NSDictionary *_zoneSchemasByServerName;
    NSArray *_defaultZoneSchemas;
}

+ (id)databaseSchemaWithZones:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)schemaForZoneWithClientName:(id)a0;
- (id)initWithSchemaDictionary:(id)a0;
- (void)enumerateZoneSchemasWithBlock:(id /* block */)a0;
- (id)schemaForZoneContainingServerRecordID:(id)a0;
- (void)enumerateDefaultZoneSchemasWithBlock:(id /* block */)a0;
- (id)schemaForZoneWithServerName:(id)a0;
- (id)schemaForZoneContainingClientRecordID:(id)a0;
- (id)initWithZoneSchemas:(id)a0;

@end
