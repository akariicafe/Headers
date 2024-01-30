@class NSString, SKUIClientContext, NSURL, NSOperationQueue;

@interface SKUIStoreAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    BOOL _isITunesStream;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
    NSOperationQueue *_operationQueue;
    BOOL _shouldUseITunesStoreSecureKeyDelivery;
}

@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storeAssetResourceLoaderDelegateForPlayableAsset:(id)a0 clientContext:(id)a1;

- (void).cxx_destruct;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;

@end
