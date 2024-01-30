@class NSURL, NSString, AXAssetController;

@interface AXMImageCaptionModelAssetManager : NSObject <AXAssetControllerObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _didTryWaitingForAssetLookup;
    AXAssetController *_assetController;
}

@property (copy, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_performWithLock:(id /* block */)a0;
- (id)_modelURLForType:(unsigned long long)a0 baseURL:(id)a1;
- (void)assetController:(id)a0 didFinishRefreshingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (id)modelURLForType:(unsigned long long)a0 timeout:(double)a1;
- (id)infoForModelAtURL:(id)a0;

@end
