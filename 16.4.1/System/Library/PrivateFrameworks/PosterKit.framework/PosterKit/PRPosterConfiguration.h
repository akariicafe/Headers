@class NSString, PRSPosterPath, NSURL;
@protocol BSInvalidatable;

@interface PRPosterConfiguration : NSObject <PRPosterContentsInternal, PRPosterContents> {
    id<BSInvalidatable> _pathValidityExtension;
}

@property (readonly, copy, nonatomic) NSString *displayNameLocalizationKey;
@property (readonly, nonatomic) PRSPosterPath *_path;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptorIdentifier;
- (id)assetDirectory;
- (id)loadUserInfoWithError:(out id *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)_initWithPath:(id)a0;
- (id)init;
- (id)loadConfigurableOptionsWithError:(out id *)a0;
- (void)_invalidate;
- (id)objectForUserInfoKey:(id)a0;
- (void).cxx_destruct;
- (id)loadComplicationLayoutWithError:(out id *)a0;
- (id)loadConfiguredPropertiesWithError:(out id *)a0;
- (id)loadFocusConfigurationWithError:(out id *)a0;
- (id)loadHomeScreenConfigurationWithError:(out id *)a0;
- (id)loadOtherMetadataWithError:(out id *)a0;
- (id)loadSuggestionMetadataWithError:(out id *)a0;
- (id)loadTitleStyleConfigurationWithError:(out id *)a0;

@end
