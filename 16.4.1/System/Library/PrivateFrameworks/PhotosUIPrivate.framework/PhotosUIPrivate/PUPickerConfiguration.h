@class NSError, PHPickerConfiguration, NSArray, NSString, NSOrderedSet, PHPhotoLibrary, PUPickerGeneratedFilter, PHAssetCollection, _PHPickerCollectionConfiguration;
@protocol PUPickerFilter, PLClientIdentification;

@interface PUPickerConfiguration : NSObject

@property (nonatomic) BOOL usesEmbeddedMessagesLayout;
@property (readonly, nonatomic) PHPickerConfiguration *phPickerConfiguration;
@property (readonly, nonatomic) long long preferredAssetRepresentationMode;
@property (readonly, nonatomic) long long selection;
@property (readonly, nonatomic) _PHPickerCollectionConfiguration *albumsConfiguration;
@property (readonly, nonatomic) NSArray *peopleConfigurations;
@property (readonly, nonatomic) long long confirmationBehavior;
@property (readonly, nonatomic) long long selectionLimit;
@property (readonly, nonatomic) id<PUPickerFilter> filter;
@property (readonly, nonatomic) PUPickerGeneratedFilter *generatedFilter;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL receivedPhotoLibrary;
@property (readonly, nonatomic) BOOL onlyReturnsIdentifiers;
@property (readonly, nonatomic) BOOL allowsDownscaling;
@property (readonly, nonatomic) BOOL allowsContinuousSelection;
@property (readonly, nonatomic) id<PLClientIdentification> pickerClientIdentification;
@property (readonly, nonatomic) NSOrderedSet *preselectedItemIdentifiers;
@property (readonly, nonatomic) NSOrderedSet *preselectedItemObjectIDs;
@property (readonly, nonatomic) NSOrderedSet *suggestedItemObjectIDs;
@property (readonly, nonatomic) BOOL hasPreselection;
@property (readonly, nonatomic) BOOL isSingleSelection;
@property (readonly, nonatomic) BOOL shouldPassthroughSelection;
@property (readonly, nonatomic) BOOL allowsUnlimitedMultipleSelection;
@property (readonly, nonatomic) BOOL allowsEmptySelection;
@property (readonly, nonatomic) BOOL allowsAssetData;
@property (readonly, nonatomic) BOOL allowsIdentifiers;
@property (readonly, nonatomic) BOOL allowsContextMenuInteraction;
@property (readonly, nonatomic) BOOL allowsSwipeToSelect;
@property (readonly, nonatomic) BOOL allowsBars;
@property (readonly, nonatomic) BOOL allowsInteractivePopGesture;
@property (readonly, nonatomic) BOOL allowsNavigationPushPopAnimation;
@property (readonly, nonatomic) BOOL allowsAlbums;
@property (readonly, nonatomic) BOOL allowsSidebar;
@property (readonly, nonatomic) BOOL allowsSearchBar;
@property (readonly, nonatomic) BOOL allowsSearchSuggestions;
@property (readonly, nonatomic) BOOL allowsSelectionStaging;
@property (readonly, nonatomic) BOOL allowsOpeningStagingArea;
@property (readonly, nonatomic) BOOL allowsDownload;
@property (readonly, nonatomic) BOOL excludesSharedAlbums;
@property (readonly, nonatomic) BOOL excludesHiddenAlbum;
@property (readonly, nonatomic) BOOL shouldRequestCurrentIfPossible;
@property (readonly, nonatomic) BOOL shouldStripLocation;
@property (readonly, nonatomic) BOOL alwaysShowLoadingPlaceholder;
@property (readonly, nonatomic) PHAssetCollection *allPhotosVirtualCollection;
@property (readonly, nonatomic) BOOL isValidConfiguration;
@property (readonly, nonatomic) BOOL usesOpenPanelLayout;
@property (readonly, nonatomic) BOOL showsWallpaperSuggestions;
@property (readonly, nonatomic) BOOL showsPortraitWallpaperSuggestions;
@property (readonly, nonatomic) BOOL isLimitedLibraryPicker;
@property (readonly, nonatomic) NSString *limitedLibraryClientIdentifier;
@property (readonly, nonatomic) NSError *LimitedLibraryError;
@property (readonly, nonatomic) BOOL usesMemoriesLayout;
@property (readonly, nonatomic) PHAssetCollection *memoryAssetCollection;
@property (readonly, nonatomic) BOOL isPeoplePicker;
@property (readonly, nonatomic) BOOL isFollowupSingleSelectionPeoplePicker;
@property (readonly, nonatomic) NSOrderedSet *allPersonIdentifiers;

+ (id)limitedLibraryApplicationPreselectedObjectIDsOrCreateEmptySelectionWithTrustedIdentifier:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 photoLibrary:(id)a2;
+ (id)limitedLibraryApplicationTrustedIdentifierWithConnection:(id)a0 purposedIdentifier:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (long long)cancellationBehaviorWithTraitCollection:(id)a0;
- (id)initForMemoriesPickerWithPHPickerConfiguration:(id)a0 memoryAssetCollection:(id)a1;
- (id)initForUIImagePickerControllerWithPHPickerConfiguration:(id)a0 connection:(id)a1 purposedLimitedLibraryApplicationIdentifier:(id)a2 overriddenGeneratedFilter:(id)a3;
- (id)initWithPHPickerConfiguration:(id)a0 connection:(id)a1;
- (id)initWithPHPickerConfiguration:(id)a0 connection:(id)a1 purposedLimitedLibraryApplicationIdentifier:(id)a2 overriddenGeneratedFilter:(id)a3 allowsDownload:(BOOL)a4 usesMemoriesLayout:(BOOL)a5 memoryAssetCollection:(id)a6;

@end
