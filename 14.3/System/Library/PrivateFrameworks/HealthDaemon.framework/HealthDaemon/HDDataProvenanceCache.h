@class HDDatabaseTransaction, HDProfile, HDEntityEncoder, NSMutableDictionary, HDDataProvenanceManager;

@interface HDDataProvenanceCache : NSObject

@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDDataProvenanceManager *provenanceManager;
@property (retain, nonatomic) HDDatabaseTransaction *transaction;
@property (retain, nonatomic) HDEntityEncoder *sourceEncoder;
@property (retain, nonatomic) NSMutableDictionary *provenanceByID;
@property (retain, nonatomic) NSMutableDictionary *codableSourcesByID;
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDBytesByID;
@property (retain, nonatomic) NSMutableDictionary *sourceByPersistentIDCache;
@property (retain, nonatomic) NSMutableDictionary *sourceRevisionByDataProvenanceIDCache;
@property (retain, nonatomic) NSMutableDictionary *sourceRevisionsDictionaryBySourceCache;
@property (retain, nonatomic) NSMutableDictionary *deviceByPersistentIDCache;
@property (retain, nonatomic) NSMutableDictionary *contributorByReferenceCache;
@property (retain, nonatomic) NSMutableDictionary *codableObjectCollectionsByProvenance;

- (id)provenanceWithID:(id)a0;
- (id)_sourceForPersistentID:(id)a0 profile:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)contributorForReference:(id)a0 profile:(id)a1 error:(id *)a2;
- (id)sourceRevisionForProvenanceID:(id)a0 dataProvenance:(id)a1 profile:(id)a2 error:(id *)a3;
- (id)allCodableObjectCollections;
- (id)codableObjectCollectionForProvenance:(id)a0;
- (void)clearCodableObjectCollections;
- (id)deviceUUIDBytesWithProvenance:(id)a0;
- (id)codableSourceWithProvenance:(id)a0;
- (id)codableProvenanceWithProvenance:(id)a0;
- (id)deviceForPersistentID:(id)a0 profile:(id)a1 error:(id *)a2;
- (id)_provenanceWithSyncableContributor:(id)a0 error:(id *)a1;
- (id)initWithProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2;

@end
