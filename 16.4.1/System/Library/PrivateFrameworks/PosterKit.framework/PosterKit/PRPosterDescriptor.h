@class NSString, NSArray, PRSPosterPath, PRPosterDescriptorHomeScreenConfiguration, PRPosterDescriptorGalleryOptions, NSURL;
@protocol BSInvalidatable;

@interface PRPosterDescriptor : NSObject <PRPosterContentsInternal, PRPosterContents> {
    id<BSInvalidatable> _pathValidityExtension;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayNameLocalizationKey;
@property (readonly, copy, nonatomic) NSArray *preferredTimeFontConfigurations;
@property (readonly, copy, nonatomic) NSArray *preferredTitleColors;
@property (readonly, copy, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (readonly, copy, nonatomic) NSArray *preferredHomeScreenSolidColors;
@property (readonly, copy, nonatomic) PRPosterDescriptorGalleryOptions *preferredGalleryOptions;
@property (readonly, nonatomic) PRSPosterPath *_path;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredTimeFontConfigurationsWithExtensionBundleURL:(id)a0;
- (id)loadGalleryOptionsWithError:(out id *)a0;
- (id)descriptorIdentifier;
- (id)assetDirectory;
- (id)loadUserInfoWithError:(out id *)a0;
- (id)preferredGalleryOptions;
- (id)identifier;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_initWithPath:(id)a0;
- (id)init;
- (id)loadConfigurableOptionsWithError:(out id *)a0;
- (id)objectForUserInfoKey:(id)a0;
- (void).cxx_destruct;

@end
