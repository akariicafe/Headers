@class NSString, NSArray, NSDictionary, CKRecordZoneID;

@interface FCCKZoneSchema : NSObject {
    NSDictionary *_recordSchemasByClientType;
    NSDictionary *_recordSchemasByServerType;
    NSDictionary *_staticServerRecordNamesByClientName;
    NSDictionary *_staticClientRecordNamesByServerName;
}

@property (readonly, copy, nonatomic) NSString *clientZoneName;
@property (readonly, copy, nonatomic) NSString *serverZoneName;
@property (readonly, copy, nonatomic) CKRecordZoneID *clientZoneID;
@property (readonly, copy, nonatomic) CKRecordZoneID *serverZoneID;
@property (readonly, copy, nonatomic) NSArray *allClientRecordTypes;
@property (readonly, copy, nonatomic) NSString *onlyClientRecordType;
@property (readonly, copy, nonatomic) NSString *onlyServerRecordType;
@property (readonly, nonatomic) BOOL isDefaultZone;
@property (readonly, copy, nonatomic) NSArray *staticRecordNamesEligibleForMigration;
@property (readonly, nonatomic) BOOL supportsRecordNameEncryption;
@property (readonly, nonatomic) BOOL supportsRecordFieldEncryption;
@property (readonly, nonatomic) BOOL shouldUseZoneWidePCS;
@property (readonly, nonatomic) BOOL shouldUseSecureContainer;

+ (id)defaultZoneWithRecords:(id)a0 staticRecordNames:(id)a1 staticRecordNameMigrationBlacklist:(id)a2 shouldUseSecureContainer:(BOOL)a3;
+ (id)zoneWithClientName:(id)a0 serverName:(id)a1 records:(id)a2 staticRecordNames:(id)a3 shouldEncryptRecordNames:(BOOL)a4 shouldUseZoneWidePCS:(BOOL)a5 shouldUseSecureContainer:(BOOL)a6;
+ (id)zoneWithClientName:(id)a0 serverName:(id)a1 records:(id)a2;

- (BOOL)isKnownServerRecordName:(id)a0;
- (id)schemaForRecordWithServerType:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)clientRecordNameForServerRecordName:(id)a0;
- (id)initWithClientZoneName:(id)a0 serverZoneName:(id)a1 recordSchemas:(id)a2 staticRecordNames:(id)a3 staticRecordNameMigrationBlacklist:(id)a4 shouldEncryptRecordNames:(BOOL)a5 shouldUseZoneWidePCS:(BOOL)a6 shouldUseSecureContainer:(BOOL)a7;
- (id)serverRecordNameForClientRecordName:(id)a0;
- (id)schemaForRecordWithClientType:(id)a0;
- (BOOL)isKnownClientRecordName:(id)a0;
- (BOOL)shouldEncryptClientRecordName:(id)a0;
- (void)enumerateRecordSchemasWithBlock:(id /* block */)a0;
- (BOOL)shouldDecryptServerRecordName:(id)a0;

@end
