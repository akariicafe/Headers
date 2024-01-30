@class SBUIPopoverExtensionHostViewController, NSString, SBHRecentsDocumentExtensionWrappingViewController, NSExtension;
@protocol SBHRecentsDocumentExtensionProviderDelegate, _SBUIPopoverExtensionRemoteInterface;

@interface SBHRecentsDocumentExtensionProvider : NSObject <_SBUIPopoverExtensionHostDelegate> {
    struct CGSize { double width; double height; } _compactPreferredContentSize;
}

@property (retain, nonatomic) SBHRecentsDocumentExtensionWrappingViewController *wrappingViewController;
@property (readonly, nonatomic) SBUIPopoverExtensionHostViewController *hostViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<_SBUIPopoverExtensionRemoteInterface> remoteService;
@property (weak, nonatomic) id<SBHRecentsDocumentExtensionProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canShowRecentsDocumentExtensionProviderForBundleIdentifier:(id)a0;
- (id)recentsDocumentViewControllerForBundleIdentifier:(id)a0;
- (void)_loadExtensionWithCompletion:(id /* block */)a0;
- (void)_loadRemoteViewControllerWithBundleIdentifer:(id)a0;
- (void)_extensionWillExit:(id)a0;
- (void)_teardownHostViewController;
- (id)_preferredExtensionIdentifier;
- (void)_setupHostViewController:(id)a0;
- (void)popoverHostExtensionRequestsDismiss:(id)a0;
- (void)popoverHostExtensionDidExit:(id)a0;

@end
