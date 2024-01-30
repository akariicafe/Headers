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

- (void)setWhiteListEnabled:(BOOL)a0;
- (id)whiteListedSitesBuffer;
- (void)setRestrictWebEnabled:(BOOL)a0;
- (BOOL)contentFilterListsAllowURL:(id)a0;
- (void)setAlwaysAllowHTTPS:(BOOL)a0;
- (BOOL)_addManagedDefaults:(id)a0;
- (id)contentFilterOverriddenSites;
- (BOOL)contentFilterEnabled;
- (id)_userSettingsForUser:(id)a0;
- (BOOL)contentFilterOverridesEnabled;
- (void)setContentFilterEnabled:(BOOL)a0;
- (BOOL)restrictWebEnabled;
- (BOOL)whiteListEnabled;
- (void)setContentFilterOverridesEnabled:(BOOL)a0;
- (id)_managedDefaultsPath;
- (BOOL)contentFilterOverriddenBlackListContainsURL:(id)a0;
- (BOOL)canEditAlwaysAllowHTTPS;
- (BOOL)contentFilterOverriddenWhiteListContainsURL:(id)a0;
- (id)contentFilterOverriddenBlackListedSitesBuffer;
- (id)contentFilterOverriddenWhiteListedSitesBuffer;
- (BOOL)contentFilterOverriddenList:(id)a0 containsURL:(id)a1;
- (BOOL)alwaysAllowHTTPS;
- (BOOL)whiteListContainsURL:(id)a0;
- (BOOL)autoWhitelistContainsURL:(id)a0;
- (id)initWithUserName:(id)a0;
- (void)dealloc;
- (BOOL)_setManagedDefaults:(id)a0;

@end
