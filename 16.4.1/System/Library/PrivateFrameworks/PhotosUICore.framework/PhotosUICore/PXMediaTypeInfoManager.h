@class NSMutableArray, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface PXMediaTypeInfoManager : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_pendingCompletionHandlers;
}

@property (class, readonly) PXMediaTypeInfoManager *sharedManager;
@property (class, readonly) NSURL *knowledgeBaseFallbackURL;

- (void)_handleAssetQueryCallbackWithAsset:(id)a0 error:(id)a1 userInitiated:(BOOL)a2;
- (id)_init;
- (void)_installMobileAssetAsUserInitiated:(BOOL)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)_processPendingCallbacksWithAsset:(id)a0;
- (void)_handleAssetDownloadProgressWithAsset:(id)a0 error:(id)a1;
- (void)mediaTypeInfoURLForUTI:(id)a0 codecName:(id)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (void)_prepareInformationForLookups;
- (void)prepareInformationForLookups;
- (void)_handleInstallMobileAssetCallbackWithAsset:(id)a0 UTI:(id)a1 codecName:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;

@end
