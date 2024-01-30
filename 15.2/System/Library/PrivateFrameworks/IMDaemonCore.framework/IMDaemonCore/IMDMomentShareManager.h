@class NSString, NSMutableDictionary;

@interface IMDMomentShareManager : NSObject <PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) NSMutableDictionary *outstandingFetchResults;
@property (retain, nonatomic) NSMutableDictionary *messageGUIDtoTransferMap;
@property (retain, nonatomic) NSMutableDictionary *messageGUIDtoMessage;
@property (retain, nonatomic) NSMutableDictionary *assetUUIDToTransfersPendingAssetResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_generateTransfersForAssetUUIDs:(id)a0 forMessage:(id)a1 inChat:(id)a2 momentShare:(id)a3;
+ (id)_loadCMMTransfersForMessage:(id)a0;
+ (void)_clearCMMTransfersForCMMMessage:(id)a0;
+ (void)fetchMomentShareFromShareURL:(id)a0 forMessage:(id)a1 completionHandler:(id /* block */)a2;
+ (id)_fetchResultForCuratedOrFirstForMomentShare:(id)a0;
+ (void)_requestResourceFileURLsForAsset:(id)a0 fileTransfer:(id)a1 completionHandler:(id /* block */)a2;
+ (id)_copyItemAtURL:(id)a0 toTemporaryDirectoryWithName:(id)a1 isDirectory:(BOOL)a2 error:(id *)a3;
+ (id)_copiedFileURLFromAssetExportFileURLs:(id)a0 transferGUID:(id)a1 error:(id *)a2;
+ (id)_fileTransferForAssetUUID:(id)a0 forMessage:(id)a1 momentShare:(id)a2 atIndex:(unsigned long long)a3;

- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)generateTransfersFromFetchResult:(id)a0 withContect:(id)a1;
- (id)_assetUUIDToUnfinishedTransferMapFromTransfers:(id)a0;
- (void)_processAssetsFromFetchResult:(id)a0 message:(id)a1;
- (void)_processRegisteredCMMMessage:(id)a0 inChat:(id)a1 momentShare:(id)a2 isRetry:(BOOL)a3;
- (void)_processAcceptedCMMMessage:(id)a0 inChat:(id)a1 momentShare:(id)a2;
- (void)_processGeneratedCMMMessage:(id)a0 inChat:(id)a1 momentShare:(id)a2;
- (void)startMonitoringFetchResult:(id)a0 withContext:(id)a1;
- (void)_requestAssetsForFileTransfers:(id)a0 withAssetFetch:(id)a1 forMessage:(id)a2 momentShare:(id)a3;
- (BOOL)messageHasUnfinishedTransfers:(id)a0;
- (void)_persistAttachmentAtfileURL:(id)a0 forFileTransfer:(id)a1;
- (void)registerAndAcceptMomentShareForMessage:(id)a0 inChat:(id)a1 resetAssetTransfers:(BOOL)a2;
- (void)regenerateTransfersForMessage:(id)a0 inChat:(id)a1 addingAssetWithUUID:(id)a2;

@end
