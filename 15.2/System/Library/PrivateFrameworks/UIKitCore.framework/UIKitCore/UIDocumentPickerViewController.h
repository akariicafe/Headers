@class _UIRemoteViewController, NSArray, DOCConfiguration, NSURL, NSString, NSMutableArray, UIViewController;
@protocol UIDocumentPickerDelegate;

@interface UIDocumentPickerViewController : UIViewController <UIDocumentBrowserViewControllerPrivateDelegate, _UIRemoteViewControllerContaining> {
    id<UIDocumentPickerDelegate> _weak_delegate;
}

@property (nonatomic) unsigned long long documentPickerMode;
@property (copy, nonatomic) NSArray *documentTypes;
@property (retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) UIViewController *childViewController;
@property (copy, nonatomic) NSArray *uploadURLs;
@property (retain, nonatomic) NSMutableArray *_securityScopedURLs;
@property (retain, nonatomic) DOCConfiguration *configuration;
@property (nonatomic, getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:) BOOL _ignoreApplicationEntitlementForImport;
@property (nonatomic, getter=_isContentManaged, setter=_setIsContentManaged:) BOOL isContentManaged;
@property (nonatomic, getter=_sourceIsManaged, setter=_setSourceIsManaged:) BOOL sourceIsManaged;
@property (nonatomic, getter=_automaticallyDismissesAfterCompletion, setter=_setAutomaticallyDismissesAfterCompletion:) BOOL automaticallyDismissesAfterCompletion;
@property (nonatomic) unsigned long long pickerUserInterfaceStyle;
@property (nonatomic, getter=_forPickingDownloadsFolder, setter=_setForPickingDownloadsFolder:) BOOL forPickingDownloadsFolder;
@property (weak, nonatomic) id<UIDocumentPickerDelegate> delegate;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (nonatomic) BOOL shouldShowFileExtensions;
@property (copy, nonatomic) NSURL *directoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_didTapCancel;
- (id)initWithDocumentTypes:(id)a0 inMode:(unsigned long long)a1;
- (id)initWithURL:(id)a0 inMode:(unsigned long long)a1;
- (void)dealloc;
- (void)_commonInitWithDocumentTypes:(id)a0;
- (id)initForOpeningContentTypes:(id)a0 asCopy:(BOOL)a1;
- (id)initForExportingURLs:(id)a0 asCopy:(BOOL)a1;
- (id)initWithURLs:(id)a0 inMode:(unsigned long long)a1;
- (void)_tellDelegateDocumentPickerWasCancelled;
- (void)_callDelegateWithSelectedURLsAndDismiss:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initForExportingURLs:(id)a0;
- (void)_consumeSandboxExtensionForURL:(id)a0;
- (void)documentBrowser:(id)a0 didPickDocumentURLs:(id)a1;
- (void)documentManagerWasCancelled:(id)a0;
- (id)initForOpeningContentTypes:(id)a0;
- (id)_initForImportingDocumentsWithConversionRules:(id)a0;

@end
