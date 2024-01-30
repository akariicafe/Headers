@class NSString, NSMutableDictionary, NSNumber, NSObject;
@protocol CKVDatabaseReadWriteAccess;

@interface CKVItemRecordUpdater : NSObject {
    NSObject<CKVDatabaseReadWriteAccess> *_database;
    NSNumber *_itemTypeNumber;
    NSNumber *_startTimeMicros;
    NSMutableDictionary *_commandCache;
}

@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) NSNumber *datasetRowId;
@property (readonly, nonatomic) unsigned long long datasetItemCount;
@property (readonly, nonatomic) unsigned long long modifiedRowCount;

- (id)description;
- (void).cxx_destruct;
- (BOOL)insertItemWithItemIdHash:(id)a0 recordId:(id)a1 itemBuffer:(id)a2 itemBufferHash:(id)a3 isDuplicate:(BOOL *)a4;
- (BOOL)deleteDataset:(BOOL)a0;
- (BOOL)enumerateDatasetRecordIdsUsingBlock:(id /* block */)a0;
- (BOOL)enumerateInvalidRecordsUsingBlock:(id /* block */)a0;
- (BOOL)deleteItemMetaRowId:(id)a0;
- (BOOL)updateItemWithItemMetaRowId:(id)a0 itemIdHash:(id)a1 recordId:(id)a2 itemBuffer:(id)a3 itemBufferHash:(id)a4;
- (BOOL)updateValidityForItemMetaRowId:(id)a0;
- (BOOL)selectWithItemIdHash:(id)a0 outItemMetaRowId:(id *)a1 outRecordId:(id *)a2 outItemBufferHash:(id *)a3 isDuplicate:(BOOL *)a4;
- (id)initWithDatabase:(id)a0 originApp:(id)a1 itemType:(long long)a2 startTimeMicros:(long long)a3;
- (id)_datasetRowIdCriterion;
- (id)_itemCriterionWithItemIdHash:(id)a0;
- (BOOL)_registerDataset;
- (BOOL)_insertDatasetReturningRowId:(id *)a0;
- (BOOL)_insertItemMetaWithItemIdHash:(id)a0 itemBufferHash:(id)a1 recordId:(id)a2 isDuplicate:(BOOL *)a3;
- (BOOL)_insertItemWithItemIdHash:(id)a0 recordId:(id)a1 itemBuffer:(id)a2;
- (BOOL)_selectDatasetRowId:(id *)a0;
- (BOOL)_selectDatasetItemCount:(id *)a0;
- (BOOL)_updateDatasetValidity;
- (BOOL)_updateItemMetaWithRowId:(id)a0 recordId:(id)a1 itemBufferHash:(id)a2;
- (BOOL)_updateItemWithItemIdHash:(id)a0 recordId:(id)a1 itemBuffer:(id)a2;

@end
