@class NSString, NSArray, NSDictionary, WFWhitelistSiteBuffer;

@interface WFUserSettings : NSObject {
    NSDictionary *_userSettings;
    WFWhitelistSiteBuffer *_contentFilterOverriddenWhiteListedSitesBuffer;
    WFWhitelistSiteBuffer *_contentFilterOverriddenBlackListedSitesBuffer;
    WFWhitelistSiteBuffer *_whiteListedSitesBuffer;
}

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) long long restrictionType;
@property (readonly, nonatomic) BOOL canEditRestrictionType;
@property (retain, nonatomic) NSArray *contentFilterOverriddenWhiteListedSites;
@property (readonly, nonatomic) BOOL canEditContentFilterOverriddenWhiteListedSites;
@property (retain, nonatomic) NSArray *contentFilterOverriddenBlackListedSites;
@property (readonly, nonatomic) BOOL canEditContentFilterOverriddenBlackListedSites;
@property (retain, nonatomic) NSArray *whiteListAllowedSites;
@property (readonly, nonatomic) BOOL canEditWhiteListAllowedSites;
@property (nonatomic) BOOL overridesAllowed;
@property (readonly, nonatomic) BOOL canEditOverridesAllowed;

+ (id)_arrayByConvertingLinesInStringsAtPath:(id)a0;
+ (id)_metasiteDomainNamesArray;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)metasitesExceptionPath;
+ (id)metasitesPath;

- (id)_userSettingsForUser:(id)a0;
- (void)setContentFilterEnabled:(BOOL)a0;
- (id)whiteListedSitesBuffer;
- (BOOL)whiteListContainsURL:(id)a0;
- (void)setAlwaysAllowHTTPS:(BOOL)a0;
- (BOOL)contentFilterOverriddenList:(id)a0 containsURL:(id)a1;
- (void)setContentFilterOverridesEnabled:(BOOL)a0;
- (id)contentFilterOverriddenSites;
- (id)initWithUserName:(id)a0;
- (BOOL)contentFilterOverriddenWhiteListContainsURL:(id)a0 withAppleAllowList:(id)a1;
- (BOOL)contentFilterListsAllowURL:(id)a0;
- (void)setRestrictWebEnabled:(BOOL)a0;
- (BOOL)autoWhitelistContainsURL:(id)a0;
- (BOOL)restrictWebEnabled;
- (id)contentFilterOverriddenWhiteListedSitesBufferWithAdditionalURLStrings:(id)a0;
- (BOOL)contentFilterEnabled;
- (BOOL)contentFilterOverriddenBlackListContainsURL:(id)a0;
- (void)dealloc;
- (id)_managedDefaultsPath;
- (BOOL)canEditAlwaysAllowHTTPS;
- (BOOL)whiteListEnabled;
- (BOOL)alwaysAllowHTTPS;
- (BOOL)_addManagedDefaults:(id)a0;
- (BOOL)contentFilterOverridesEnabled;
- (BOOL)contentFilterOverriddenWhiteListContainsURL:(id)a0;
- (void)setWhiteListEnabled:(BOOL)a0;
- (id)contentFilterOverriddenWhiteListedSitesBuffer;
- (id)contentFilterOverriddenBlackListedSitesBuffer;
- (BOOL)_setManagedDefaults:(id)a0;

@end
