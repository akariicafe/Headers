@class NSString, NSMutableDictionary, NSNumber, NSObject;
@protocol CKVDatabaseReadWriteAccess;

@interface CKVItemRecordUpdater : NSObject {
    NSObject<CKVDatabaseReadWriteAccess> *_database;
    NSString *_requestDescription;
    NSNumber *_startTimeMicros;
    NSNumber *_itemTypeNumber;
    NSString *_originAppId;
    NSString *_deviceId;
    NSString *_userId;
    NSNumber *_versionNumber;
    NSMutableDictionary *_commandCache;
}

@property (readonly, nonatomic) NSNumber *datasetRowId;
@property (readonly, nonatomic) unsigned int datasetItemCount;
@property (readonly, nonatomic) unsigned int modifiedRowCount;
@property (readonly, nonatomic) unsigned long long updateVersion;
@property (readonly, nonatomic) unsigned long long priorVersion;
@property (readonly, nonatomic) NSNumber *updateValidityHash;
@property (readonly, nonatomic) NSNumber *priorValidityHash;
@property (readonly, nonatomic) unsigned long long priorOptions;

- (BOOL)insertItemWithItemIdHash:(id)a0 recordId:(id)a1 itemBuffer:(id)a2 itemBufferHash:(id)a3 isDuplicate:(BOOL *)a4 rank:(unsigned long long)a5;
- (BOOL)deleteItemWithItemIdHash:(id)a0 outRecordId:(id *)a1;
- (BOOL)_updateItemWithItemIdHash:(id)a0 recordId:(id)a1 itemBuffer:(id)a2;
- (id)_datasetRowIdCriterion;
- (id)_itemCriterionWithItemIdHash:(id)a0;
- (BOOL)_selectDatasetItemCount:(id *)a0;
- (BOOL)selectWithItemIdHash:(id)a0 outItemMetaRowId:(id *)a1 outRecordId:(id *)a2 outItemBufferHash:(id *)a3 isDuplicate:(BOOL *)a4;
- (BOOL)_updateDatasetVersionAndValidity;
- (BOOL)deleteItemMetaRowId:(id)a0;
- (BOOL)_selectDatasetRowId:(id *)a0 version:(unsigned long long *)a1 validityHash:(id *)a2 options:(unsigned long long *)a3;
- (BOOL)_updateItemMetaWithRowId:(id)a0 recordId:(id)a1 itemBufferHash:(id)a2 rank:(unsigned long long)a3;
- (BOOL)updateItemRankForItemMetaRowId:(id)a0 rank:(unsigned long long)a1;
- (BOOL)enumerateDatasetRecordIdsUsingBlock:(id /* block */)a0;
- (BOOL)updateItemWithItemMetaRowId:(id)a0 itemIdHash:(id)a1 recordId:(id)a2 itemBuffer:(id)a3 itemBufferHash:(id)a4 rank:(unsigned long long)a5;
- (BOOL)updateDatasetOptions:(unsigned long long)a0;
- (BOOL)_registerDataset;
- (id)description;
- (BOOL)deleteDataset:(BOOL)a0;
- (BOOL)enumerateUnmodifiedRecordsUsingBlock:(id /* block */)a0;
- (BOOL)_insertItemWithItemIdHash:(id)a0 recordId:(id)a1 itemBuffer:(id)a2;
- (BOOL)_insertDatasetReturningRowId:(id *)a0;
- (id)initWithDatabase:(id)a0 request:(id)a1 startTimeMicros:(long long)a2;
- (void).cxx_destruct;
- (BOOL)_insertItemMetaWithItemIdHash:(id)a0 itemBufferHash:(id)a1 recordId:(id)a2 isDuplicate:(BOOL *)a3 rank:(unsigned long long)a4;

@end
