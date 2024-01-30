@class TSKApplicationICloudPreferences, TSKApplicationPropertiesProvider, NSArray, NSString, NSDate;

@interface TSKApplicationDelegate : NSObject

@property (class, readonly, nonatomic) TSKApplicationDelegate *sharedDelegate;
@property (class, readonly, nonatomic) TSKApplicationPropertiesProvider *sharedPropertiesProvider;
@property (class, readonly, nonatomic) TSKApplicationICloudPreferences *sharedICloudPreferences;

@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (readonly, nonatomic) BOOL tableCellInspectorShowsNaturalAlignment;
@property (readonly, nonatomic) BOOL textInspectorShowsMoreSubpane;
@property (readonly, nonatomic) Class propertiesProviderClass;
@property (readonly, nonatomic) Class iCloudPreferencesProviderClass;
@property (readonly, getter=isActivating) BOOL activating;
@property (readonly, getter=isInBackground) BOOL inBackground;
@property (readonly, nonatomic) BOOL performanceModeEnabled;
@property (readonly, nonatomic) BOOL supportsPastingIntoGroups;
@property (readonly, nonatomic) BOOL supportsFreehandAnimationUI;
@property (readonly, nonatomic) BOOL supportsCommentsInMasters;
@property (readonly, nonatomic) NSArray *availableLanguages;
@property (readonly, nonatomic) NSString *initialInputLanguage;
@property (readonly, nonatomic) BOOL supportsLinkedTextBoxes;
@property (readonly, nonatomic) BOOL imageGalleryCaptionsUsePlaceholderText;
@property (readonly, nonatomic) BOOL supportsImageGalleryHyperlinks;
@property (readonly, nonatomic) BOOL supportsMovieHyperlinks;
@property (readonly, nonatomic) double minOperationStorageEntryAge;
@property (readonly, nonatomic) unsigned long long maxOperationStorageSize;
@property (readonly, nonatomic) unsigned long long smallOperationStorageSize;
@property (readonly, nonatomic) double minActivityStreamActivityAge;
@property (readonly, nonatomic) unsigned long long maxActivityStreamSize;
@property (readonly, nonatomic) unsigned long long smallActivityStreamSize;
@property (readonly, nonatomic) double activityAuthorCacheAuditTimeInterval;
@property (readonly, nonatomic) double activityAuthorCacheCleanAuthorDuringAuditMinimumTimeInterval;
@property (readonly, nonatomic) NSDate *applicationLaunchTime;

+ (void)initialize;
+ (id)documentDirectoryPath;

- (BOOL)openURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (id)previewImageForType:(id)a0;
- (BOOL)shouldRenderContactShadow;
- (BOOL)shouldRenderCurvedShadow;
- (BOOL)supportsShrinkTextToFit;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (BOOL)sidebarPositionRespectsUserInterfaceLayoutDirection;
- (id)defaultEmailHyperlinkURL;
- (id)defaultWebHyperlinkURL;
- (BOOL)openURL:(id)a0 displayAlertOnError:(BOOL)a1;
- (void)customizeHyperlinkViewController:(id)a0 documentRoot:(id)a1;
- (BOOL)supportsAutosizingTextboxes;
- (BOOL)supportsQuickFormatBar;
- (unsigned long long)activityStreamPruningThresholdWithDocumentRoot:(id)a0;
- (void)configureSharedPropertiesProvider:(id)a0;
- (id)defaultPhoneHyperlinkURL;
- (void)donateAddBodyRowAtBottomIntentWithInfo:(id)a0;
- (void)donateAddFormRecordIntentWithFormSheet:(id)a0;
- (unsigned long long)operationStoragePruningThresholdWithDocumentRoot:(id)a0;
- (void)p_setUpSharedICloudPreferences;
- (void)p_setUpSharedPropertiesProviderIfNeeded;
- (BOOL)shouldRenderLargeImages;
- (BOOL)shouldValidateLayoutEngineWhileInsertingRows;

@end
