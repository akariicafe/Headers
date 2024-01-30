@class _PHPickerCollectionConfiguration, NSArray, PHPickerFilter, PHPhotoLibrary;

@interface PHPickerConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _onlyReturnsIdentifiers;
@property (readonly, nonatomic) BOOL _usesOpenPanelLayout;
@property (readonly, nonatomic) BOOL _isEmbeddedLayout;
@property (copy, nonatomic, setter=_setAlbumsConfiguration:) _PHPickerCollectionConfiguration *_albumsConfiguration;
@property (nonatomic, setter=_setShowsWallpaperSuggestions:) BOOL _showsWallpaperSuggestions;
@property (nonatomic, setter=_showsPortraitWallpaperSuggestion:) BOOL _showsPortraitWallPaperSuggestions;
@property (nonatomic, setter=_setAllowsContinuousSelection:) BOOL _allowsContinuousSelection;
@property (nonatomic, setter=_setUsesEmbeddedMessagesLayout:) BOOL _usesEmbeddedMessagesLayout;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic, setter=_setAllowsDownscaling:) BOOL _allowsDownscaling;
@property (copy, nonatomic, setter=_setPeopleConfiguration:) _PHPickerCollectionConfiguration *_peopleConfiguration;
@property (copy, nonatomic, setter=_setFollowupPeopleConfigurations:) NSArray *_followupPeopleConfigurations;
@property (nonatomic, setter=_setAlwaysShowLoadingPlaceholder:) BOOL _alwaysShowLoadingPlaceholder;
@property (nonatomic, setter=_setExcludesSharedAlbums:) BOOL _excludesSharedAlbums;
@property (nonatomic, setter=_setExcludesHiddenAlbum:) BOOL _excludesHiddenAlbum;
@property (nonatomic) long long preferredAssetRepresentationMode;
@property (nonatomic) long long selection;
@property (nonatomic) long long selectionLimit;
@property (copy, nonatomic) PHPickerFilter *filter;
@property (copy, nonatomic) NSArray *preselectedAssetIdentifiers;

- (id)initWithPhotoLibrary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibraryAndOnlyReturnsIdentifiers:(id)a0;
- (id)initWithPhotoLibraryAndOnlyForOpenPanel:(id)a0;

@end
