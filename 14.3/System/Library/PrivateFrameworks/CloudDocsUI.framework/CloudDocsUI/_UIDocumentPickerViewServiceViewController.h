@class NSArray, NSString, NSURL, UIViewController;
@protocol _UIDocumentPickerViewControllerHost;

@interface _UIDocumentPickerViewServiceViewController : _UIViewServiceViewController <_UIDocumentPickerRemoteViewControllerContaining, _UIDocumentPickerOverviewDelegate, _UIDocumentListControllerDelegate, _UIDocumentTargetSelectionControllerDelegate, _UIDocumentPickerViewController>

@property (copy, nonatomic, setter=_setPickableTypes:) NSArray *pickableTypes;
@property (nonatomic, setter=_setPickerMode:) unsigned long long pickerMode;
@property (copy, nonatomic, setter=_setUploadURL:) NSURL *uploadURL;
@property (retain, nonatomic, setter=_setAuxiliaryOptions:) NSArray *auxiliaryOptions;
@property (retain, nonatomic) NSString *currentPickerIdentifier;
@property (nonatomic) BOOL displayedAsMenu;
@property (nonatomic) BOOL hasBeenDismissed;
@property (nonatomic) BOOL showingSpinner;
@property (retain, nonatomic) UIViewController *currentPicker;
@property (readonly, nonatomic) id<_UIDocumentPickerViewControllerHost> hostingViewController;
@property (nonatomic) int sortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (id)_logicalURLForPhysicalURL:(id)a0;
+ (id)_urlByResolvingExternalDocumentReferenceForURL:(id)a0;

- (void)_setTintColor:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_willAppearInRemoteViewController;
- (id)hostingViewController;
- (void)_doneButton:(id)a0;
- (void)_dismissViewController;
- (void)_setUploadURLWrapper:(id)a0;
- (void)_documentPickerDidDismiss;
- (void)_didSelectPicker;
- (void)_dismissWithOption:(id)a0;
- (void)_stitchFileCreationAtURL:(id)a0;
- (void)_didSelectURL:(id)a0;
- (void)_setIsContentManaged:(BOOL)a0;
- (void)_displayLocationsMenuFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setSourceIsManaged:(BOOL)a0;
- (void)_showDefaultPicker;
- (void)_prepareForDisplayWithCompletion:(id /* block */)a0;
- (void)_showPicker:(id)a0;
- (void)documentListController:(id)a0 didSelectContainerWithViewController:(id)a1;
- (void)documentListController:(id)a0 didSelectItemAtURL:(id)a1;
- (void)documentListController:(id)a0 performAction:(long long)a1 URL:(id)a2 originatingView:(id)a3 completion:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })_updatedContentSizeForPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)documentTargetSelectionController:(id)a0 didSelectItemAtURL:(id)a1;
- (void)overviewController:(id)a0 selectedDocumentPickerWithIdentifier:(id)a1;
- (void)overviewController:(id)a0 selectedAuxiliaryOptionWithIdentifier:(id)a1;
- (void)setNavigationItemSpinner:(BOOL)a0;
- (void)_createBookmarkAndDismissWithCloudURL:(id)a0;
- (void)_dismissWithFileProviderURL:(id)a0 bundleIdentifier:(id)a1;
- (void)_updateDefaultPicker;
- (void)_showTopLevelViewController;
- (void)_warnSharingPreMove;
- (void)_cloudEnabledStatusDidChange:(id)a0;
- (void)setupNavigationItemForPicker:(id)a0 isRoot:(BOOL)a1;
- (void)_showLocationPopup:(id)a0;
- (void)_didInstantiateThirdPartyPickerWithDescription:(id)a0 placeholder:(id)a1;
- (void)_presentError:(id)a0 forThirdPartyPickerWithDescription:(id)a1;
- (void)_invalidatePicker:(id)a0;
- (void)dismissWithURL:(id)a0 forBundleIdentifier:(id)a1;
- (void)_showLocationPopupFromBarButtonItem:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_waitForDownloadOfURL:(id)a0 completion:(id /* block */)a1;
- (void)pickLocationForUpload:(id)a0;
- (void)_warnSharingForTarget:(id)a0 completion:(id /* block */)a1;
- (void)_tryExportingFile:(id)a0 toLocation:(id)a1;
- (id)_mangledFilenameForURL:(id)a0;
- (void)_showExistsAlertForFile:(id)a0 withSourceURL:(id)a1;
- (BOOL)_shouldWarnForSharing;
- (void)_dismissWithImportURL:(id)a0;

@end
