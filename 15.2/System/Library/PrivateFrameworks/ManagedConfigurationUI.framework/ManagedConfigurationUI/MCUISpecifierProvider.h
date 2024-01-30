@class NSDictionary;
@protocol MCUISpecifierProviderDelegate;

@interface MCUISpecifierProvider : NSObject

@property (weak, nonatomic) id<MCUISpecifierProviderDelegate> delegate;
@property (retain, nonatomic) NSDictionary *sharedPSProperties;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)specifiersForMDMProfiles:(id)a0;
- (id)specifiersForUninstalledProfiles:(id)a0;
- (id)specifiersForInstalledProfiles:(id)a0;
- (BOOL)isSectionPopulated:(id)a0 outIsPlural:(BOOL *)a1;
- (id)specifierWithName:(id)a0 detail:(Class)a1;
- (void)loadProfileFromSpecifier:(id)a0;
- (id)_specifierForProfile:(id)a0 profileInstalled:(BOOL)a1;
- (id)_specifiersForProfiles:(id)a0 singularHeader:(id)a1 pluralHeaader:(id)a2 profilesInstalled:(BOOL)a3;
- (id)_declarativeManagementProfileIdentifiers;

@end
