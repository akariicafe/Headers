@class UIViewController, SBIconImageView, SBHIconEditingSettings, SBCloseBoxView, NSHashTable, UILabel, NSMutableArray, NSString, SBIcon, UILongPressGestureRecognizer, UIContextMenuInteraction, SBFolderIconImageCache, UIImage, NSArray, _UIStatesFeedbackGenerator, SBFolderIcon, SBHIconImageCache, UIDragInteraction, UIViewPropertyAnimator, UIFocusEffect, NSCountedSet, NSObject, UIView, UIPointerInteraction, SBIconFocusEffectPlatterView, UIFont, SBHRecentsDocumentExtensionProvider, _UILegibilitySettings, UIColor, NSURL, NSDate, UITapGestureRecognizer, SBIconImageCrossfadeView;
@protocol UIFocusEnvironment, SBIconLabelView, SBIconContinuityInfo, UIDragSession, SBIconListLayoutProvider, UIFocusItem, OS_os_activity, SBIconListLayout, SBIconViewDelegate, SBHIconViewConfigurationInteraction, BSInvalidatable, SBIconAccessoryView, SBIconLabelAccessoryView, SBIconViewActionDelegate, SBIconViewSnapshotProviding, UIFocusItemContainer, SBIconViewCustomImageViewControlling;

@interface SBIconView : UIView <UIPointerInteractionDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, UIDragInteractionDelegate, SBCloseBoxViewDelegate, UIContextMenuInteractionDelegate, SBSHardwareButtonEventConsuming, SBHIconViewConfigurationInteractionDelegate, SBIconViewCustomImageViewControllerObserving, SBHFocusProxyable, SBIconObserver, SBReusableView, SBIconAccessoryInfoProvider> {
    SBIcon *_icon;
    SBIconImageView *_iconImageView;
    SBIconImageCrossfadeView *_crossfadeView;
    UIView *_snapshotContainerView;
    UIView *_temporarySnapshotContainerViewForDragPreview;
    UIView<SBIconAccessoryView> *_accessoryView;
    SBCloseBoxView *_closeBox;
    UIView<SBIconLabelView> *_labelView;
    UIView<SBIconLabelAccessoryView> *_labelAccessoryView;
    UIView *_dropGlow;
    SBIconFocusEffectPlatterView *_focusEffectPlatterView;
    SBHIconEditingSettings *_iconEditingSettings;
    UILabel *_iconIndexLabel;
    id<SBIconViewSnapshotProviding> _snapshotProvider;
    unsigned char _drawsLabel : 1;
    unsigned char _isEditing : 1;
    unsigned char _discardClose : 2;
    unsigned char _pauseReasons : 3;
    unsigned char _isGrabbed : 1;
    unsigned char _isOverlapping : 1;
    unsigned char _isFocused : 1;
    unsigned char _refusesRecipientStatus : 1;
    unsigned char _highlighted : 1;
    unsigned char _launchDisabled : 1;
    unsigned char _suppressesDisabledPresentation : 1;
    unsigned char _iconWasTappedWhenDisabled : 1;
    unsigned char _isJittering : 1;
    unsigned char _allowJitter : 1;
    unsigned char _allowCloseBox : 1;
    unsigned char _touchDownInIcon : 1;
    unsigned char _hideLabel : 1;
    unsigned char _hideLabelAccessoryView : 1;
    unsigned char _iconContentScalingEnabled : 1;
    unsigned char _forcingIconContentScalingEnabled : 1;
    unsigned char _startsDragMoreQuickly : 1;
    unsigned char _isDragging : 1;
    unsigned char _isDragLifted : 1;
    unsigned char _folderIconFrozen : 1;
    unsigned char _showingCloseBox : 1;
    unsigned char _allowsAccessoryView : 1;
    unsigned char _allowsProgressState : 1;
    unsigned char _showingAccessoryView : 1;
    unsigned char _allowsLabelArea : 1;
    unsigned char _allowsPassthroughHitTesting : 1;
    unsigned char _showsDropGlow : 1;
    unsigned char _hasSetIconImageInfo : 1;
    unsigned char _showsSquareCorners : 1;
    unsigned char _disableContextMenuInteraction : 1;
    unsigned char _disallowsBlockedForScreenTimeExpiration : 1;
    unsigned char _reallyHasPopover : 2;
    unsigned char _imageLoadingBehavior : 2;
    unsigned char _disallowCursorInteraction : 1;
    unsigned char _customIconImageViewHitTestingDisabled : 1;
    unsigned char _labelStyle : 2;
    unsigned char _allIconElementsButLabelHidden : 1;
    unsigned char _displaysIconStatusInLabel : 1;
    unsigned char _userVisibilityStatus : 2;
    unsigned char _wantsFocusProxyView : 1;
    double _iconContentScale;
    UIView *_scalingContainer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleImageRect;
    NSHashTable *_observers;
    NSCountedSet *_forbidEditingModeReasons;
    NSCountedSet *_forbidAccessoryReasons;
    struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } _iconImageInfo;
    SBHRecentsDocumentExtensionProvider *_recentsDocumentExtensionProvider;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
    NSMutableArray *_performAfterContextMenuBlocks;
    NSHashTable *_droppingAssertions;
    NSHashTable *_contextMenuInteractionConfigurations;
    NSHashTable *_dismissingContextMenuInteractionConfigurations;
    NSObject<OS_os_activity> *_iconContextMenuActivity;
    struct os_activity_scope_state_s { unsigned long long opaque[2]; } _iconContextMenuActivityState;
    NSCountedSet *_activePointerRegions;
    unsigned long long _fetchedSupportedMedusaKeyboardShortcuts;
}

