@interface VCPAnalysisProgressQuery : NSObject

+ (int)queryProgress:(float *)a0 forPhotoLibrary:(id)a1 andTaskID:(unsigned long long)a2;
+ (int)queryCachedFaceAnalysisProgress:(id *)a0 forPhotoLibrary:(id)a1;
+ (int)queryProgressDetail:(id *)a0 forPhotoLibrary:(id)a1 andTaskID:(unsigned long long)a2;
+ (unsigned long long)_countMediaAnalysisWithAssetBatch:(id)a0 andDatabase:(id)a1;
+ (unsigned long long)_countFaceAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countSceneAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countOCRAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countVisualSearchAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countEmbeddingAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countAnalysisWithAssetBatch:(id)a0 andDatabase:(id)a1 andTaskID:(unsigned long long)a2;
+ (unsigned long long)_countFailuresWithAssetBatch:(id)a0 andDatabase:(id)a1 andTaskID:(unsigned long long)a2;
+ (unsigned long long)_vipStatusForPhotoLibrary:(id)a0 andType:(unsigned long long)a1;
+ (int)_queryProgressDetailExpressEmbeddingAnalysis:(id *)a0 forPhotoLibrary:(id)a1;
+ (id)_processedPredicateForTaskID:(unsigned long long)a0;
+ (BOOL)_screenProgress;
+ (int)_queryProgressDetailExpress:(id *)a0 forPhotoLibrary:(id)a1 andTaskID:(unsigned long long)a2;
+ (int)_scanPhotoLibrary:(id)a0 withTaskID:(unsigned long long)a1 andStatistics:(id *)a2;
+ (id)reportProgressForPhotoLibrary:(id)a0 andTaskID:(unsigned long long)a1;

@end
