@interface PXSharingSettings : PXSettings

@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long firstRotationAngle;
@property (nonatomic) unsigned long long rotationAngle;
@property (nonatomic) unsigned long long verticalAdjustment;
@property (nonatomic) unsigned long long maximumNumberOfItems;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double minShadowOffset;
@property (nonatomic) double maxShadowOffset;
@property (nonatomic) BOOL showConfidentialityWarnings;
@property (nonatomic) BOOL disableMailDrop;
@property (nonatomic) unsigned long long maxMessagesAssetLimit;
@property (nonatomic) unsigned long long maxMailPhotoLimit;
@property (nonatomic) BOOL showInternalGIFExport;
@property (nonatomic) BOOL forceNonCMMActivitiesToBeVisibleForCMM;
@property (nonatomic) unsigned long long confidentialityWarningsVersion;
@property (nonatomic) BOOL sharingSuggestionsWidgetAllStreamEnabled;
@property (nonatomic) BOOL sharingSuggestionsWidgetHeuristicsEnabled;
@property (nonatomic) BOOL sharingSuggestionsWidgetLearningEnabled;
@property (nonatomic) BOOL sharingSuggestionsWidgetCoreDuetEnabled;
@property (nonatomic) BOOL enableNewActionContextMenu;
@property (nonatomic) BOOL enableNewActionShareSheet;
@property (nonatomic) BOOL enableOneUpAnimation;
@property (nonatomic) BOOL allowFallbacksWhilePreparing;
@property (nonatomic) long long locationBakingComparisonStrategy;
@property (nonatomic) BOOL disableMetadataCorrections;
@property (nonatomic) BOOL forceDateTimeMetadataBaking;
@property (nonatomic) BOOL forceLocationMetadataBaking;
@property (nonatomic) BOOL forceCaptionMetadataBaking;
@property (nonatomic) BOOL forceAccessibilityDescriptionMetadataBaking;
@property (nonatomic) BOOL sendAssetURLsToMessages;
@property (nonatomic) BOOL simulateError;
@property (nonatomic) BOOL simulateDownloadFailure;
@property (nonatomic) BOOL simulateCPLNotReadyError;
@property (nonatomic) BOOL simulateLowDiskSpaceError;
@property (nonatomic) BOOL simulateUserCloudNotAuthenticated;
@property (nonatomic) BOOL simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
@property (nonatomic) BOOL simulateSyndicatedResourceUnavailable;
@property (nonatomic) BOOL simulateMismatchedExportCounts;
@property (nonatomic) BOOL showFileRadarButtonOnInternalInstalls;
@property (nonatomic) long long simulatedErrorType;
@property (nonatomic) BOOL showSingleVideoDurationInShareSheetHeader;
@property (nonatomic) BOOL showLivePhotoCountInShareSheetHeader;
@property (nonatomic) long long sharingHeaderLocationDisplayStyle;
@property (nonatomic) BOOL showSecondaryActionSheet;
@property (nonatomic) BOOL showGlobalLivenessExclusionSwitch;
@property (nonatomic) BOOL showGlobalLocationExclusionSwitch;
@property (nonatomic) BOOL excludeLivenessByDefaultWhenSharing;
@property (nonatomic) BOOL excludeLocationByDefaultWhenSharing;
@property (nonatomic) BOOL showSendAsOriginalsForCMM;
@property (nonatomic) BOOL showSendAsOriginalsForIndividualItems;
@property (nonatomic) BOOL sendAsOriginalsByDefaultWhenSharing;
@property (nonatomic) BOOL savePhotosBundlesToFilesWithoutExtractingMedia;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (void)defaultValueDidChangeForKey:(id)a0;
- (id)debugDescription;

@end
