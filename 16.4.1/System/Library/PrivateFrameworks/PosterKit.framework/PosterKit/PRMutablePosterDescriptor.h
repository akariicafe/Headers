@class NSString, NSArray, PRPosterDescriptorHomeScreenConfiguration, PRPosterDescriptorGalleryOptions;

@interface PRMutablePosterDescriptor : PRPosterDescriptor

@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (copy, nonatomic) NSArray *preferredTimeFontConfigurations;
@property (copy, nonatomic) NSArray *preferredTitleColors;
@property (copy, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (copy, nonatomic) NSArray *preferredHomeScreenSolidColors;
@property (copy, nonatomic) PRPosterDescriptorGalleryOptions *preferredGalleryOptions;

+ (id)mutableDescriptorWithIdentifier:(id)a0;

- (BOOL)storeUserInfo:(id)a0 error:(out id *)a1;
- (void)setDisplayNameLocalizationKey:(id)a0;
- (void)setPreferredTitleColors:(id)a0;
- (BOOL)storeGalleryOptions:(id)a0 error:(out id *)a1;
- (void)setPreferredTimeFontConfigurations:(id)a0;
- (void)setPreferredHomeScreenSolidColors:(id)a0;
- (void)setPreferredGalleryOptions:(id)a0;
- (BOOL)storeConfigurableOptions:(id)a0 error:(out id *)a1;
- (BOOL)setObject:(id)a0 forUserInfoKey:(id)a1;
- (void)setPreferredHomeScreenConfiguration:(id)a0;

@end
