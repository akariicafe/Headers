@class NSString, MSVSQLDatabaseTransaction, MSVSQLStatement;

@interface _MPServerObjectDatabaseImporter : NSObject <MPServerObjectDatabaseOperations> {
    MSVSQLDatabaseTransaction *_transaction;
    MSVSQLStatement *_selectExistingObjectStatement;
    MSVSQLStatement *_insertObjectStatement;
    MSVSQLStatement *_insertObjectRelationshipStatement;
    MSVSQLStatement *_insertAssetURLStatement;
    MSVSQLStatement *_insertHLSAssetURLStatement;
    MSVSQLStatement *_removeRelationshipsStatement;
    MSVSQLStatement *_updateMiniSINFStatement;
    MSVSQLStatement *_updateSINFStatement;
    MSVSQLStatement *_insertPlaybackAuthorizationTokenStatement;
    MSVSQLStatement *_updateAssetURLStatement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)importPlaybackAuthorizationToken:(id)a0 identifiers:(id)a1 source:(long long)a2 type:(id)a3 expirationDate:(id)a4 trustID:(id)a5;
- (BOOL)importAssetURL:(id)a0 forIdentifiers:(id)a1 flavor:(long long)a2 expirationDate:(id)a3;
- (id)_existingAssetMatchingIdentifier:(id)a0 hashedPersonID:(id)a1 flavor:(long long)a2;
- (BOOL)_importAssetMiniSINF:(id)a0 forIdentifier:(id)a1 hashedPersonID:(id)a2 flavor:(long long)a3;
- (BOOL)importAssetSinf:(id)a0 type:(long long)a1 forIdentifier:(id)a2 hashedPersonID:(id)a3 flavor:(long long)a4 sinfPayload:(id)a5;
- (BOOL)relateIdentifiers:(id)a0 toParentIdentifiers:(id)a1 parentVersionHash:(id)a2 childKey:(id)a3 order:(long long)a4;
- (BOOL)importHLSAssetURL:(id)a0 keyCertificateURL:(id)a1 keyServerURL:(id)a2 redeliveryId:(long long)a3 protocolType:(id)a4 isiTunesStoreStream:(BOOL)a5 forIdentifiers:(id)a6 expirationDate:(id)a7;
- (BOOL)removeRelationshipsForParentIdentifiers:(id)a0 childKey:(id)a1;
- (void)dealloc;
- (BOOL)importObject:(id)a0 type:(id)a1 identifiers:(id)a2 source:(long long)a3 expiration:(id)a4;
- (BOOL)_importAssetFullSINF:(id)a0 forIdentifier:(id)a1 hashedPersonID:(id)a2 flavor:(long long)a3;
- (id)_existingHLSAssetMatchingIdentifier:(id)a0 hashedPersonID:(id)a1;
- (void).cxx_destruct;

@end
