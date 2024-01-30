@class GEOReportedProgress, NSString, NSURL, NSArray, GEOApplicationAuditToken, NSMutableArray, NSProgress, GEOPowerAssertion, NSMapTable, NSObject;
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
    BOOL _allowResumingPartialDownloads;
    NSMapTable *_inProgressResourceDownloads;
    GEOPowerAssertion *_powerAssertion;
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

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0 callbackQueue:(id)a1;
- (void)_cleanup;
- (void)_loadResourcesFromDisk;
- (id)initWithTargetDirectory:(id)a0 baseURL:(id)a1 alternateURLs:(id)a2 proxyURL:(id)a3 resources:(id)a4 forceUpdateCheck:(BOOL)a5 maximumConcurrentLoads:(unsigned long long)a6 additionalDirectoryToConsider:(id)a7 log:(id)a8 signpostID:(unsigned long long)a9;
- (void)_loadNextResourceFromNetwork;
- (BOOL)_copyResource:(id)a0 fromPath:(id)a1 allowCreatingHardLink:(BOOL)a2 error:(id *)a3;
- (void)_writeResourceToDisk:(id)a0 withData:(id)a1 checksum:(id)a2 eTag:(id)a3 completionHandler:(id /* block */)a4 callbackQueue:(id)a5;
- (BOOL)_establishHardLinkIfPossibleForResource:(id)a0 toResource:(id)a1 error:(id *)a2;

@end
