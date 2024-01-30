@class NSString, NSURL, NSArray, GEOApplicationAuditToken, NSMutableArray, NSProgress, NSObject, NSMapTable, GEOReportedProgress;
@protocol OS_dispatch_queue, OS_os_log;

@interface GEOResourceLoader : NSObject <NSProgressReporting> {
    NSString *_directory;
    NSString *_additionalDirectoryToConsider;
    NSMutableArray *_resourcesToLoad;
    id /* block */ _completionHandler;
    unsigned long long _numberOfDownloadsInProgress;
    long long _numberOfCopiesInProgress;
    BOOL _canceled;
    NSURL *_baseURL;
    NSArray *_alternateURLs;
    NSURL *_proxyURL;
    BOOL _forceUpdateCheck;
    unsigned long long _maxConcurrentLoads;
    NSArray *_resourceInfos;
    NSMutableArray *_loadedResources;
    NSMapTable *_inProgressResourceDownloads;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
    NSURL *_authProxyURL;
    NSObject<OS_os_log> *_log;
    unsigned long long _signpostID;
}

@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) BOOL requiresWiFi;
@property (nonatomic) BOOL preferDirectNetworking;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)resourceLoadOperationClass;

- (void)_cleanup;
- (void)_writeResourceToDisk:(id)a0 withData:(id)a1 orTempFile:(id)a2 checksum:(id)a3 eTag:(id)a4 completionHandler:(id /* block */)a5 callbackQueue:(id)a6;
- (void)_loadResourcesFromDisk;
- (void)_loadNextResourceFromNetwork;
- (BOOL)_establishHardLinkIfPossibleForResource:(id)a0 toResource:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTargetDirectory:(id)a0 baseURL:(id)a1 alternateURLs:(id)a2 proxyURL:(id)a3 resources:(id)a4 forceUpdateCheck:(BOOL)a5 maximumConcurrentLoads:(unsigned long long)a6 additionalDirectoryToConsider:(id)a7 log:(id)a8 signpostID:(unsigned long long)a9;
- (void)startWithCompletionHandler:(id /* block */)a0 callbackQueue:(id)a1;
- (void)cancel;
- (BOOL)_copyResource:(id)a0 fromPath:(id)a1 allowCreatingHardLink:(BOOL)a2 error:(id *)a3;

@end
