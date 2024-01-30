@class NSString, PHFetchResult, NSObject;
@protocol OS_dispatch_queue;

@interface PXPeopleProgressDataSource : NSObject <PXPhotoLibraryUIChangeObserver>

@property (nonatomic) unsigned long long pendingCount;
@property (nonatomic) unsigned long long processedCount;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) unsigned long long prioritizedProcessedCount;
@property (nonatomic) unsigned long long prioritizedTotalAllowedCount;
@property (retain, nonatomic) PHFetchResult *homeResult;
@property (retain, nonatomic) PHFetchResult *verifyResult;
@property (readonly) NSObject<OS_dispatch_queue> *scanningProgressQueue;
@property (getter=isCountCacheValid) BOOL countCacheValid;
@property (nonatomic, getter=isFaceProcessingComplete) BOOL faceProcessingComplete;
@property (nonatomic) unsigned long long cachedUnlockValue;
@property (readonly, nonatomic) unsigned long long totalAssetCount;
@property (readonly, nonatomic) unsigned long long pendingAssetCount;
@property (readonly, nonatomic) unsigned long long processedAssetCount;
@property (readonly, nonatomic) unsigned long long prioritizedProcessedAssetCount;
@property (readonly, nonatomic) unsigned long long prioritizedTotalAllowedAssetCount;
@property (readonly, nonatomic) unsigned long long homeMembersCount;
@property (readonly, nonatomic) BOOL isFaceProcessingComplete;
@property (readonly, nonatomic) BOOL isPersonPromoterDone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_faceAnalysisCounts;
- (void)_appWillEnterForeground;
- (void)updateProgressIfNeededWithReportBlock:(id /* block */)a0;
- (double)_updateProgressFromFaceAnalysisProgressDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)asyncUpdatePeopleProgressWithReportBlock:(id /* block */)a0;
- (id)_cachedAnalysisCounts;
- (void)loadQueryData;
- (void)dealloc;
- (void)syncUpdatePeopleProgressWithReportBlock:(id /* block */)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;

@end
