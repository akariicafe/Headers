@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCPDatabaseReader : NSObject {
    NSObject<OS_dispatch_queue> *_sqlSerialQueue;
    NSString *_filepath;
    struct sqlite3 { } *_database;
}

+ (BOOL)shouldQueryInternalFields;
+ (id)databaseForPhotoLibrary:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)queryAnalysesForAssets:(id)a0 withTypes:(id)a1;
- (int)parseHeader:(struct sqlite3_stmt { } *)a0 startColumn:(int)a1 analysis:(id)a2;
- (int)parseResults:(struct sqlite3_stmt { } *)a0 typeColumn:(int)a1 dataColumn:(int)a2 results:(id)a3;
- (int)executeDatabaseBlock:(id /* block */)a0;
- (int)queryHeaderForAsset:(id)a0 analysis:(id *)a1 assetId:(long long *)a2;
- (void)dealloc;
- (int)queryResultsForAssetId:(long long)a0 analysis:(id)a1;
- (int)queryResultsForAssetId:(long long)a0 withTypes:(id)a1 analysis:(id)a2;
- (int)queryHeadersForAssets:(id)a0 analyses:(id)a1 idMap:(id)a2;
- (int)queryResultsForAssets:(id)a0 withTypes:(id)a1 batchResults:(id)a2;
- (id)queryBlacklistedLocalIdentifiers;
- (id)queryAnalysisPropertiesForAsset:(id)a0;
- (id)queryLocalIdentifiersForTaskID:(unsigned long long)a0 withStatus:(unsigned long long)a1;
- (id)queryAnalysisPropertiesForAssets:(id)a0;
- (void)closeDatabase;
- (id)blacklistedLocalIdentifiersFromAssets:(id)a0;
- (id)queryFailedProcessingStatusFromAssets:(id)a0 forTaskID:(unsigned long long)a1;
- (unsigned long long)countForTaskID:(unsigned long long)a0 withProcessingStatus:(unsigned long long)a1;
- (id)queryAnalysisForAsset:(id)a0;
- (BOOL)isAssetBlacklisted:(id)a0 blacklistDate:(id *)a1;
- (int)openDatabase;
- (id)queryAssetsAnalyzedSince:(id)a0;
- (id)queryAnalysisForAsset:(id)a0 withTypes:(id)a1;

@end
