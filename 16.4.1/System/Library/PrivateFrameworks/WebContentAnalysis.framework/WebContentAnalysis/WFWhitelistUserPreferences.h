@class NSString, WFWhitelistSiteBuffer;

@interface WFWhitelistUserPreferences : NSObject

@property BOOL filterEnabled;
@property BOOL whitelistEnabled;
@property BOOL alwaysAllowHTTPS;
@property (retain) NSString *username;
@property (readonly) WFWhitelistSiteBuffer *filterWhitelist;
@property (readonly) WFWhitelistSiteBuffer *filterBlacklist;
@property (readonly) WFWhitelistSiteBuffer *webWhitelist;

+ (id)_modificationDateForFileAtPath:(id)a0;
+ (BOOL)_isURLMetasite:(id)a0;
+ (id)_arrayByConvertingLinesInStringsAtPath:(id)a0;
+ (id)_cachedWhitelistForPath:(id)a0 username:(id)a1;
+ (id)_metasiteDomainNamesArray;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)defaultWhitelistForUser:(id)a0;
+ (id)metasitesExceptionPath;
+ (id)metasitesPath;
+ (id)preferencesPathForUsername:(id)a0;
+ (id)whitelistForUser:(id)a0;
+ (id)whitelistWithPreferences:(id)a0;

- (void)dealloc;
- (id)initWithPreferences:(id)a0;
- (id)init;
- (id)description;
- (BOOL)isURL:(id)a0 onList:(id)a1;
- (BOOL)isURLAllowed:(id)a0;
- (BOOL)isURLAllowed:(id)a0 reason:(id *)a1 shouldFilter:(BOOL *)a2 foundOnList:(BOOL *)a3;
- (id)pronounceOnPageURLString:(id)a0 shouldFilter:(BOOL *)a1;

@end
