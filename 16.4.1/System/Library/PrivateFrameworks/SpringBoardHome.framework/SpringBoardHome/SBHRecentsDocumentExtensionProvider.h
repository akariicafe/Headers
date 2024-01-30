@class SBUIPopoverExtensionHostViewController, NSString, SBHRecentsDocumentExtensionWrappingViewController, NSExtension;
@protocol SBHRecentsDocumentExtensionProviderDelegate, _SBUIPopoverExtensionRemoteInterface;

@interface SBHRecentsDocumentExtensionProvider : NSObject <_SBUIPopoverExtensionHostDelegate, SBHRecentsDocumentExtensionWrappingViewControllerDelegate>

@property (retain, nonatomic) SBHRecentsDocumentExtensionWrappingViewController *wrappingViewController;
@property (readonly, nonatomic) SBUIPopoverExtensionHostViewController *hostViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<_SBUIPopoverExtensionRemoteInterface> remoteService;
@property (nonatomic) struct CGSize { double width; double height; } compactPreferredContentSize;
@property (weak, nonatomic) id<SBHRecentsDocumentExtensionProviderDelegate> delegate;
@property (nonatomic) BOOL usesIntrinsicContentSizeBasedOnScreenSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)popoverHostExtensionDidExit:(id)a0;
- (void)popoverHostExtensionRequestsDismiss:(id)a0;
- (void)_extensionWillExit:(id)a0;
- (void)_loadExtensionWithCompletion:(id /* block */)a0;
- (void)_loadRemoteViewControllerWithConfiguration:(id /* block */)a0;
- (id)_preferredExtensionIdentifier;
- (void)_setupHostViewController:(id)a0;
- (void)_teardownHostViewController;
- (id)_viewControllerConfiguration:(id /* block */)a0;
- (BOOL)canShowRecentsDocumentExtensionProviderForBundleIdentifier:(id)a0;
- (BOOL)recentsDocumentExtensionWrappingViewControllerHasTransparentContent:(id)a0;
- (id)recentsDocumentViewControllerForBundleIdentifier:(id)a0;

@end
