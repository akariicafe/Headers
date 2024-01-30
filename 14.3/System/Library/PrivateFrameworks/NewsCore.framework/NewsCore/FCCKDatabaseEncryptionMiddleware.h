@class NSString, FCCKPrivateDatabaseSchema;
@protocol FCCKRecordNameCipher;

@interface FCCKDatabaseEncryptionMiddleware : NSObject <FCCKDatabaseRecordMiddleware, FCCKDatabaseOperationMiddleware>

@property (retain, nonatomic) FCCKPrivateDatabaseSchema *encryptionSchema;
@property (retain, nonatomic) id<FCCKRecordNameCipher> recordNameCipher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clientToServerRecord:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (BOOL)_decryptRecord:(id)a0 withEncryptionKey:(id)a1 schema:(id)a2 error:(id *)a3;
- (BOOL)_encryptField:(id)a0 inRecord:(id)a1 error:(id *)a2;
- (long long)database:(id)a0 willEnqueueOperation:(id)a1 error:(id *)a2;
- (id)clientToServerRecordID:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithEncryptionSchema:(id)a0;
- (id)clientToServerRecordType:(id)a0 withRecordID:(id)a1 inDatabase:(id)a2 error:(id *)a3;
- (BOOL)_encryptRecord:(id)a0 withEncryptionKey:(id)a1 schema:(id)a2 error:(id *)a3;
- (id)serverToClientRecordZone:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)serverToClientRecordID:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (BOOL)_decryptRecordID:(id)a0 withEncryptionKey:(id)a1 error:(id *)a2;
- (id)clientToServerRecordZoneID:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)initWithEncryptionSchema:(id)a0 recordNameCipher:(id)a1;
- (id)serverToClientRecord:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (BOOL)_decryptField:(id)a0 inRecord:(id)a1 error:(id *)a2;
- (id)_serverZoneIDFromClientZoneID:(id)a0 error:(id *)a1;
- (id)_encryptionKeyForServerRecordID:(id)a0 inDatabase:(id)a1;
- (BOOL)_encryptRecordID:(id)a0 withEncryptionKey:(id)a1 error:(id *)a2;
- (id)serverToClientRecordType:(id)a0 withRecordID:(id)a1 inDatabase:(id)a2 error:(id *)a3;
- (id)_encryptionKeyForClientRecordID:(id)a0 inDatabase:(id)a1;
- (BOOL)_isEnabledForDatabase:(id)a0;
- (id)serverToClientRecordZoneID:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)_clientZoneIDFromServerZoneID:(id)a0 error:(id *)a1;
- (id)clientToServerRecordZone:(id)a0 inDatabase:(id)a1 error:(id *)a2;

@end
