@interface PHImageRequestBehaviorSpec : NSObject

@property (nonatomic) long long choosingPolicy;
@property (nonatomic) unsigned long long loadingOptions;
@property (nonatomic) long long version;
@property (nonatomic) long long resizeMode;
@property (nonatomic, getter=isSynchronous) BOOL synchronous;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (nonatomic) BOOL allowPlaceholder;
@property (nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing;
@property (nonatomic) BOOL includeHDRGainMap;
@property (nonatomic) BOOL includeHDRGainMapInIntermediateImage;
@property (nonatomic) double minimumTableThumbnailLongSide;
@property (nonatomic) BOOL useLowMemoryMode;
@property (nonatomic) BOOL useLimitedLibraryMode;
@property (nonatomic) long long downloadIntent;

+ (unsigned long long)loadingOptionsFromLoadingMode:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (BOOL)shouldLoadImage;
- (id)description;
- (BOOL)shouldLoadURL;
- (BOOL)shouldLoadDataOrURL;
- (BOOL)shouldLoadData;

@end
