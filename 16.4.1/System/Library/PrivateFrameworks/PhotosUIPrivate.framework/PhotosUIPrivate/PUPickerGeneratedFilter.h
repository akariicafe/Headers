@class NSPredicate;

@interface PUPickerGeneratedFilter : NSObject

@property (readonly, nonatomic) BOOL pu_legacy_mediaTypesIncludesLivePhoto;
@property (readonly, nonatomic) BOOL allowsSearchSuggestions;
@property (readonly, nonatomic) BOOL allowsAlbums;
@property (readonly, copy, nonatomic) NSPredicate *assetPredicate;
@property (readonly, nonatomic) unsigned long long possibleAssetTypes;
@property (readonly, nonatomic) unsigned long long requiredAssetTypes;
@property (readonly, nonatomic) unsigned long long searchQueryFilterOptions;
@property (readonly, nonatomic) unsigned long long genericAssetTypes;
@property (readonly, nonatomic) long long displayAssetMediaType;
@property (readonly, nonatomic) long long noContentPlaceholderType;

+ (id)_excludingLoopingVideosFilter;
+ (id)_excludingStreamedVideosFilter;
+ (id)_imagesFilter;
+ (id)_loopingVideosFilter;
+ (id)_pu_legacy_filterForUIImagePickerControllerMediaTypes:(id)a0;
+ (id)_videosFilter;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFilter:(id)a0;
- (long long)displayAssetMediaTypeConsideringAssetObjectIDs:(id)a0 photoLibrary:(id)a1;
- (id)initWithUIImagePickerControllerMediaTypes:(id)a0;

@end
