@class CKVIndexManager;

@interface CKVDatabaseSearcher : NSObject {
    CKVIndexManager *_idxMgr;
}

+ (BOOL)enumerateAllItemsOfDataset:(id)a0 database:(id)a1 batchSize:(unsigned long long)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
+ (id)_datasetRowIdToRecordMap:(id)a0 error:(id *)a1;
+ (id)_datasetRecordForOriginApp:(id)a0 itemType:(long long)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)_enumerateItemsWithBatchSize:(unsigned long long)a0 offset:(unsigned long long)a1 enumerateAll:(BOOL)a2 database:(id)a3 error:(id *)a4 usingBlock:(id /* block */)a5;
+ (id)countDatasetItems:(id)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)enumerateAllItemsWithBatchSize:(unsigned long long)a0 database:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
+ (BOOL)enumerateItemsOfDataset:(id)a0 database:(id)a1 batchSize:(unsigned long long)a2 uptoRank:(id)a3 error:(id *)a4 usingBlock:(id /* block */)a5;
+ (id)selectAllDatasets:(id)a0 error:(id *)a1;
+ (id)selectAllDatasetsFromDatabases:(id)a0 outDatasetCount:(unsigned int *)a1 error:(id *)a2;
+ (id)selectDatasetsWithItemTypes:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)selectItemByDatasetRowId:(id)a0 itemIdHash:(id)a1 database:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (BOOL)_enumerateResultsOfFTSSearch:(id)a0 searchCriteria:(id)a1 sortByRelevance:(BOOL)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
- (id)_selectItemRecordsWithRecordIds:(id)a0 databaseConnection:(id)a1 error:(id *)a2;
- (id)computeAllDatasetStatistics;
- (BOOL)enumerateLocalItemsLastModifiedForOriginAppId:(id)a0 itemType:(long long)a1 batchSize:(unsigned long long)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
- (BOOL)enumerateLocalItemsWithBatchSize:(unsigned long long)a0 offset:(unsigned long long)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (id)initWithIndexManager:(id)a0;
- (id)searchLocalFTSWithCriteria:(id)a0 sortByRelevance:(BOOL)a1 error:(id *)a2;
- (id)selectLocalDeletedAppSpecificDatasetOriginAppIdsWithItemType:(long long)a0 batchSize:(unsigned long long)a1 error:(id *)a2;

@end