@property (class, readonly, nonatomic) Class contentContainerViewClass;
@property (class, readonly, copy, nonatomic) NSString *defaultIconLocation;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } defaultIconImageSize;
@property (class, readonly, nonatomic) double defaultIconImageCornerRadius;
@property (class, readonly, nonatomic) BOOL supportsDragInteraction;
@property (class, readonly, nonatomic) BOOL supportsPreviewInteraction;
@property (class, readonly, nonatomic) BOOL supportsTapGesture;
@property (class, readonly, nonatomic) BOOL supportsCursorInteraction;
@property (class, readonly, nonatomic) double iconLiftAlpha;
@property (class, readonly, nonatomic) BOOL allowsLabelAccessoryView;
@property (class, readonly, nonatomic) unsigned long long defaultImageLoadingBehavior;

@property (readonly, nonatomic) UIView *contentContainerView;
@property (readonly, nonatomic) UIDragInteraction *dragInteraction;
@property (weak, nonatomic) id<UIDragSession> liftingDragSession;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (copy, nonatomic) NSDate *lastTouchDownDate;
@property (retain, nonatomic) UIViewPropertyAnimator *accessoryViewAnimator;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (readonly, nonatomic) long long displayedLabelAccessoryType;
@property (readonly, nonatomic) UILongPressGestureRecognizer *editingModeGestureRecognizer;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (retain, nonatomic) id<BSInvalidatable> homeButtonPressConsumingAssertion;
@property (nonatomic) BOOL lastContextMenuInteractionFailedToLoad;
@property (retain, nonatomic) id<SBHIconViewConfigurationInteraction> currentConfigurationInteraction;
@property (retain, nonatomic) id<SBHIconViewConfigurationInteraction> currentStackConfigurationInteraction;
@property (readonly, nonatomic) UIPointerInteraction *iconViewCursorInteraction;
@property (readonly, nonatomic) UIPointerInteraction *closeBoxCursorInteraction;
@property (readonly, nonatomic) UIPointerInteraction *accessoryViewCursorInteraction;
@property (retain, nonatomic) UIViewPropertyAnimator *closeBoxAnimator;
@property (copy, nonatomic) NSArray *fetchedApplicationShortcutItems;
@property (readonly, copy, nonatomic) NSString *representedFolderIconLocation;
@property (readonly, nonatomic) BOOL canBeginDrags;
@property (readonly, nonatomic) BOOL shouldTapGestureRecognizeAlongsideDragInteractionGestures;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierForShortcuts;
@property (readonly, copy, nonatomic) NSURL *applicationBundleURLForShortcuts;
@property (readonly, copy, nonatomic) NSArray *effectiveApplicationShortcutItems;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maxLabelSize;
@property (nonatomic) long long labelStyle;
@property (nonatomic) BOOL displaysIconStatusInLabel;
@property (retain, nonatomic) SBIcon *icon;
@property (weak, nonatomic) id<SBIconViewDelegate> delegate;
@property (weak, nonatomic) id<SBIconViewActionDelegate> overrideActionDelegate;
@property (copy, nonatomic) NSString *location;
@property (nonatomic) unsigned long long configurationOptions;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double iconImageAlpha;
@property (readonly, nonatomic) double effectiveIconImageAlpha;
@property (nonatomic) double iconAccessoryAlpha;
@property (nonatomic) double iconLabelAlpha;
@property (nonatomic) BOOL allIconElementsButLabelHidden;
@property (copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, nonatomic) BOOL shouldShowLabelAccessoryView;
@property (readonly, nonatomic) BOOL allowsLabelAccessoryView;
@property (readonly, nonatomic) long long currentLabelAccessoryType;
@property (readonly, nonatomic) double labelAccessoryTotalWidth;
@property (nonatomic, getter=isLabelAccessoryHidden) BOOL labelAccessoryHidden;
@property (readonly, nonatomic) double baselineOffsetFromBottom;
@property (readonly, nonatomic) double firstLineBaseline;
@property (readonly, nonatomic) double lastLineBaseline;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL allowsEditingAnimation;
@property (nonatomic) double editingAnimationStrength;
@property (nonatomic) BOOL allowsCloseBox;
@property (readonly, nonatomic) BOOL canShowCloseBox;
@property (readonly, nonatomic) BOOL shouldShowCloseBox;
@property (readonly, nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (nonatomic) BOOL allowsBlockedForScreenTimeExpiration;
@property (readonly, nonatomic) UIImage *iconImageSnapshot;
@property (readonly, nonatomic) UIView *iconImageSnapshotView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } iconImageFrame;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } iconImageCenter;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconImageVisibleSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconImageSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconViewSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cursorHitTestPadding;
@property (readonly, nonatomic) BOOL isCursorActive;
@property (readonly, nonatomic) BOOL allowsTapWhileEditing;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL allowsLabelArea;
@property (nonatomic) BOOL allowsPassthroughHitTesting;
@property (nonatomic, getter=isCustomIconImageViewHitTestingDisabled) BOOL customIconImageViewHitTestingDisabled;
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden;
@property (nonatomic) BOOL showsSquareCorners;
@property (readonly, nonatomic, getter=isTouchDownInIcon) BOOL touchDownInIcon;
@property (nonatomic, getter=isGrabbed) BOOL grabbed;
@property (readonly, nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic) BOOL showsImageAndLabelDuringDrop;
@property (readonly, nonatomic) UIView *dropContainerView;
@property (nonatomic) BOOL refusesRecipientStatus;
@property (readonly, nonatomic) BOOL showsDropGlow;
@property (readonly, getter=isCrossfadingImageWithView) BOOL crossfadingImageWithView;
@property (readonly, nonatomic) UIView<SBIconLabelView> *labelView;
@property (retain, nonatomic) UIFont *labelFont;
@property (readonly, nonatomic) long long currentAccessoryType;
@property (nonatomic) BOOL allowsAccessoryView;
@property (readonly, nonatomic) BOOL shouldShowAccessoryView;
@property (readonly, nonatomic) BOOL canShowAccessoryView;
@property (readonly, nonatomic) long long continuityBadgeType;
@property (retain, nonatomic) id<SBIconContinuityInfo> continuityInfo;
@property (nonatomic) double iconContentScale;
@property (nonatomic, getter=isIconContentScalingEnabled) BOOL iconContentScalingEnabled;
@property (nonatomic) BOOL startsDragMoreQuickly;
@property (readonly, nonatomic) double dragInteractionLiftDelay;
@property (readonly, nonatomic) Class expectedIconImageViewClass;
@property (nonatomic) unsigned long long customIconImageViewControllerPriority;
@property (readonly, nonatomic) UIViewController<SBIconViewCustomImageViewControlling> *customIconImageViewController;
@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, nonatomic) id<SBIconListLayout> listLayout;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } iconImageInfo;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (retain, nonatomic) SBFolderIcon *folderIcon;
@property (nonatomic) unsigned long long folderBackgroundStyle;
@property (retain, nonatomic) UIView *folderIconBackgroundView;
@property (nonatomic, getter=isFolderIconFrozen) BOOL folderIconFrozen;
@property (readonly, nonatomic) unsigned long long visibleMiniIconCount;
@property (readonly, nonatomic) unsigned long long visibleMiniIconListIndex;
@property (readonly, nonatomic) unsigned long long firstVisibleMiniIconIndex;
@property (readonly, nonatomic) unsigned long long centerVisibleMiniIconIndex;
@property (readonly, nonatomic) unsigned long long lastVisibleMiniIconIndex;
@property (readonly, nonatomic, getter=isAnimatingScrolling) BOOL animatingScrolling;
@property (retain, nonatomic) UIColor *accessibilityTintColor;
@property (readonly, nonatomic) long long progressState;
@property (nonatomic) BOOL allowsProgressState;
@property (readonly, nonatomic) BOOL supportsConfigurationCard;
@property (readonly, nonatomic, getter=isShowingConfigurationCard) BOOL showingConfigurationCard;
@property (readonly, nonatomic) BOOL supportsStackConfigurationCard;
@property (readonly, nonatomic, getter=isShowingStackConfigurationCard) BOOL showingStackConfigurationCard;
@property (nonatomic) unsigned long long imageLoadingBehavior;
@property (nonatomic) unsigned long long debugIconIndex;
@property (nonatomic) BOOL iconImageSizeMatchesBoundsSize;
@property (readonly, copy, nonatomic) NSString *backgroundViewGroupNameBase;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long horizontal; unsigned long long vertical; } approximateLayoutPosition;
@property (readonly, nonatomic) UIView<UIFocusItem> *focusProxyView;
@property (nonatomic) BOOL wantsFocusProxyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, nonatomic) long long focusGroupPriority;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;

