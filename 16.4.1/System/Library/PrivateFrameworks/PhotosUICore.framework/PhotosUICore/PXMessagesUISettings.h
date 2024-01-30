@class NSString, NSArray;

@interface PXMessagesUISettings : PXSettings {
    NSArray *_cachedHorizontalOffsets;
}

@property (nonatomic) long long dataSourceType;
@property (nonatomic) unsigned long long stackedItemsCount;
@property (nonatomic) double normalizedStackSizeTransform;
@property (nonatomic) double normalizedStackVerticalOffset;
@property (nonatomic) double verticalContentInsets;
@property (nonatomic) BOOL enableDebugTapbacksStack;
@property (nonatomic) double rotationAngle;
@property (nonatomic) BOOL applyRotationToFirstAndLast;
@property (nonatomic) double stackShadowYOffset;
@property (nonatomic) double stackShadowBlurRadius;
@property (nonatomic) double stackShadowAlpha;
@property (nonatomic) BOOL renderWithCA;
@property (copy, nonatomic) NSString *horizontalOffsetString;
@property (readonly, nonatomic) NSArray *horizontalOffsets;
@property (nonatomic) double normalizedPageWidth;
@property (nonatomic) long long pagingBehavior;
@property (nonatomic) double pagingVelocityThreshold;
@property (nonatomic) BOOL bestCropRectEnabled;
@property (nonatomic) BOOL aspectTilesEnabled;
@property (nonatomic) double gridShadowXOffset;
@property (nonatomic) double gridShadowYOffset;
@property (nonatomic) double gridShadowBlurRadius;
@property (nonatomic) double gridShadowAlpha;
@property (nonatomic) BOOL enableDebugTapbacksGrid;
@property (nonatomic) double minItemSize;
@property (nonatomic) double comfortableFitPercentage;
@property (nonatomic) long long minColumns;
@property (nonatomic) long long maxColumns;
@property (nonatomic) unsigned long long transitionItemsCount;
@property (nonatomic) double transitionDuration;
@property (nonatomic) double transitionSpringDamping;
@property (nonatomic) double transitionSpringVelocity;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)transientProperties;
+ (void)_showStackBalloonViewWithNavigationController:(id)a0;
+ (id)_assetCollectionItemProvider;

- (id)parentSettings;
- (void)setDefaultValues;
- (void).cxx_destruct;

@end
