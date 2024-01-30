@class HDProfile, HDDatabaseValueCache;

@interface HDMetadataManager : NSObject {
    HDProfile *_profile;
    HDDatabaseValueCache *_keyEntityCache;
    HDDatabaseValueCache *_keyCache;
}

- (id)initWithProfile:(id)a0;
- (BOOL)insertMetadata:(id)a0 forObjectID:(id)a1 sourceID:(id)a2 externalSyncObjectCode:(long long)a3 objectDeleted:(BOOL)a4 transaction:(id)a5 error:(id *)a6;
- (id)predicateWithMetadataKey:(id)a0 exists:(BOOL)a1;
- (id)unitTest_metadataForObjectID:(long long)a0 keyFilter:(id /* block */)a1 error:(id *)a2;
- (id)metadataForObjectID:(long long)a0 baseMetadata:(id)a1 keyFilter:(id /* block */)a2 statement:(id)a3 error:(id *)a4;
- (id)predicateWithMetadataKey:(id)a0 value:(id)a1 operatorType:(unsigned long long)a2;
- (void).cxx_destruct;
- (BOOL)insertMetadata:(id)a0 forObjectID:(id)a1 sourceID:(id)a2 externalSyncObjectCode:(long long)a3 objectDeleted:(BOOL)a4 error:(id *)a5;
- (id)predicateWithMetadataKey:(id)a0 allowedValues:(id)a1;
- (id)unitTest_rawMetadataForObject:(id)a0 error:(id *)a1;

@end