+ (Class)defaultViewClassForAccessoryType:(long long)a0;
+ (id)draggedItemBundleIdentifiersInDrag:(id)a0;
+ (id)homeScreenService;
+ (id)_jitterYTranslationAnimationWithStrength:(double)a0;
+ (id)_jitterXTranslationAnimationWithAmount:(double)a0;
+ (id)applicationIconSplitViewMenu;
+ (struct CGSize { double x0; double x1; })defaultIconViewSizeForIconImageSize:(struct CGSize { double x0; double x1; })a0 configurationOptions:(unsigned long long)a1;
+ (struct CGPoint { double x0; double x1; })defaultIconImageCenterForIconImageSize:(struct CGSize { double x0; double x1; })a0;
+ (void)setDebugContinuityBadgeType:(id)a0;
+ (long long)closeBoxTypeForView:(id)a0;
+ (id)labelConfigurationForListLayout:(id)a0 contentSizeCategory:(id)a1 options:(unsigned long long)a2;
+ (long long)continuityBadgeTypeForNSString:(id)a0;
+ (Class)_closeBoxClassForType:(long long)a0;
+ (long long)debugContinuityBadgeType;
+ (BOOL)_alwaysShowsAccessoryOfType:(long long)a0;
+ (id)applicationShortcutService;
+ (id)_jitterRotationAnimationWithAmount:(double)a0;
+ (struct CGSize { double x0; double x1; })maxLabelSizeForListLayout:(id)a0 contentSizeCategory:(id)a1 options:(unsigned long long)a2;
+ (id)_jitterXTranslationAnimationWithStrength:(double)a0;
+ (double)defaultMaxLabelWidthDeltaForContentSizeCategory:(id)a0;
+ (void)configureLabelImageParametersBuilder:(id)a0 forIcon:(id)a1 location:(id)a2;
+ (id)defaultLegibilitySettings;
+ (struct CGSize { double x0; double x1; })defaultIconViewSize;
+ (id)dragContextForDragItem:(id)a0;
+ (BOOL)showsPopovers;
+ (struct CGSize { double x0; double x1; })maxLabelSizeForIconImageSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })maxLabelSizeForListLayout:(id)a0 iconImageSize:(struct CGSize { double x0; double x1; })a1 contentSizeCategory:(id)a2 options:(unsigned long long)a3;
+ (double)_defaultDragInteractionLiftDelay;
+ (struct CGSize { double x0; double x1; })maxLabelSizeForIconImageSize:(struct CGSize { double x0; double x1; })a0 contentSizeCategory:(id)a1 options:(unsigned long long)a2;
+ (long long)defaultWidgetBackgroundRecipe;
+ (long long)continuityBadgeTypeForContinuityInfo:(id)a0;
+ (double)defaultMaxLabelHeight;
+ (void)activateShortcut:(id)a0 withBundleIdentifier:(id)a1 forIconView:(id)a2;
+ (BOOL)_shouldAlwaysHaveContentContainerView;
+ (BOOL)isIconTapGestureRecognizer:(id)a0;
+ (id)_jitterRotationAnimationWithStrength:(double)a0;
+ (id)componentBackgroundViewOfType:(long long)a0 compatibleWithTraitCollection:(id)a1 initialWeighting:(double)a2;
+ (double)labelAccessoryViewAdditionalRightMarginForType:(long long)a0;
+ (double)_labelHeight;
+ (id)componentBackgroundViewOfType:(long long)a0;
+ (double)labelAccessoryViewBaseRightMargin;
+ (id)componentBackgroundView;
+ (id)applicationIconMultitaskingMenu;
+ (Class)defaultViewClassForLabelAccessoryType:(long long)a0;
+ (id)groupNameBaseForComponentBackgroundViewOfType:(long long)a0;
+ (id)_jitterYTranslationAnimationWithAmount:(double)a0;
+ (double)defaultIconImageScale;

