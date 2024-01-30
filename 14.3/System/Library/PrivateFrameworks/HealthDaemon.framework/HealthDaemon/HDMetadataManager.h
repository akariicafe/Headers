@class HDProfile, HDDatabaseValueCache;

@interface HDMetadataManager : NSObject {
    HDProfile *_profile;
    HDDatabaseValueCache *_keyEntityCache;
    HDDatabaseValueCache *_keyCache;
}

+ (Class)_metadataPredicateClassForKey:(id)a0;

- (id)initWithProfile:(id)a0;
- (id)_metadataForObjectID:(long long)a0 baseMetadata:(id)a1 keyFilter:(id /* block */)a2 statement:(id)a3 error:(id *)a4;
- (id)unitTest_rawMetadataForObject:(id)a0 error:(id *)a1;
- (BOOL)_skipInsertOfKey:(id)a0 metadata:(id)a1;
- (id)predicateWithMetadataKey:(id)a0 value:(id)a1 operatorType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)metadataForObjectID:(long long)a0 baseMetadata:(id)a1 keyFilter:(id /* block */)a2 statement:(id)a3 error:(id *)a4;
- (id)predicateWithMetadataKey:(id)a0 exists:(BOOL)a1;
- (BOOL)_insertMetadata:(id)a0 forObjectID:(id)a1 transaction:(id)a2 error:(id *)a3;
- (id)_keyEntityForKey:(id)a0 createIfNecessary:(BOOL)a1 transaction:(id)a2 error:(id *)a3;
- (BOOL)_insertExternalSyncMetadata:(id)a0 forObjectID:(id)a1 sourceID:(id)a2 externalSyncObjectCode:(long long)a3 objectDeleted:(BOOL)a4 transaction:(id)a5 error:(id *)a6;
- (id)_keyForKeyID:(id)a0 transaction:(id)a1 error:(id *)a2;
- (BOOL)insertMetadata:(id)a0 forObjectID:(id)a1 sourceID:(id)a2 externalSyncObjectCode:(long long)a3 objectDeleted:(BOOL)a4 transaction:(id)a5 error:(id *)a6;
- (id)unitTest_metadataForObjectID:(long long)a0 keyFilter:(id /* block */)a1 error:(id *)a2;
- (id)_externalSyncMetadataForObjectID:(long long)a0 baseMetadata:(id)a1 keyFilter:(id /* block */)a2 database:(id)a3 error:(id *)a4;
- (id)predicateWithMetadataKey:(id)a0 allowedValues:(id)a1;
- (BOOL)insertMetadata:(id)a0 forObjectID:(id)a1 sourceID:(id)a2 externalSyncObjectCode:(long long)a3 objectDeleted:(BOOL)a4 error:(id *)a5;
- (void)_insertDerivedMetadataforKey:(id)a0 value:(id)a1 filteredAddBlock:(id /* block */)a2;
- (id)_ignoredInsertedMetadataKeys;

@end
