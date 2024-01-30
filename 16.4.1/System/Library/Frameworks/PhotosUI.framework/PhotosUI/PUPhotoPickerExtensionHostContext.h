@class NSNumber, NSString, NSUUID;
@protocol PUPhotoPickerHostService;

@interface PUPhotoPickerExtensionHostContext : PUPhotoPickerAbstractExtensionContext <PUPhotoPickerHostService>

@property (retain, nonatomic) NSNumber *cachedDidDisplayPhotoPickerSourceType;
@property (nonatomic) BOOL cachedDidDisplayPhotoPickerPreview;
@property (copy, nonatomic) NSString *photoPickerViewControllerTitle;
@property (copy, nonatomic) NSString *photoPickerViewControllerPrompt;
@property (retain, nonatomic) NSNumber *photoPickerNavigationBarHidden;
@property (weak, nonatomic) id<PUPhotoPickerHostService> delegate;
@property (retain, nonatomic) NSUUID *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_remote;
- (void)cancelPhotoPicker;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(id)a0;
- (void)didSelectMediaWithInfoDictionary:(id)a0;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)a0;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)a0;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)initiatePhotoPickerSelection;
- (void)invalidatePhotoPickerHostServices;
- (void)performTraitCollectionUpdateUsingData:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isHEIFImageFormatFromData:(id)a0 url:(id)a1;
- (id)_JPEGDataFromImage:(id)a0;
- (id)_JPEGDataFromImageData:(id)a0;
- (id)_UIImagePickerControllerInfoDictionaryFromPhotoPickerInfoDictionary:(id)a0;
- (id)_createURLFromPath:(id)a0 token:(id)a1;
- (id)_pathExtensionFromData:(id)a0 url:(id)a1 exportPreset:(long long)a2;

@end
