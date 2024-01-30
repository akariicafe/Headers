@class NSString;

@interface PXPhotosGridSettings : PXSettings

@property (nonatomic) BOOL emulatesEmptyLibrary;
@property (nonatomic) double defaultAnimationDuration;
@property (nonatomic) BOOL enableGridZero;
@property (nonatomic) BOOL enableInTopLevelSmartAlbums;
@property (nonatomic) BOOL enableInImportHistory;
@property (nonatomic) BOOL enableInRecentlyDeleted;
@property (nonatomic) BOOL enableInMediaTypes;
@property (nonatomic) BOOL enableInPanoramas;
@property (nonatomic) BOOL enableInUserAlbums;
@property (nonatomic) BOOL enableInUserSmartAlbums;
@property (nonatomic) BOOL enableInPlaces;
@property (nonatomic) BOOL enableInSharedAlbums;
@property (nonatomic) BOOL enableInSearch;
@property (nonatomic) BOOL enableInMyPhotoStream;
@property (nonatomic) BOOL enableInStandInAlbums;
@property (nonatomic) BOOL enableInOtherAlbums;
@property (nonatomic) BOOL enableInAppPicker;
@property (nonatomic) BOOL enableInImagePicker;
@property (nonatomic) BOOL enableInCMM;
@property (nonatomic) BOOL enableSuperzoom;
@property (nonatomic) BOOL enableInvisibleNavBars;
@property (nonatomic) BOOL enableSortAction;
@property (nonatomic) BOOL enableNewActionMenu;
@property (nonatomic) BOOL enableContentFiltering;
@property (nonatomic) BOOL enableAspectFitToggle;
@property (nonatomic) BOOL enableAspectFitButton;
@property (nonatomic) BOOL enableZoomInOutButton;
@property (nonatomic) BOOL enableDetailsMenuAction;
@property (nonatomic) BOOL enableFilterButton;
@property (nonatomic) BOOL enableFilterIndicatorButton;
@property (nonatomic) BOOL alwaysShowFilterIndicatorButton;
@property (nonatomic) BOOL enableFilterIcons;
@property (nonatomic) BOOL enableFilterViewControllerAnchoringToSender;
@property (nonatomic) BOOL enableTitleLegibilityDimmingFilter;
@property (nonatomic) BOOL backdropStyleForPlacesAndImports;
@property (nonatomic) BOOL colorNavbarArea;
@property (nonatomic) double headerTitleTopSpacing;
@property (nonatomic) double headerTitleBottomSpacing;
@property (nonatomic) BOOL useGradientSectionHeaders;
@property (nonatomic) double sectionHeaderGradientOverhang;
@property (nonatomic) double sectionHeaderGradientAlpha;
@property (nonatomic) double headerGradientHeight;
@property (nonatomic) double headerGradientAlpha;
@property (nonatomic) double behindContentBackgroundGradientAlpha;
@property (nonatomic) double filteringTimeoutDuration;
@property (copy, nonatomic) NSString *actionMenuGlyphName;

+ (id)sharedInstance;
+ (id)_enableTungstenNewFeaturesAction;
+ (id)_enableTungstenNewFeaturesActionPredicate;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (void).cxx_destruct;

@end
