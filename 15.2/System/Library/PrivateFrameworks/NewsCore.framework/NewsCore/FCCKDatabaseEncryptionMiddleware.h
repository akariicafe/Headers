@class NSString, FCCKPrivateDatabaseSchema;
@protocol FCCKRecordNameCipher;

@interface FCCKDatabaseEncryptionMiddleware : NSObject <FCCKDatabaseRecordMiddleware, FCCKDatabaseOperationMiddleware> {
    FCCKPrivateDatabaseSchema *_encryptionSchema;
    id<FCCKRecordNameCipher> _recordNameCipher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serverToClientRecordType:(id)a0 withRecordID:(id)a1 inDatabase:(id)a2 error:(id *)a3;
- (id)clientToServerRecordZone:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)serverToClientRecordID:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)clientToServerRecordID:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)clientToServerRecord:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)clientToServerRecordType:(id)a0 withRecordID:(id)a1 inDatabase:(id)a2 error:(id *)a3;
- (id)serverToClientRecord:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (id)clientToServerRecordZoneID:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)serverToClientRecordZone:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (long long)database:(id)a0 willEnqueueOperation:(id)a1 error:(id *)a2;
- (id)serverToClientRecordZoneID:(id)a0 inDatabase:(id)a1 error:(id *)a2;

@end
