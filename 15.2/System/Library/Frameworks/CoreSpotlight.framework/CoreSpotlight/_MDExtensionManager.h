@class _MDExtensionLoader, NSString, NSDictionary, NSCondition, NSMutableDictionary, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface _MDExtensionManager : NSObject <CSIndexExtensionDelegate> {
    NSMutableDictionary *_fileTypeToExtensionMapping;
    NSMutableSet *_fileTypeNegativeCache;
    unsigned long long _lastLoadCount;
}

@property (retain, nonatomic) _MDExtensionLoader *extensionLoader;
@property (retain, nonatomic) NSDictionary *indexExtensionsByBundleID;
@property (retain, nonatomic) NSDictionary *fileProviderBundleMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSCondition *extensionsCondition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extensionManagerQueue;
@property (nonatomic) long long loaderCallbackCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)findExtensionsWithCompletionBlock:(id /* block */)a0;
- (id)initWithQueueName:(const char *)a0;
- (void)_waitForLoadLocked;
- (void)_notifyForLoadedExtensions;
- (id)anyExtensionWithBlock:(id /* block */)a0;
- (id)allExtensionsWithBlock:(id /* block */)a0;
- (void)_willRunJobWithBundleID:(id)a0;
- (void)_performJob:(id)a0 extensions:(id)a1 count:(unsigned long long)a2 throttle:(id)a3 perExtensionCompletionHandler:(id /* block */)a4;
- (void)_didRetryJobWithBundleID:(id)a0;
- (void)_performJob:(id)a0 extensions:(id)a1 perExtensionCompletionHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)extensionForFileType:(id)a0;
- (void)indexRequestsPerformJob:(id)a0 forBundle:(id)a1 completionHandler:(id /* block */)a2;
- (void)indexRequestsPerformJob:(id)a0 perExtensionCompletionHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)indexRequestsPerformJob:(id)a0 extensions:(id)a1 perExtensionCompletionHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)indexRequestsPerformDataJob:(id)a0 forBundle:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadExtensions;
- (id)extensions;
- (void).cxx_destruct;

@end
