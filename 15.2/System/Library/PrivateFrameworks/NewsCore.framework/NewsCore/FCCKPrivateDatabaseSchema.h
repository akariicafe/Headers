@class NSDictionary, NSArray;

@interface FCCKPrivateDatabaseSchema : NSObject {
    NSDictionary *_zoneSchemasByClientName;
    NSDictionary *_zoneSchemasByServerName;
    NSArray *_defaultZoneSchemas;
}

- (void).cxx_destruct;
- (id)init;

@end
