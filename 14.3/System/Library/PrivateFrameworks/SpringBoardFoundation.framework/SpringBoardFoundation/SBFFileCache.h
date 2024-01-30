@class NSMutableArray, NSObject;
@protocol SBFFileCacheStore, SBFFileCacheDelegate, OS_dispatch_queue, SBFFileCacheFaultHandler;

@interface SBFFileCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_manifest;
}

@property double accessDateTimeAdjustment;
@property (readonly, nonatomic) id<SBFFileCacheStore> store;
@property (readonly, nonatomic) id<SBFFileCacheFaultHandler> faultHandler;
@property (weak) id<SBFFileCacheDelegate> delegate;
@property unsigned long long maxTotalFileSize;
@property unsigned long long maxTotalFileCount;
@property double maxAllowedTimeSinceLastAccess;
@property double maxAllowedTimeSinceGeneration;

- (void)removeAllFiles;
- (id)init;
- (void).cxx_destruct;
- (id)fileNameForIdentifier:(id)a0;
- (void)_queue_updateManifestForLoadedFileWrapper:(id)a0 filename:(id)a1 usingStore:(id)a2;
- (void)performOnWorkQueueUsingBlock:(id /* block */)a0;
- (void)_queue_createManifestEntryForGeneratedFileWrapper:(id)a0 filename:(id)a1 usingStore:(id)a2;
- (void)_queue_removeManifestEntryForFilename:(id)a0 usingStore:(id)a1;
- (void)_queue_resetManifestUsingStore:(id)a0;
- (void)_queue_loadManifestUsingStore:(id)a0;
- (void)_queue_evictIfNeededUsingStore:(id)a0;
- (void)_queue_saveManifestUsingStore:(id)a0;
- (void)_queue_evictFilesAtManifestIndexes:(id)a0 usingStore:(id)a1;
- (void)_queue_evictFileWithInfo:(id)a0 usingStore:(id)a1;
- (id)initWithStore:(id)a0 faultHandler:(id)a1;
- (void)loadFileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeFileWithIdentifier:(id)a0;
- (id)description;
- (id)callbackQueue;

@end
