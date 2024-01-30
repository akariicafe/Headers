@interface PUPhotoEditViewControllerSpec : PUViewControllerSpec

@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } previewViewInsetsPortrait;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } previewViewInsetsLandscape;
@property (readonly, nonatomic) double toolbarLongSideMargin;
@property (readonly, nonatomic) double toolbarLongSideWideMargin;
@property (readonly, nonatomic) BOOL shouldDisplaySecondaryToolButtonsInMainToolbar;
@property (readonly, nonatomic) BOOL shouldDisplayExtensionButtonInMainToolbar;
@property (readonly, nonatomic) BOOL shouldDisplayCompactToolbar;
@property (readonly, nonatomic) BOOL shouldAnchorLightingAgainstToolbar;
@property (readonly, nonatomic) BOOL shouldUseCompactToolbarSpacing;
@property (readonly, nonatomic) BOOL shouldAllowApertureButtonExpansion;
@property (readonly, nonatomic) BOOL toolbarShadows_shouldShowToolbarUnderline;

@end
