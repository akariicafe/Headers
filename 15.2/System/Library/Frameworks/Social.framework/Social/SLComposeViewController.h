@class UIView, NSString, NSArray, _UIRemoteViewController, NSLayoutConstraint, NSExtension, UIViewController;

@interface SLComposeViewController : UIViewController <SLRemoteComposeViewControllerDelegateProtocol, _UIRemoteViewControllerContaining> {
    NSExtension *_extension;
    NSString *_initialText;
    NSArray *_itemProviders;
    NSArray *_extensionItems;
    NSLayoutConstraint *_keyboardTopConstraint;
    UIView *_keyboardTrackingView;
    long long _savedStatusBarStyle;
    BOOL _wasPresented;
    BOOL _hasInstantiatedExtensionUI;
    BOOL _didFailLoadingRemoteViewController;
    BOOL _didCompleteSheet;
    long long _maximumImageCount;
    long long _maximumURLCount;
    long long _maximumVideoCount;
    long long _numVideosAdded;
    long long _numImagesAdded;
    long long _numURLsAdded;
}

@property (retain) UIViewController *remoteViewController;
@property (readonly, nonatomic) NSString *serviceType;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAvailableForServiceType:(id)a0;
+ (id)extensionIdentifierForActivityType:(id)a0;
+ (id)composeViewControllerForExtension:(id)a0;
+ (BOOL)isAvailableForExtension:(id)a0 inHostApplicationBundleID:(id)a1;
+ (id)_serviceTypeToExtensionIdentifierMap;
+ (BOOL)_isMultiUserDevice;
+ (id)_unsupportedServiceTypes;
+ (BOOL)_isAvailableForServiceType:(id)a0 inHostApplicationBundleID:(id)a1;
+ (id)_serviceTypeForExtensionIdentifier:(id)a0;
+ (BOOL)_legacyBuiltInAvailabilityForService:(id)a0 inHostApplicationBundleID:(id)a1;
+ (BOOL)_isServiceType:(id)a0;
+ (id)_extensionIdentifierForServiceType:(id)a0;
+ (id)_shareExtensionWithIdentifier:(id)a0;
+ (id)composeViewControllerForServiceType:(id)a0;
+ (BOOL)isAvailableForExtension:(id)a0;
+ (BOOL)isAvailableForExtensionIdentifier:(id)a0;
+ (id)composeViewControllerForExtensionIdentifier:(id)a0;

- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)addURL:(id)a0;
- (BOOL)_useCustomDimmingView;
- (BOOL)addAttachment:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidUnload;
- (void).cxx_destruct;
- (BOOL)addImage:(id)a0;
- (BOOL)addExtensionItem:(id)a0;
- (BOOL)addItemProvider:(id)a0;
- (void)_instantiateAndBeginExtensionIfNeeded;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)removeAllImages;
- (id)initWithServiceType:(id)a0;
- (BOOL)setInitialText:(id)a0;
- (void)userDidCancel;
- (void)userDidPost;
- (void)completeWithResult:(long long)a0;
- (id)initWithExtensionIdentifier:(id)a0;
- (BOOL)removeAllURLs;
- (BOOL)addURL:(id)a0 withPreviewImage:(id)a1;
- (id)initWithExtension:(id)a0 requestedServiceType:(id)a1;
- (BOOL)canAddContent;
- (id)_urlForUntypedAsset:(id)a0;
- (BOOL)_addImageAsset:(id)a0 preview:(id)a1;
- (BOOL)supportsImageAsset:(id)a0;
- (BOOL)_addImageJPEGData:(id)a0 preview:(id)a1;
- (BOOL)supportsVideoAsset:(id)a0;
- (BOOL)_addURL:(id)a0 type:(long long)a1 preview:(id)a2;
- (BOOL)_addVideoData:(id)a0 preview:(id)a1;
- (BOOL)_addVideoAsset:(id)a0 preview:(id)a1;
- (void)_handleRemoteViewFailure;
- (void)didLoadSheetViewController;
- (void)remoteController:(id)a0 didLoadWithError:(id)a1;
- (void)_instantiateAndBeginExtensionIfNeededWithCompletion:(id /* block */)a0;
- (void)remoteViewController:(id)a0 didTerminateWithError:(id)a1;
- (BOOL)addImageAsset:(id)a0;
- (id /* block */)addDownSampledImageDataByProxyWithPreviewImage:(id)a0;
- (void)setLongitude:(double)a0 latitude:(double)a1 name:(id)a2;
- (void)remoteViewControllerLoadDidTimeout;

@end
