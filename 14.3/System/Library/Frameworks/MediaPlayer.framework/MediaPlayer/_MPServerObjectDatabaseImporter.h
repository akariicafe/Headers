@class NSString, MSVSQLDatabaseTransaction, MSVSQLStatement;

@interface _MPServerObjectDatabaseImporter : NSObject <MPServerObjectDatabaseOperations> {
    MSVSQLDatabaseTransaction *_transaction;
    MSVSQLStatement *_insertObjectStatement;
    MSVSQLStatement *_insertObjectRelationshipStatement;
    MSVSQLStatement *_insertAssetURLStatement;
    MSVSQLStatement *_removeRelationshipsStatement;
    MSVSQLStatement *_updateMiniSINFStatement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)importObject:(id)a0 type:(id)a1 identifiers:(id)a2 source:(long long)a3 expiration:(id)a4;
- (BOOL)importAssetURL:(id)a0 forIdentifiers:(id)a1 flavor:(long long)a2;
- (BOOL)importAssetMiniSINF:(id)a0 forIdentifier:(id)a1 hashedPersonID:(id)a2 flavor:(long long)a3;
- (BOOL)relateIdentifiers:(id)a0 toParentIdentifiers:(id)a1 childKey:(id)a2 order:(long long)a3;
- (BOOL)removeRelationshipsForParentIdentifiers:(id)a0 childKey:(id)a1;
- (void)dealloc;

@end
