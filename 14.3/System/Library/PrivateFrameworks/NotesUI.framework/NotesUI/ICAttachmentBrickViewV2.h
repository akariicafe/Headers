@class UIView, NSString, UIImage, ICSearchResult, ICAttachmentBrickFrostedView, NSLayoutConstraint, ICAttachment, NSRegularExpression, ICAttachmentBrickTextViewV2;

@interface ICAttachmentBrickViewV2 : UIView <ICAttachmentBrickAudioPlayerViewV2Delegate>

@property (nonatomic) unsigned long long brickSize;
@property (nonatomic, getter=isFullHeightText) BOOL fullHeightText;
@property (nonatomic) BOOL showAsFileIcon;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) ICAttachmentBrickFrostedView *frostedView;
@property (nonatomic, getter=isFrostedViewActive) BOOL frostedViewActive;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewVerticalConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewTrailingConstraint;
@property (nonatomic) long long fileSizeCache;
@property (copy, nonatomic) NSString *fileSizeStringCache;
@property (nonatomic) BOOL highlightUpdateScheduled;
@property (nonatomic) BOOL usingConstraintsForAXLargerTextSizes;
@property (nonatomic) BOOL layerIsInvertedForAXInvertColors;
@property (retain, nonatomic) ICAttachmentBrickTextViewV2 *textView;
@property (retain, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic) NSString *typeDescriptionForAccessibility;
@property (nonatomic) unsigned long long brickType;
@property (nonatomic) unsigned long long accessoryType;
@property (nonatomic) unsigned long long imageScaling;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic, getter=isVibrant) BOOL vibrant;
@property (nonatomic) BOOL disableImageUpdates;
@property (nonatomic) BOOL disableTextUpdates;
@property (nonatomic) BOOL disableVibrancy;
@property (weak, nonatomic) ICAttachment *attachment;
@property (weak, nonatomic) ICSearchResult *searchResult;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex;
@property (nonatomic) BOOL forceDefaultBrickSize;
@property (nonatomic) unsigned long long defaultBrickSize;
@property (nonatomic) BOOL forManualRendering;
@property (nonatomic) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)audioAttachmentDetail1StringWithDuration:(double)a0 attachment:(id)a1 brick:(id)a2;
+ (unsigned long long)brickTypeForAttachment:(id)a0;
+ (unsigned long long)maximumBrickSizeForAttachment:(id)a0 defaultSize:(unsigned long long)a1;
+ (id)brickInfoForAttachment:(id)a0 brickSize:(unsigned long long)a1 brick:(id)a2;
+ (double)clampAccessoryViewScale:(double)a0 forHorizontalSizeClass:(long long)a1;
+ (struct CGSize { double x0; double x1; })imageSizeForBrickSize:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })brickSizeWithSize:(unsigned long long)a0;

- (void)updateImage;
- (void)contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (void)scaleDidChange;
- (void)dealloc;
- (void)updateConstraints;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)prepareForReuse;
- (BOOL)accessibilityIgnoresInvertColors;
- (id)accessibilityLabel;
- (void)didMoveToWindow;
- (void)updateText;
- (void)layoutSubviews;
- (id)thumbnailCache;
- (void)updateStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateBackgroundImage;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)accessibilityValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBrickSize:(unsigned long long)a1;
- (void)initializeBasicViews;
- (void)attachmentDidLoadNotification:(id)a0;
- (void)attachmentPreviewImagesDidUpdateNotification:(id)a0;
- (void)mediaDidLoadNotification:(id)a0;
- (void)locationContextAuthorizationStatusDidChangeNotification:(id)a0;
- (void)updateContentFromAttachment;
- (void)updateSearchHighlighting;
- (void)updateSearchHighlightingIfNecessary;
- (struct CGSize { double x0; double x1; })computedSize;
- (void)updateVibrancyIfNecessary;
- (id)createTextViewTrailingConstraint;
- (id)backgroundColorForCurrentVibrancy;
- (void)updateAccessoryViewShadow;
- (double)layoutScaling;
- (void)updateAccessoryView;
- (void)updateBrickType;
- (void)layoutBackgroundView;
- (void)layoutAccessoryTypeMapMarker;
- (void)updateForAppearanceChange;
- (void)updateFileSizeCacheStringIfNeeded;
- (void)clearAccessoryView;
- (struct CGSize { double x0; double x1; })computedAccessorySize;
- (double)accessoryViewTopMarginWithAccessorySize:(struct CGSize { double x0; double x1; })a0;
- (void)updateAccessoryViewForAccessibilityInvertColors;
- (double)clampAccessoryViewScale:(double)a0;
- (void)updateSearchHighlightingForAttachmentBrickLabel:(id)a0;
- (void)audioPlayerView:(id)a0 updateTime:(double)a1;
- (void)audioPlayerViewStopped:(id)a0;
- (void)setAttachment:(id)a0 forSearchResult:(id)a1;
- (void)prepareForPrinting;
- (id)quickLookTransitionView;
- (void)accentColorDidChange:(id)a0;

@end
