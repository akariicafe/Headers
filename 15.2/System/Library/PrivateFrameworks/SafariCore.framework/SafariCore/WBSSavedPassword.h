@class NSArray, NSString, NSMutableDictionary, NSDate, NSMutableArray;

@interface WBSSavedPassword : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_siteToProtectionSpaces;
    NSMutableArray *_sites;
    NSMutableDictionary *_sitesToSidecars;
}

@property (retain, nonatomic) NSArray *persistentIdentifiersForWarningManager;
@property (readonly, nonatomic) NSString *highLevelDomain;
@property (readonly, nonatomic) NSString *user;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSArray *protectionSpaces;
@property (readonly, nonatomic) BOOL userIsNeverSaveMarker;
@property (readonly, nonatomic) NSDate *earliestModifiedDateForSites;
@property (readonly, nonatomic) NSArray *totpGenerators;
@property (readonly, nonatomic) NSString *currentOneTimeCode;
@property (readonly, nonatomic) NSArray *sites;
@property (readonly, nonatomic) NSString *userVisibleDomain;
@property (readonly, nonatomic) NSArray *userVisibleSites;

+ (void)enumerateRangesMatchingPatternWithTokenizer:(struct __CFStringTokenizer { } *)a0 string:(id)a1 pattern:(id)a2 matchingType:(long long)a3 withBlock:(id /* block */)a4;
+ (BOOL)stringMatchesPatternWithTokenizer:(struct __CFStringTokenizer { } *)a0 string:(id)a1 pattern:(id)a2 matchingType:(long long)a3;

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_sidecarForSite:(id)a0;
- (void)_deleteCredentialForProtectionSpace:(id)a0 fromStorage:(id)a1;
- (void)_deleteSidecarForProtectionSpace:(id)a0 fromStorage:(id)a1;
- (BOOL)_matchesSearchPattern:(id)a0 matchAgainstUser:(BOOL)a1 associatedDomains:(id)a2;
- (id)_initWithHighLevelDomain:(id)a0 user:(id)a1 password:(id)a2;
- (void)_addProtectionSpace:(id)a0 forSite:(id)a1;
- (void)_addModificationDate:(id)a0;
- (id)totpGeneratorForSite:(id)a0;
- (void)_addSidecar:(id)a0 forSite:(id)a1;
- (BOOL)_containsProtectionSpace:(id)a0;
- (void)_deleteCredentials;
- (void)_deleteCredentialsForSite:(id)a0;
- (BOOL)isDuplicateWithoutUserNameOfPassword:(id)a0;
- (void)_setUser:(id)a0 password:(id)a1;
- (void)_adoptSitesFromSavedPassword:(id)a0;
- (BOOL)matchesUserTypedSearchPattern:(id)a0 associatedDomains:(id)a1;
- (BOOL)matchesServiceNameHintString:(id)a0;
- (BOOL)matchesDomain:(id)a0 associatedDomains:(id)a1;

@end
