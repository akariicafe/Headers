@interface PXImportSettings : PXSettings

@property (nonatomic) BOOL importSourceSimulationViaDiagnosticsEnabled;
@property (nonatomic) long long simulatedBatteryLevel;
@property (nonatomic) BOOL simulateEmptyImportSource;
@property (nonatomic) double delayBeforeShowingPreparationAlert;
@property (nonatomic) BOOL simulateLongDiskSpacePreparation;
@property (nonatomic) long long simulatedDiskSpace;
@property (nonatomic) BOOL showImportItemFilenames;
@property (nonatomic) BOOL disableAssetDeletion;
@property (nonatomic) BOOL loadActualThumbnails;
@property (nonatomic) BOOL lazyLoadAllAssets;
@property (nonatomic) BOOL groupItemsByEXIFDate;
@property (nonatomic) BOOL showNewestItemsInGridUntilScrolled;
@property (nonatomic) long long alreadyImportedTruncationMode;
@property (nonatomic) BOOL hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
@property (nonatomic) BOOL longPressForOneUpInCompactMode;
@property (nonatomic) BOOL longPressForOneUpInPadSpec;
@property (nonatomic) BOOL useThumbnailSizesAsImageSizeHints;
@property (nonatomic) BOOL loadRetinaThumbnails;
@property (nonatomic) BOOL alwaysShowCPLOptimizedMessage;
@property (nonatomic) long long assetEnumerationBehavior;
@property (nonatomic) double assetEnumerationBatchInterval;
@property (nonatomic) unsigned long long assetEnumerationBatchSize;
@property (nonatomic) BOOL showProgressTitles;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;

@end
