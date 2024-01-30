@interface PUPhotosGridSettings : PXSettings

@property (nonatomic) double defaultItemSideSize;
@property (nonatomic) double maximumSpacing;
@property (nonatomic) BOOL badgeAllItemsAsFavorites;
@property (nonatomic) BOOL displayAllItemsAsBursts;
@property (nonatomic) BOOL allowDynamicDetailsTitles;
@property (nonatomic) double simulatedDetailsAttributesLoadingDelay;
@property (nonatomic) BOOL forceJPEGThumbnailsInDefaultGrid;
@property (nonatomic) long long numberColumnsInDefaultGrid;
@property (nonatomic) long long numberOfColumnsInWideGrid;
@property (nonatomic) BOOL flashDegradedImages;
@property (nonatomic) BOOL useFloatingHeaders;
@property (nonatomic, getter=isSwipeSelectionEnabled) BOOL swipeSelectionEnabled;
@property (nonatomic) double magnifierRevealPreviewScale;
@property (nonatomic) double previewRevealProgressToFreezeMagnifier;
@property (nonatomic) double minimumDistanceToUnfreeze;
@property (nonatomic) BOOL shouldExitEditingModeAfterDuplication;
@property (nonatomic) BOOL showTimelineScrubbers;
@property (nonatomic) double leftScrubberRate;
@property (nonatomic) double rightScrubberRate;
@property (nonatomic) long long globalFooterVisibility;
@property (nonatomic) BOOL simulateGlobalFooterImportantInformationUpdates;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
