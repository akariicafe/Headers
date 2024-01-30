@class NSDate, NSString, NSData, NSURL, PKDataAccessor, PKContent, PKImageSet, PKDisplayProfile, PKDisplayTraitCollection;

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
@property (copy, nonatomic) NSDate *signingDate;
@property (nonatomic) unsigned long long settings;
@property (nonatomic) long long shareCount;
@property (readonly, nonatomic) BOOL initializedViaInitWithCoder;
@property (nonatomic) double preferredImageScale;
@property (retain, nonatomic) NSString *preferredImageSuffix;
@property (retain, nonatomic) PKDisplayTraitCollection *preferredDisplayTraits;

+ (id)createWithFileDataAccessor:(id)a0 warnings:(id *)a1 error:(id *)a2;
+ (id)createWithData:(id)a0 warnings:(id *)a1 error:(id *)a2;
+ (unsigned long long)defaultSettings;
+ (id)createWithFileDataAccessor:(id)a0 validationOptions:(unsigned long long)a1 warnings:(id *)a2 error:(id *)a3;
+ (Class)resolvingClass;
+ (Class)classForDictionary:(id)a0 bundle:(id)a1;
+ (id)createWithFileURL:(id)a0 warnings:(id *)a1 error:(id *)a2;
+ (id)_createWithFileDataAccessor:(id)a0 validationOptions:(unsigned long long)a1 warnings:(id *)a2 error:(id *)a3;
+ (BOOL)isValidObjectWithFileDataAccessor:(id)a0 validationOptions:(unsigned long long)a1 warnings:(id *)a2 error:(id *)a3 signingDate:(id *)a4 passDictionary:(id)a5;
+ (id)dataTypeIdentifier;
+ (id)createWithValidatedFileDataAccessor:(id)a0;
+ (id)fetchSigningDateForObjectWithFileDataAccessor:(id)a0 passDictionary:(id)a1;

- (id)localizedString:(id)a0;
- (void)loadImageSetAsync:(long long)a0 preheat:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (void)flushLoadedContent;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)a0 seids:(id)a1 completion:(id /* block */)a2;
- (void)revocationStatusWithCompletion:(id /* block */)a0;
- (void)loadContentAsyncWithCompletion:(id /* block */)a0;
- (void)setPreferredDisplayTraits:(id)a0;
- (void)loadContentSync;
- (id)imageSetLoadedIfNeeded:(long long)a0;
- (BOOL)isImageSetLoaded:(long long)a0;
- (BOOL)isImageSetType:(long long)a0 equalToImageSetTypeFromObject:(id)a1;
- (void)setImageSet:(id)a0 forImageSetType:(long long)a1;
- (void)flushLoadedImageSets;
- (void)setMissingImageSetsFromObject:(id)a0;
- (void)reloadDisplayProfileOfType:(long long)a0;
- (void)_lock_flushLoadedImageSets;
- (id)preferredDisplayTraits;
- (void)downloadRemoteAssetsForSEIDS:(id)a0 completion:(id /* block */)a1;
- (id)contentLoadedIfNeeded;
- (void)loadImageSetSync:(long long)a0 preheat:(BOOL)a1;
- (BOOL)isContentLoaded;
- (void)loadCachedImageSet:(long long)a0;
- (void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)a0;
- (id)modificationDate;
- (void)noteShared;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void)flushFormattedFieldValues;
- (id)passLocalizedStringForKey:(id)a0;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)a0;
- (void)requestUpdateWithCompletion:(id /* block */)a0;
- (id)dataForBundleResourceNamed:(id)a0 withExtension:(id)a1;
- (id)serializedFileWrapper;
- (id)archiveData;
- (BOOL)remoteAssetsDownloadedForSEIDs:(id)a0;
- (id)dataForBundleResources:(id)a0;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void)setContent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)content;

@end
