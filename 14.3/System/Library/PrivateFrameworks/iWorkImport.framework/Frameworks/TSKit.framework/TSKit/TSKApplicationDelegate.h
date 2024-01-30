@class NSArray, TSKApplicationPropertiesProvider, NSString, NSDate;

@interface TSKApplicationDelegate : NSObject

@property (class, readonly, nonatomic) TSKApplicationDelegate *sharedDelegate;
@property (class, readonly, nonatomic) TSKApplicationPropertiesProvider *sharedPropertiesProvider;

@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (readonly, nonatomic) BOOL tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (readonly, nonatomic) BOOL tableCellInspectorShowsNaturalAlignment;
@property (readonly, nonatomic) BOOL textInspectorShowsMoreSubpane;
@property (readonly, nonatomic) Class propertiesProviderClass;
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
@property (nonatomic) unsigned long long iWorkAuthorColorIndex;
@property (copy, nonatomic) NSString *iWorkAuthorName;
@property (copy, nonatomic) NSString *iWorkAuthorPrivateID;
@property (readonly, nonatomic) double minOperationStorageEntryAge;
@property (readonly, nonatomic) unsigned long long maxOperationStorageSize;
@property (readonly, nonatomic) unsigned long long smallOperationStorageSize;
@property (readonly, nonatomic) NSDate *applicationLaunchTime;

+ (void)initialize;
+ (id)documentDirectoryPath;

- (id)init;
- (void).cxx_destruct;
- (BOOL)openURL:(id)a0;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (BOOL)shouldRenderContactShadow;
- (BOOL)shouldRenderCurvedShadow;
- (BOOL)shouldValidateMasterLayoutWhileInsertingRows;
- (id)previewImageForType:(id)a0;
- (id)appChartPropertyOverrides;
- (BOOL)supportsShrinkTextToFit;
- (id)defaultHyperlinkURLWithDocumentRoot:(id)a0;
- (BOOL)sidebarPositionRespectsUserInterfaceLayoutDirection;
- (void)customizeHyperlinkViewController:(id)a0 documentRoot:(id)a1;
- (BOOL)supportsAutosizingTextboxes;
- (BOOL)openURL:(id)a0 displayAlertOnError:(BOOL)a1;
- (id)iWorkAuthorPrivateID;
- (void)setIWorkAuthorPrivateID:(id)a0;
- (void)p_setUpSharedPropertiesProviderIfNeeded;
- (void)configureSharedPropertiesProvider:(id)a0;
- (BOOL)shouldRenderLargeImages;
- (unsigned long long)operationStoragePruningThresholdWithDocumentRoot:(id)a0;
- (void)donateAddBodyRowAtBottomIntentWithInfo:(id)a0;

@end
