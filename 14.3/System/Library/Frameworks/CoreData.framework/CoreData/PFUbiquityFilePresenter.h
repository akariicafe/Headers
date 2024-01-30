@class PFUbiquityLocation, NSString, NSURL, NSSet, NSOperationQueue, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter> {
    NSString *_storeName;
    NSURL *_presentedItemURL;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _scheduledProcessingBlock;
    NSMutableArray *_pendingURLs;
    int _pendingURLsLock;
}

@property (readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (readonly) NSString *localPeerID;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, nonatomic) NSMutableDictionary *locationToStatus;
@property (readonly, nonatomic) NSMutableDictionary *locationToSafeSaveFile;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (int)usesCloudDocsFramework;
+ (void)startDownloadForItems:(id)a0 onQueue:(id)a1 withBlock:(id /* block */)a2;
+ (id)sharedPrivateOperationQueue;
+ (id)cloudDocsRootFolder;
+ (void)registerInitialSyncHandlerForURL:(id)a0 andContainerID:(id)a1 onQueue:(id)a2 withBlock:(id /* block */)a3;

- (id)init;
- (id)copyStatusDictionary;
- (void)presentedSubitemUbiquityDidChangeAtURL:(id)a0;
- (void)dealloc;
- (void)presentedSubitemDidChangeAtURL:(id)a0;
- (void)logWasExported:(id)a0;
- (void)logWasImported:(id)a0;
- (void)logImportWasCancelled:(id)a0;
- (void)logsWereScheduled:(id)a0;
- (void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)a0;
- (void)printStatus:(id)a0;
- (void)processPendingURLs;
- (BOOL)isiCloudExtension:(id)a0;
- (id)retainedStatusForLocation:(id)a0;
- (id)initWithUbiquityRootLocation:(id)a0 localPeerID:(id)a1 storeName:(id)a2 processingQueue:(id)a3;
- (void)exporterDidMoveLog:(id)a0;
- (void)registerSafeSaveFile:(id)a0;
- (void)unregisterSafeSaveFile:(id)a0;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (void)relinquishPresentedItemToReader:(id /* block */)a0;

@end
