@class NSString, NSExtensionContext;
@protocol PUPhotoPickerHostViewControllerDelegate, PUPhotoPickerHostService;

@interface PUPhotoPickerHostViewController : _UIRemoteViewController <PUPhotoPickerHostExtensionProvider, PUPhotoPickerTestSupportHandler>

@property (readonly, nonatomic) id<PUPhotoPickerHostService> hostProxy;
@property (nonatomic, getter=_isInvalidated) BOOL _invalidated;
@property (weak, nonatomic) id<PUPhotoPickerHostViewControllerDelegate> delegate;
@property (retain, nonatomic) NSExtensionContext *hostExtensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)performTraitCollectionUpdateWithCompletion:(id /* block */)a0;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (id)_hostContext;
- (void)invalidate;

@end
