@class PUPickerRemoteUIViewController, NSString, _UIRemoteViewController, NSExtension, PHPickerConfiguration;
@protocol PHPickerViewControllerDelegate, NSCopying;

@interface PHPickerViewController : UIViewController <_UIRemoteViewControllerContaining, _PUPickerUnavailableUIViewControllerDelegate, _PUPickerRemoteUIViewControllerHostInterface>

@property (retain, nonatomic, setter=_setExtension:) NSExtension *_extension;
@property (copy, nonatomic, setter=_setExtensionRequestIdentifier:) id<NSCopying> _extensionRequestIdentifier;
@property (retain, nonatomic, setter=_setRemoteUIViewController:) PUPickerRemoteUIViewController *_remoteUIViewController;
@property (retain, nonatomic, setter=_setOverlayStorage:) id _overlayStorage;
@property (readonly, copy, nonatomic) PHPickerConfiguration *configuration;
@property (weak, nonatomic) id<PHPickerViewControllerDelegate> delegate;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_handleRemoteViewControllerConnection:(id)a0 extension:(id)a1 extensionRequestIdentifier:(id)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_setup:(id /* block */)a0;
- (void)dealloc;
- (void)_deselectAssetsWithIdentifiers:(id)a0;
- (void)_moveAssetWithIdentifier:(id)a0 afterIdentifier:(id)a1;
- (void)_pickerUnavailableUIViewControllerCancelButtonTapped:(id)a0;
- (void)_pickerUnavailableUIViewControllerRetryButtonTapped:(id)a0;
- (void)_setupExtension:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setupRemoteViewControllerForExtension:(id)a0 withExtensionItem:(id)a1 completionHandler:(id /* block */)a2;
- (void)_cancelExistingExtensionRequestIfPossible;
- (void)_addOrReplaceChildUnavailableUIViewController:(unsigned long long)a0 error:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_pickerDidFinishPicking:(id)a0;

@end
