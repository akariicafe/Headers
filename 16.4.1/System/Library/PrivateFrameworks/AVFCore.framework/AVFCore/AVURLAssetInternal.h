@class AVWeakReference, AVAssetClientURLRequestHelper, NSURL, NSArray, AVAssetCustomURLAuthentication, AVAssetResourceLoader, AVAssetInspectorLoader, AVAssetCustomURLBridgeForNSURLProtocol, AVDispatchOnce, AVAssetCache, NSObject, NSDictionary;
@protocol OS_dispatch_queue;

@interface AVURLAssetInternal : NSObject {
    AVAssetInspectorLoader *loader;
    AVAssetClientURLRequestHelper *URLRequestHelper;
    AVAssetCustomURLBridgeForNSURLProtocol *customURLBridgeForNSURLProtocol;
    AVAssetCustomURLAuthentication *customURLAuthenticationUsingKeychain;
    NSURL *URL;
    NSArray *tracks;
    AVAssetResourceLoader *resourceLoader;
    AVDispatchOnce *makeOneResourceLoaderOnly;
    AVAssetCache *assetCache;
    AVDispatchOnce *makeOneAssetDownloadCacheOnly;
    NSObject<OS_dispatch_queue> *tracksAccessQueue;
    NSDictionary *initializationOptions;
    BOOL hasInstanceIdentifierMapping;
    BOOL requiresSecurityScopeRelease;
    AVWeakReference *sessionReference;
}

@end
