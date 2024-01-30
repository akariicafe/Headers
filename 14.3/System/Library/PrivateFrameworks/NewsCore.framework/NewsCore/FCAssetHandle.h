@class NSHashTable, NSDate, NSURL, FCInterestToken, NFUnfairLock, NSString, NTPBAsset, FCOperation, NSObject, NSError, FCContentArchive;
@protocol OS_dispatch_group, FCAssetDataProvider, FCAssetHandleDelegate;

@interface FCAssetHandle : NSObject <FCContentArchivable>

@property (retain) id<FCAssetDataProvider> dataProvider;
@property (retain, nonatomic) FCOperation *fetchOperation;
@property (retain, nonatomic) NSHashTable *downloadRequests;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;
@property unsigned long long countOfPenalizedDownloadAttempts;
@property (retain) NSDate *dateOfLastDownloadAttempt;
@property (retain, nonatomic) NFUnfairLock *stateLock;
@property (retain, nonatomic) NSURL *remoteURL;
@property (weak, nonatomic) id<FCAssetHandleDelegate> delegate;
@property (retain, nonatomic) FCInterestToken *holdToken;
@property (copy, nonatomic) NSString *assetKey;
@property (nonatomic) long long lifetimeHint;
@property (copy) NSString *rawFilePath;
@property (retain) NTPBAsset *assetMetadata;
@property (retain) NSError *downloadError;
@property (readonly, copy) NSString *filePath;
@property (readonly, copy, nonatomic) NSString *uniqueKey;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

- (id)_downloadIfNeededWithPriority:(long long)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (BOOL)_canRetryDownload;
- (void)_completeFetchWithDataProvider:(id)a0 error:(id)a1;
- (void)_removeDownloadRequest:(id)a0;
- (void)_revisitDownloadRequestPriorities;
- (id)downloadIfNeededWithCompletion:(id /* block */)a0;
- (id)downloadIfNeededWithPriority:(long long)a0 completion:(id /* block */)a1;
- (id)downloadIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (id)downloadIfNeededWithGroup:(id)a0;
- (id)fetchDataProviderWithCompletion:(id /* block */)a0;
- (id)fetchDataProviderWithPriority:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDataProvider:(id)a0;

@end
