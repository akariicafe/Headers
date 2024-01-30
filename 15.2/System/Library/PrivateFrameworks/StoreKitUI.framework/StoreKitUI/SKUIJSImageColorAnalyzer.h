@class NSString, SKUIClientContext, NSMutableDictionary, NSOperationQueue, SKUIResourceLoader;

@interface SKUIJSImageColorAnalyzer : IKJSObject <SKUIArtworkRequestDelegate, SKUIJSImageColorAnalyzer> {
    SKUIClientContext *_clientContext;
    NSMutableDictionary *_artworkRequestIDsToManagedCallbacks;
    NSOperationQueue *_operationQueue;
    SKUIResourceLoader *_resourceLoader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithAppContext:(id)a0 clientContext:(id)a1;
- (void)analyzeImageAtUrl:(id)a0 :(id)a1;

@end
