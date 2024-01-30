@class NSArray, PSSpecifier, NPSDomainAccessor, PSListController;

@interface MCUIBundleController : PSBundleController

@property (class, readonly, copy) NSArray *configurationProfiles;
@property (class, readonly, copy) NSArray *provisioningProfiles;

@property (weak, nonatomic) PSListController *parentController;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (retain, nonatomic) NPSDomainAccessor *nanoDomainAccessor;
@property (nonatomic) unsigned long long nanoProfileCount;

+ (id)sharedInstance;
+ (BOOL)isForPairedDevice;
+ (id)provisioningProfilesWithValidityCheck:(BOOL)a0;

- (id)initWithParentListController:(id)a0 properties:(id)a1;
- (void)load;
- (void).cxx_destruct;
- (void)_unpairedNotification:(id)a0;
- (id)specifiersWithSpecifier:(id)a0;
- (void)dealloc;
- (void)_updateSpecifierControllerClass;
- (void)_updateSpecifierProfileInfo;
- (void)updateUI:(id)a0;
- (void)unload;
- (BOOL)_isProfileSectionEmpty;
- (id)_profileInfoForSpecifier:(id)a0;
- (Class)_controllerClassForCurrentProfilesAndUpdatedUserInfo:(id)a0;
- (id)_specifier;
- (void)incrementNanoProfileCount;
- (void)decrementNanoProfileCount;

@end