- (void)_applyOverallAlpha:(double)a0;
- (void)_removeJitter;
- (void)dragSessionWillBegin:(id)a0;
- (void)removeDroppingAssertion:(id)a0;
- (double)effectiveOverallAlpha;
- (void)_registerForAddWidgetRequestsIfNecessary;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)configurationInteractionDidEnd:(id)a0;
- (void)_destroyAccessoryView:(id)a0;
- (void)_updateCustomIconImageViewController:(BOOL)a0;
- (id)reuseDelegate;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setDragging:(BOOL)a0;
- (void)dragInteraction:(id)a0 session:(id)a1 willEndWithOperation:(unsigned long long)a2;
- (void)configureLabelImageParametersBuilder:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (long long)_widgetBackgroundMaterialForDataSource:(id)a0;
- (void)scrollToGapOrTopIfFullOfPage:(unsigned long long)a0 animated:(BOOL)a1;
- (BOOL)_shouldShowLabel;
- (id)_pointerStyleForAppIcon;
- (void)layoutSubviews;
- (BOOL)isLabelTextBold;
- (void)earlyTerminateContextMenuDismissAnimation;
- (void)setFloatyFolderCrossfadeFraction:(double)a0;
- (void)updateCustomIconImageViewController;
- (id)_labelImageParameters;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)dragSession:(id)a0 willEndWithOperation:(unsigned long long)a1;
- (BOOL)_hideIconLabelForContextMenu;
- (double)_labelBaselineOffsetFromImage;
- (void)configureForLabelAllowed:(BOOL)a0;
- (void)endForbiddingAccessoryWithReason:(id)a0 animated:(BOOL)a1;
- (void)clearIconImageInfo;
- (void)_invalidateHomeButtonPressConsumingAssertion;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void)presentConfigurationCard;
- (id)_pointerStyleForWidgetIcon;
- (void)_refreshAccessoryViewNotification:(id)a0;
- (void)_closeBoxTapGestureChanged:(id)a0;
- (void)setLocation:(id)a0 animated:(BOOL)a1;
- (void)setDragging:(BOOL)a0 updateImmediately:(BOOL)a1;
- (void)consumeSinglePressUpForButtonKind:(long long)a0;
- (double)effectiveIconAccessoryAlpha;
- (BOOL)_isForcingIconContentScalingEnabled;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_handleMakeSplitRightKeyShortcut:(id)a0;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (id)matchingIconViewWithConfigurationOptions:(unsigned long long)a0;
- (void)dragInteraction:(id)a0 session:(id)a1 willAddItems:(id)a2 forInteraction:(id)a3;
- (void)dragInteraction:(id)a0 session:(id)a1 didEndWithOperation:(unsigned long long)a2;
- (void)_updateAllComponentAlphas;
- (void)_updateLaunchDisabled;
- (void)iconImageViewDidEndAsynchronousImageLoadForIcon:(id)a0;
- (id)configurationUIDelegate;
- (void)_notifyObserversSizeDidChange;
- (id)initWithConfigurationOptions:(unsigned long long)a0 listLayoutProvider:(id)a1;
- (void)cleanupAfterCrossfade;
- (BOOL)_isFolderIconFreezingSupported;
- (void)setBackgroundAndIconGridImageAlpha:(double)a0;
- (void)setCrossfadeViewFadeFraction:(double)a0;
- (id)newCaptureOnlyBackgroundView;
- (void)setCrossfadeCornerRadius:(double)a0;
- (void)cleanupAfterFloatyFolderCrossfade;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleImageRelativeFrameForMiniIconAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLabel;
- (void)setIconFadeFraction:(double)a0;
- (id)pauseReasonsDescriptions;
- (void)_updateProgressAnimated:(BOOL)a0;
- (void)dismissStackConfigurationCard;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBoundingRectForConfigurationInteraction:(id)a0;
- (void)startForbiddingAccessoryWithReason:(id)a0 animated:(BOOL)a1;
- (void)_applyIconContentScale:(double)a0;
- (BOOL)_hideIconLabelForCustomIconImageViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLabelAccessoryViewWithLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 labelImage:(id)a1 labelImageParameters:(id)a2 imageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_setForcingIconContentScalingEnabled:(BOOL)a0;
- (void)_addJitter;
- (void)_createCloseBoxIfNecessary;
- (void)_handleMakeFullscreenKeyShortcut:(id)a0;
- (void)setDragLifted:(BOOL)a0;
- (BOOL)_isShowingAccessoryView;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setDisallowCursorInteraction:(BOOL)a0;
- (void)setShowsDropGlow:(BOOL)a0 animator:(id)a1;
- (void)_handleMakeSplitLeftKeyShortcut:(id)a0;
- (long long)draggingStartLocation;
- (void)_dragInteraction:(id)a0 liftAnimationDidChangeDirection:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForImageView;
- (void)_insertIconImageView:(id)a0;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)a0 allowFolderInteraction:(BOOL)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_handleAddWidgetRequest:(id)a0;
- (void)_fetchApplicationShortcutItemsIfAppropriate;
- (void)performAfterContextMenusDismissUsingBlock:(id /* block */)a0;
- (void)endForbiddingEditingModeWithReason:(id)a0;
- (id)representativeIconViewForModalInteractions;
- (void)editingModeGestureRecognizerDidFire:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (BOOL)_isCursorInteractionEnabled;
- (void)_updateFrameToIconViewSize;
- (void)_enableContentContainerView;
- (id)referenceIconViewForConfigurationInteraction:(id)a0;
- (BOOL)focusProxyCanBecomeFocused;
- (id)labelImageWithParameters:(id)a0;
- (void)configurationInteractionWillBegin:(id)a0;
- (void)_updateLabel;
- (void)_disableContentContainerView;
- (double)effectiveBrightness;
- (void)_updateCloseBoxAnimated:(BOOL)a0;
- (id)_legibilitySettingsWithParameters:(id)a0;
- (void)_updateDragInteractionLiftDelay;
- (void)configureMatchingIconView:(id)a0;
- (void)purgeCachedEditingViewData;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLabelHighlight;
- (void)iconImageDidUpdate:(id)a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (id)labelConfiguration;
- (void)_updateIconContentScale;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)setContinuityInfo:(id)a0 animated:(BOOL)a1;
- (void)_contextMenuConfigurationWillDismiss:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)addObserver:(id)a0;
- (id)draggingLaunchActions;
- (struct CGPoint { double x0; double x1; })_focusEffectCenter;
- (void)_unregisterForAddWidgetRequests;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (BOOL)_debugContinuity;
- (BOOL)shouldActivateApplicationShortcutItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObserver:(id)a0;
- (id)_legibilitySettingsWithStyle:(long long)a0 primaryColor:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)dragInteraction:(id)a0 sessionIsRestrictedToDraggingApplication:(id)a1;
- (void)customImageViewControllerWantsLabelHiddenDidChange:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)effectiveListLayoutProvider;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isDragging;
- (BOOL)_shouldEnableGroupBlending;
- (void)_animateCloseBoxWithAnimation:(long long)a0 animationBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusEffectBoundsForFocused:(BOOL)a0 withFocusOutset:(double)a1;
- (id)dragDelegate;
- (void)_contextMenuConfigurationDidPresent:(id)a0;
- (void)_contextMenuConfigurationWillPresent:(id)a0 forInteraction:(id)a1;
- (id)folder;
- (id)shortcutsDelegate;
- (void)setupFocusEffectPlatterView;
- (void)setMorphFraction:(double)a0;
- (void)setPaused:(BOOL)a0 forReason:(unsigned long long)a1;
- (void)_createAccessoryViewIfNecessary;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)performTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissStackConfigurationCardImmediately;
- (void)_handleActivateAppExposeKeyShortcut:(id)a0;
- (void)_updateAfterManualIconImageInfoChange;
- (BOOL)_contextMenuInteractionShouldAllowDragAfterDismiss:(id)a0;
- (void)configurationInteractionWillEnd:(id)a0;
- (void)popConfigurationCard;
- (BOOL)isFolderIcon;
- (void)_updateConfigurationForIconImageView:(id)a0;
- (id)_medusaAppShortcutService;
- (void)cancelDragLift;
- (id)_automationID;
- (id)initWithConfigurationOptions:(unsigned long long)a0;
- (void)dragSession:(id)a0 didEndWithOperation:(unsigned long long)a1;
- (id)dragItems;
- (void)_accessoryViewTapGestureChanged:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canReceiveGrabbedIcon:(id)a0;
- (void)_delegateTouchEnded:(BOOL)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_updateAllComponentAlphasAnimated:(BOOL)a0;
- (void)setBoundsSizeFromIconImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)dismissConfigurationCardImmediately;
- (void)_updateLabelArea;
- (void)_destroyIconImageView;
- (void)_handleTap;
- (struct CGPoint { double x0; double x1; })_centerForAccessoryView;
- (id)dragPreviewForItem:(id)a0 session:(id)a1;
- (void)setShowsFocusEffect:(BOOL)a0;
- (id)newComponentBackgroundViewOfType:(long long)a0;
- (void)dismissConfigurationCard;
- (void)configurationInteractionDidCommit:(id)a0;
- (void)_contextMenuConfigurationDidDismiss:(id)a0;
- (id)_makeIconImageView;
- (BOOL)_dragInteraction:(id)a0 shouldDelayCompetingGestureRecognizer:(id)a1;
- (id)_labelImage;
- (void)setIconImageAndAccessoryAlpha:(double)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)closeBoxShouldTrack:(id)a0;
- (id)succinctDescription;
- (void)prepareToCrossfadeImageWithView:(id)a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1 options:(unsigned long long)a2;
- (id)actionDelegate;
- (BOOL)_dragInteraction:(id)a0 competingGestureRecognizerShouldDelayLift:(id)a1;
- (void)updateParallaxSettings;
- (id)prepareForIconDrop;
- (void)_configureLabelAccessoryViewForType:(long long)a0;
- (void)_applyIconAccessoryAlpha:(double)a0;
- (id)displayedLabelFont;
- (void)scrollToTopOfFirstPageAnimated:(BOOL)a0;
- (double)iconImageCornerRadius;
- (id)_visiblyActiveDataSource;
- (void)_recursiveNotifyInteractionTintColorDidChangeForReasons:(unsigned long long)a0;
- (void)setTouchDownInIcon:(BOOL)a0;
- (void)_applyEditingStateAnimated:(BOOL)a0;
- (void)_updateCustomIconImageViewControllerHitTesting;
- (void)_fetchSupportedMedusaShortcutActionsIfAppropriate;
- (void)cancelDrag;
- (struct CGSize { double x0; double x1; })iconViewSizeForIconImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)_legibilitySettingsWithPrimaryColor:(id)a0;
- (void)removeAllIconAnimations;
- (void)popStackConfigurationCard;
- (void)startForbiddingEditingModeWithReason:(id)a0;
- (struct CGSize { double x0; double x1; })accessorySize;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)_updateAccessoryViewAnimated:(BOOL)a0;
- (void)_removeUnknownSubviews;
- (id)sourceIconViewForConfigurationInteraction:(id)a0;
- (id)currentImageView;
- (id)badgeString;
- (void)_updateCursorInteractionsEnabled;
- (void)setCrossfadeFraction:(double)a0;
- (void)_applyIconImageAlpha:(double)a0;
- (void)_configureViewAsFolderIconImageView:(id)a0;
- (void)_configureIconImageView:(id)a0;
- (BOOL)_delegateTapAllowed;
- (void)_updateCloseBoxWithAnimation:(long long)a0;
- (id)behaviorDelegate;
- (void)dragInteraction:(id)a0 item:(id)a1 willAnimateCancelWithAnimator:(id)a2;
- (void)setIconGridImageAlpha:(double)a0;
- (void)configurationInteractionDidBegin:(id)a0;
- (id)tintColor;
- (void)_acquireHomeButtonPressConsumingAssertionIfNecessary;
- (double)_labelVerticalOffset;
- (void)_recursivelyUpdateBackdropMaskFrames;
- (unsigned long long)supportedIconGridSizeClasses;
- (void)_setShowingAccessoryView:(BOOL)a0;
- (id)containerViewControllerForConfigurationInteraction:(id)a0;
- (void)_setShowingCloseBox:(BOOL)a0;
- (void)prepareToCrossfadeImageWithView:(id)a0 options:(unsigned long long)a1;
- (id)_folderIconImageView;
- (BOOL)_isShowingCloseBox;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusEffectBounds;
- (void)_boldTextStatusDidChange:(id)a0;
- (void)_applyIconEditingSettings;
- (void)cleanUpAfterDropAnimation;
- (id)badgeParallaxSettings;
- (id)_contextMenuInteraction:(id)a0 overrideSuggestedActionsForConfiguration:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForVisibleImage;
- (BOOL)disallowCursorInteraction;
- (void)iconImageViewWillBeginAsynchronousImageLoadForIcon:(id)a0;
- (void)setIcon:(id)a0 animated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_centerForCloseBox;
- (void)setCustomIconImageViewController:(id)a0;
- (double)effectiveIconLabelAlpha;
- (id)_iconImageView;
- (void)_setTemporarySnapshotViewForDragPreview:(id)a0;
- (BOOL)_shouldHaveContentContainerView;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)scrollToFirstGapAnimated:(BOOL)a0;
- (id)markAsDropping;
- (void)scrollToTopOfPage:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_checkAndRemoveCloseBoxAfterAnimation;
- (void)_updateIconImageViewAnimated:(BOOL)a0;
- (void)_destroyAccessoryView;
- (BOOL)isTimedOut;
- (void)dismissContextMenuWithCompletion:(id /* block */)a0;
- (id)_contextMenuInteraction:(id)a0 previewForIconWithConfigurationOptions:(unsigned long long)a1 highlighted:(BOOL)a2;
- (BOOL)_hasPopover;
- (void)_backgroundContrastDidChange:(id)a0;
- (id)draggingLaunchURL;
- (id)matchingIconViewByAddingConfigurationOptions:(unsigned long long)a0 removingConfigurationOptions:(unsigned long long)a1;
- (long long)_closeBoxType;
- (BOOL)isContextMenuInteractionActive;
- (void)_updateLabelAccessoryView;
- (void)_applyIconLabelAlpha:(double)a0;
- (void)addGesturesAndInteractionsIfNecessary;
- (void)_toggleContentContainerViewIfNecessary;
- (id)_pointerStyleForLibraryAdditionalItemsIndicatorIcon;
- (double)_additionalLiftScale;
- (BOOL)_dragInteraction:(id)a0 canExcludeCompetingGestureRecognizer:(id)a1;
- (void)iconInteractedWhenDisabled;
- (BOOL)_selfOrCustomViewCanBecomeFocused;
- (id)homeScreenContentViewForConfigurationInteraction:(id)a0;
- (void)tapGestureDidChange:(id)a0;
- (void)presentStackConfigurationCard;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)_toggleGroupBlendingIfNecessary;
- (void)setAllowsCloseBox:(BOOL)a0 withAnimation:(long long)a1;
- (BOOL)isDragLifted;
- (void)_updateJitter;
- (id)recentsDocumentExtensionProvider;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForMiniIconAtIndex:(unsigned long long)a0;
- (void)_updateBrightness;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)iconLaunchEnabledDidChange:(id)a0;
- (double)_continuousCornerRadius;
- (id)dragInteraction:(id)a0 previewForCancellingItem:(id)a1 withDefault:(id)a2;
- (BOOL)canBecomeFirstResponder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)dragInteraction:(id)a0 sessionForAddingItems:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)prepareForReuse;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (id)contentSizeCategory;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dragInteraction:(id)a0 willAnimateLiftWithAnimator:(id)a1 session:(id)a2;
- (void)dealloc;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)dragInteraction:(id)a0 itemsForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)iconAccessoriesDidUpdate:(id)a0;

@end
