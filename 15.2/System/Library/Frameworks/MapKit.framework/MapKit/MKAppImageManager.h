@class NSURLSession, NSString, NSMapTable, NSMutableDictionary, geo_isolater, NSCache;

@interface MKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {
    NSCache *_iconCache;
    NSURLSession *_session;
    geo_isolater *_containersLock;
    NSMapTable *_containers;
    geo_isolater *_urlConnectionsLock;
    NSMutableDictionary *_urlConnections;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedImageManager;
+ (id)sharedCollectionCoverImageManager;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_dispatchOnManThread:(id /* block */)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)initWithURLCache:(id)a0;
- (void)clearImageCache;
- (id)cachedImageAtURL:(id)a0;
- (void)loadAppImageAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelLoadAppImageAtURL:(id)a0;

@end
