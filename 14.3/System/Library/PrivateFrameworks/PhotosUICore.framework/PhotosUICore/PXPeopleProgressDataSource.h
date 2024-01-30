@class NSString, PHFetchResult, NSObject;
@protocol OS_dispatch_queue;

@interface PXPeopleProgressDataSource : NSObject <PXPhotoLibraryUIChangeObserver>

@property (nonatomic) unsigned long long pendingCount;
@property (nonatomic) unsigned long long processedCount;
@property (nonatomic) unsigned long long totalCount;
@property (retain, nonatomic) PHFetchResult *homeResult;
@property (retain, nonatomic) PHFetchResult *verifyResult;
@property (readonly) NSObject<OS_dispatch_queue> *scanningProgressQueue;
@property (readonly) NSObject<OS_dispatch_queue> *userInteractiveQueue;
@property (getter=isCountCacheValid) BOOL countCacheValid;
@property (nonatomic, getter=isFaceProcessingComplete) BOOL faceProcessingComplete;
@property (nonatomic) unsigned long long cachedUnlockValue;
@property (readonly, nonatomic) unsigned long long totalAssetCount;
@property (readonly, nonatomic) unsigned long long pendingAssetCount;
@property (readonly, nonatomic) unsigned long long processedAssetCount;
@property (readonly, nonatomic) unsigned long long homeMembersCount;
@property (readonly, nonatomic) BOOL isFaceProcessingComplete;
@property (readonly, nonatomic) BOOL isPersonPromoterDone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)asyncUpdatePeopleProgressWithReportBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)_appWillEnterForeground;
- (void)loadQueryData;
- (double)_updateProgressFromFaceAnalysisProgressDictionary:(id)a0;
- (void)syncUpdatePeopleProgressWithReportBlock:(id /* block */)a0;
- (void)updateProgressIfNeededWithReportBlock:(id /* block */)a0;

@end
