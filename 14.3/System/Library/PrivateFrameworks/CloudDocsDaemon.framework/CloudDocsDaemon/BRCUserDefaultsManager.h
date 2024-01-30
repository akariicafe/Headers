@class NSURLSession, NSString, NSDictionary, NSURL, NSMutableDictionary, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface BRCUserDefaultsManager : NSObject <NSURLSessionDownloadDelegate> {
    NSURL *_serverConfigurationURL;
    NSDictionary *_serverConfigurationDict;
    NSMutableDictionary *_userDefaultsCache;
    id /* block */ _configurationPlistDidUpdateBlock;
    NSOperationQueue *_downloadQueue;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id<NSObject> _defaultsDidChangeNotificationObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)defaultsForIdentifier:(id)a0;
- (void)_loadCachedServerConfigurationDictionaryFromDB:(id)a0;
- (void)_prepopulateGlobalUserDefaults;
- (void)setServerConfigurationURL:(id)a0 whenLoaded:(id /* block */)a1;
- (void)_loadServerConfigurationDictionary;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_parsePlistWithURL:(id)a0;
- (void)_setServerConfigurationURL:(id)a0 whenLoaded:(id /* block */)a1;
- (void)_saveServerConfigurationDictionaryToDB:(id)a0;

@end
