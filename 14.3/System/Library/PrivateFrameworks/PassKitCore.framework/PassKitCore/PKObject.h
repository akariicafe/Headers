@class NSData, PKContent, NSString, NSURL, PKDataAccessor, PKImageSet, PKDisplayProfile, PKDisplayTraitCollection;

@interface PKObject : NSObject <NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PKContent *_content;
    PKImageSet *_imageSets[7];
    PKDisplayTraitCollection *_preferredDisplayTraits;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSData *manifestHash;
@property (retain, nonatomic) PKDataAccessor *dataAccessor;
@property (retain, nonatomic) PKDisplayProfile *displayProfile;
@property (copy, nonatomic) NSURL *webServiceURL;
@property (copy, nonatomic) NSString *authenticationToken;
@property (nonatomic) unsigned long long settings;
@property (nonatomic) long long shareCount;
@property (readonly, nonatomic) BOOL initializedViaInitWithCoder;
@property (nonatomic) double preferredImageScale;
@property (retain, nonatomic) NSString *preferredImageSuffix;
@property (retain, nonatomic) PKDisplayTraitCollection *preferredDisplayTraits;

+ (unsigned long long)defaultSettings;
+ (id)createWithFileURL:(id)a0 warnings:(id *)a1 error:(id *)a2;
+ (id)createWithFileDataAccessor:(id)a0 warnings:(id *)a1 error:(id *)a2;
+ (id)_createWithFileDataAccessor:(id)a0 validate:(BOOL)a1 warnings:(id *)a2 error:(id *)a3;
+ (id)createWithValidatedFileDataAccessor:(id)a0;
+ (id)createWithData:(id)a0 warnings:(id *)a1 error:(id *)a2;
+ (BOOL)isValidObjectWithFileDataAccessor:(id)a0 warnings:(id *)a1 error:(id *)a2;
+ (Class)resolvingClass;
+ (Class)classForDictionary:(id)a0 bundle:(id)a1;

- (id)modificationDate;
- (id)init;
- (void)requestUpdateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (id)dataForBundleResourceNamed:(id)a0 withExtension:(id)a1;
- (void)revocationStatusWithCompletion:(id /* block */)a0;
- (id)dataForBundleResources:(id)a0;
- (id)serializedFileWrapper;
- (BOOL)remoteAssetsDownloadedForSEIDs:(id)a0;
- (id)contentLoadedIfNeeded;
- (BOOL)isContentLoaded;
- (void)flushFormattedFieldValues;
- (void)_lock_flushLoadedImageSets;
- (BOOL)isImageSetLoaded:(long long)a0;
- (id)preferredDisplayTraits;
- (void)setImageSet:(id)a0 forImageSetType:(long long)a1;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)a0 completion:(id /* block */)a1;
- (void)loadImageSetSync:(long long)a0 preheat:(BOOL)a1;
- (id)imageSetLoadedIfNeeded:(long long)a0;
- (void)flushLoadedContent;
- (void)loadContentAsyncWithCompletion:(id /* block */)a0;
- (void)setPreferredDisplayTraits:(id)a0;
- (void)loadCachedImageSet:(long long)a0;
- (id)localizedString:(id)a0;
- (void)loadImageSetAsync:(long long)a0 preheat:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)flushLoadedImageSets;
- (void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)a0;
- (void)reloadDisplayProfileOfType:(long long)a0;
- (BOOL)isImageSetType:(long long)a0 equalToImageSetTypeFromObject:(id)a1;
- (void)setMissingImageSetsFromObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)loadContentSync;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)a0;
- (id)archiveData;
- (void)setContent:(id)a0;
- (id)content;
- (id)passLocalizedStringForKey:(id)a0;
- (void)noteShared;
- (void)encodeWithCoder:(id)a0;

@end
