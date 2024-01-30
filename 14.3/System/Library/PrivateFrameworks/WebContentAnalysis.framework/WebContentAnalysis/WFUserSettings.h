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

+ (id)metasitesPath;
+ (id)_arrayByConvertingLinesInStringsAtPath:(id)a0;
+ (id)metasitesExceptionPath;
+ (id)_metasiteDomainNamesArray;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;

- (BOOL)whiteListContainsURL:(id)a0;
- (BOOL)contentFilterListsAllowURL:(id)a0;
- (BOOL)_setManagedDefaults:(id)a0;
- (BOOL)canEditAlwaysAllowHTTPS;
- (id)contentFilterOverriddenSites;
- (id)_managedDefaultsPath;
- (BOOL)alwaysAllowHTTPS;
- (void)dealloc;
- (id)whiteListedSitesBuffer;
- (id)contentFilterOverriddenBlackListedSitesBuffer;
- (BOOL)_addManagedDefaults:(id)a0;
- (BOOL)contentFilterEnabled;
- (void)setWhiteListEnabled:(BOOL)a0;
- (id)contentFilterOverriddenWhiteListedSitesBuffer;
- (id)_userSettingsForUser:(id)a0;
- (BOOL)autoWhitelistContainsURL:(id)a0;
- (BOOL)whiteListEnabled;
- (void)setContentFilterOverridesEnabled:(BOOL)a0;
- (BOOL)contentFilterOverriddenBlackListContainsURL:(id)a0;
- (BOOL)contentFilterOverriddenWhiteListContainsURL:(id)a0;
- (void)setContentFilterEnabled:(BOOL)a0;
- (BOOL)contentFilterOverridesEnabled;
- (id)initWithUserName:(id)a0;
- (BOOL)contentFilterOverriddenList:(id)a0 containsURL:(id)a1;
- (BOOL)restrictWebEnabled;
- (void)setAlwaysAllowHTTPS:(BOOL)a0;
- (void)setRestrictWebEnabled:(BOOL)a0;

@end
