@class NSData, NSString, UIView, CFXReviewControlsViewController, CFXEffectBrowserViewController, CFXPreviewViewController, NSObject, CFXMediaItem;
@protocol OS_dispatch_group, CFXReviewViewControllerDelegate;

@interface CFXReviewViewController : UIViewController <CFXPreviewViewControllerDelegate, CFXEffectBrowserContentPresenterViewControllerDelegate, CFXEffectBrowserViewControllerDelegate>

@property (retain, nonatomic) CFXEffectBrowserViewController *effectBrowserViewController;
@property (retain, nonatomic) CFXPreviewViewController *internalPreviewViewController;
@property (retain, nonatomic) CFXReviewControlsViewController *reviewControlsViewController;
@property (retain, nonatomic) NSString *effectBrowserPresentedAppIdentifier;
@property (retain, nonatomic) CFXMediaItem *mediaItem;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *metadataReaderGroup;
@property (readonly, nonatomic) BOOL mediaCapturedInFunCam;
@property (nonatomic) BOOL mediaCapturedInFunCam_metadata;
@property (readonly, nonatomic) long long mediaCaptureDevicePosition;
@property (nonatomic) long long mediaInterfaceOrientationForDisplay_metadata;
@property (readonly, nonatomic) NSData *animojiMetadata;
@property (retain, nonatomic) NSData *animojiMetadata_metadata;
@property (nonatomic) long long cameraModeUsedForCapture;
@property (readonly, copy, nonatomic) NSData *adjustmentsData;
@property (weak, nonatomic) id<CFXReviewViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *effectsPickerDrawer;
@property (readonly, nonatomic) BOOL mediaItemRequiresExport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithMediaItem:(id)a0;
- (void)exportMediaItemToFileURL:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)effectBrowserViewController:(id)a0 didSelectAppWithIdentifier:(id)a1;
- (void)effectBrowserViewController:(id)a0 willChangeDockHeight:(double)a1;
- (BOOL)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)a0;
- (void)CFX_resetAndLoadPreviewViewController;
- (void)CFX_updateAnalyticsForSentMediaItem:(id)a0;
- (id)preferredDisplayColorSpace;
- (id)preferredExportColorSpace;
- (void)previewViewController:(id)a0 didFinishExportingMediaItem:(id)a1 withError:(id)a2;
- (void)previewViewController:(id)a0 didProgress:(double)a1 exportingMediaItem:(id)a2;
- (void)previewViewController:(id)a0 didStartExportingMediaItem:(id)a1;
- (void)previewViewControllerDidHideUserInterface:(id)a0;
- (void)previewViewControllerDidShowUserInterface:(id)a0;
- (void)previewViewControllerDidStartEditingText:(id)a0;
- (void)previewViewControllerDidStopEditingText:(id)a0;
- (id)selectedAppIdentifierForPreviewViewController:(id)a0;
- (long long)calculateMediaInterfaceOrientationForDisplay;
- (double)effectBrowserViewController:(id)a0 screenTopBarHeightForWindowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 orientation:(long long)a2;
- (void)effectBrowserViewController:(id)a0 didDropOverlayEffect:(id)a1 atScreenLocation:(struct CGPoint { double x0; double x1; })a2 atScreenSize:(struct CGSize { double x0; double x1; })a3 rotationAngle:(double)a4;
- (void)effectBrowserViewController:(id)a0 didRemoveAllEffectsOfType:(id)a1;
- (void)effectBrowserViewController:(id)a0 didSelectEffect:(id)a1;
- (void)effectBrowserViewController:(id)a0 filterPickerPreviewBackgroundImageAtSizeInPixels:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)selectedFilterIdentifierForEffectBrowserViewController:(id)a0;
- (id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)a0;
- (id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)a0;
- (BOOL)allowLandscapeForEffectBrowserViewController:(id)a0;
- (void)effectBrowserViewController:(id)a0 didDismissPickerForEffectType:(id)a1;
- (void)effectBrowserViewController:(id)a0 didPresentPickerForEffectType:(id)a1;
- (id)mediaItemForEffectBrowserViewController:(id)a0;

@end
