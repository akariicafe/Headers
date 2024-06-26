@class NSString, UIImage, PLManagedAsset, PLVideoView, PLVideoRemaker, PLCropOverlay, PLProgressView, NSURL, PLPhotoTileViewController;

@interface PLUIImageViewController : UIViewController <PLVideoViewDelegate, PLPhotoTileViewControllerDelegate, PLCropOverlayDelegate> {
    PLManagedAsset *_photo;
    struct CGImage { } *_imageRef;
    UIImage *_image;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropRect;
    PLCropOverlay *_cropOverlay;
    PLPhotoTileViewController *_imageTile;
    PLVideoView *_videoView;
    PLVideoRemaker *_remaker;
    PLProgressView *_progressView;
    NSURL *_videoURL;
    long long _previousStatusBarStyle;
    long long _newStatusBarStyle;
    unsigned char _allowEditing : 1;
    unsigned char _statusBarWasHidden : 1;
    unsigned char _isVideo : 1;
    unsigned char _isDisappearing : 1;
    unsigned char _remaking : 1;
}

@property (readonly, nonatomic) NSString *localizedUseButtonTitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prefersStatusBarHidden;
- (unsigned short)imageFormat;
- (void)dealloc;
- (void)setAllowsEditing:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewFrame;
- (Class)_viewClass;
- (void)loadView;
- (id)customBackgroundColor;
- (id)cropOverlay;
- (void)cropOverlayWasOKed:(id)a0;
- (void)handleVideoSelectionWithURL:(id)a0 args:(id)a1;
- (void)handleMediaSelectionUsingTile:(id)a0 managedAsset:(id)a1 args:(id)a2 includeEditing:(BOOL)a3;
- (void)handleAutoloopSelected;
- (BOOL)doNotTranscode;
- (id)exportPreset;
- (BOOL)viewImageBeforeSelecting;
- (BOOL)disableVideoTrimMessage;
- (BOOL)forceNativeScreenScale;
- (BOOL)force1XCroppedImage;
- (id)chooseButtonTitle;
- (id)cancelButtonTitle;
- (id)maxZoomScaleOverride;
- (BOOL)imagePickerAllowsEditing;
- (unsigned long long)imagePickerSavingOptions;
- (BOOL)wantsAutoloopUI;
- (BOOL)wantsLegacyImageUI;
- (BOOL)isDisplayedInPhotoPicker;
- (int)cropOverlayMode;
- (long long)preferredStatusBarUpdateAnimation;
- (void)_enableCropOverlay;
- (void)beginDisplayingProgress;
- (void)_enableCropOverlayIfNecessary;
- (long long)_imagePickerStatusBarStyle;
- (void)_removedAsTopViewController;
- (id)initWithImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithUIImage:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)videoRemakerDidBeginRemaking:(id)a0;
- (void)videoRemakerDidEndRemaking:(id)a0 temporaryPath:(id)a1;
- (id)initWithVideoURL:(id)a0;
- (id)videoMaximumDuration;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewFrame;
- (void)viewDidAppear:(BOOL)a0;
- (id)videoQuality;
- (id)initWithPhoto:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (long long)_preferredWhitePointAdaptivityStyle;
- (BOOL)_displaysFullScreen;
- (void)viewWillLayoutSubviews;
- (void)cropOverlay:(id)a0 didFinishSaving:(id)a1;
- (double)videoViewScrubberYOrigin:(id)a0 forOrientation:(long long)a1;
- (BOOL)videoViewCanBeginPlayback:(id)a0;
- (void)videoViewIsReadyToBeginPlayback:(id)a0;
- (void)videoViewDidBeginPlayback:(id)a0;
- (void)videoViewDidEndPlayback:(id)a0 didFinish:(BOOL)a1;
- (BOOL)videoViewCanCreateMetadata:(id)a0;
- (void)cropOverlayWasCancelled:(id)a0;
- (void)cropOverlayPlay:(id)a0;
- (void)cropOverlayPause:(id)a0;
- (BOOL)photoTileViewControllerIsDisplayingLandscape:(id)a0;
- (unsigned long long)_contentAutoresizingMask;
- (unsigned long long)_tileAutoresizingMask;
- (id)_trimMessage;
- (void)didChooseVideoAtURL:(id)a0 options:(id)a1;
- (BOOL)photoTileViewControllerAllowsEditing:(id)a0;
- (void)photoTileViewController:(id)a0 willAppear:(BOOL)a1;
- (void)photoTileViewController:(id)a0 didAppear:(BOOL)a1;
- (void)photoTileViewController:(id)a0 didDisappear:(BOOL)a1;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)a0;
- (void)photoTileViewControllerRequestsFullSizeImage:(id)a0;
- (void)photoTileViewControllerCancelImageRequests:(id)a0;
- (void)photoTileViewControllerSingleTap:(id)a0;
- (void)photoTileViewControllerDoubleTap:(id)a0;
- (void)photoTileViewControllerWillBeginGesture:(id)a0;
- (void)photoTileViewControllerDidEndGesture:(id)a0;
- (id)initWithImage:(struct CGImage { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setCropOverlayDone;
- (BOOL)clientIsWallpaper;
- (void)setupNavigationItem;
- (BOOL)wantsStatusBarVisible;
- (long long)desiredStatusBarAnimation;
- (void)attachScrubberPalette;
- (void)_editabilityChanged:(id)a0;
- (void)_updateGestureSettings;
- (void)_handleVideoSelected;
- (void)videoView:(id)a0 scrubberWasCreated:(id)a1 slalomRegionEditor:(id)a2;
- (void)videoViewDidPausePlayback:(id)a0 didFinish:(BOOL)a1;

@end
