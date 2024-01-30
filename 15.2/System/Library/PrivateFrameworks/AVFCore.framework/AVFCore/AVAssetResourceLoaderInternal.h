@class NSURLSession, AVAssetClientURLRequestHelper, AVWeakReference, NSMutableDictionary, AVAssetCustomURLBridgeForNSURLSession, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface AVAssetResourceLoaderInternal : NSObject {
    AVAssetClientURLRequestHelper *URLRequestHelper;
    AVWeakReference *weakReferenceToAsset;
    NSObject<OS_dispatch_queue> *stateQueue;
    AVWeakReference *weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    struct OpaqueFigCustomURLLoader { } *customURLLoader;
    struct OpaqueFigCustomURLHandler { } *customURLHandler;
    struct OpaqueFigCustomURLHandler { } *authHandler;
    struct OpaqueFigCustomURLHandler { } *contentKeySessionCustomURLHandler;
    struct OpaqueFigXPCRemoteClient { } *remoteHandlerXPCRemoteClient;
    int loadingCancelled;
    NSMutableDictionary *pendingRequests;
    NSObject<OS_dispatch_queue> *contentInformationCachingQueue;
    NSMutableDictionary *contentInformationCache;
    BOOL preloadsEligibleContentKeys;
    NSURLSession *URLSession;
    AVAssetCustomURLBridgeForNSURLSession *bridgeBetweenHandlerAndSession;
    NSOperationQueue *URLSessionOperationQueue;
}

@end
