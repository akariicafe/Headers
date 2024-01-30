@interface PXSharedLibrarySettings : PXSettings

@property (nonatomic) BOOL useAppWideLibraryFilterState;
@property (nonatomic) BOOL showPreviewCancelButton;
@property (nonatomic) BOOL showMoveToLibraryActionsInShareSheet;
@property (nonatomic) BOOL showSharedLibraryAlbum;
@property (nonatomic) BOOL showPersonalLibraryContentOnly;
@property (nonatomic) BOOL showPreviewAssetsOnlyFilter;
@property (nonatomic) BOOL alwaysConfirmMoveToSharedLibrary;
@property (nonatomic) BOOL alwaysConfirmMoveToPersonalLibrary;
@property (nonatomic) BOOL alwaysConfirmRemoveSharedLibrarySuggestion;
@property (nonatomic) BOOL confirmMoveToPersonalLibraryFromSharedLibraryPreview;
@property (nonatomic) BOOL enableIncompleteUIElements;
@property (nonatomic) BOOL enableAutoShareWithParticipants;
@property (nonatomic) BOOL enableOneUpBadge;
@property (nonatomic) BOOL mockPersonSuggestionForSetupAssistant;
@property (nonatomic) long long invitationsDataSourceType;
@property (nonatomic) long long previewDataSourceType;
@property (nonatomic) long long sharedLibraryDataSourceType;
@property (nonatomic) long long exitingDataSourceType;
@property (nonatomic) long long sourceLibraryInfoType;
@property (nonatomic) long long simulateErrorType;
@property (nonatomic) long long sharingSuggestionsBannerUnreadCountThreshold;
@property (nonatomic) double sharingSuggestionsLegibilityStrength;
@property (nonatomic) double sharingSuggestionsMinimumTimeSinceLastBannerDismiss;
@property (nonatomic) double sharingSuggestionsMinimumTimeSinceLastAsset;
@property (nonatomic) BOOL showSampleGadgets;
@property (nonatomic) BOOL showDebugAlbums;
@property (nonatomic) BOOL showDuplicatesFilter;
@property (nonatomic) BOOL alwaysHideDuplicatesInRecentsAndAllPhotos;
@property (nonatomic) BOOL forceLegacyDevicesFallback;
@property (nonatomic) BOOL includeNonLegacyDevicesInFallback;
@property (nonatomic) BOOL simulateSlowLegacyDevicesFetchInFallback;
@property (nonatomic) BOOL simulateLegacyDevicesRemoteFailure;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
