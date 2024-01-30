@class NSString, NSArray;

@interface CTCategory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSArray *webDomains;
@property (copy, nonatomic) NSString *primaryWebDomain;
@property (copy, nonatomic) NSString *canonicalBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSArray *equivalentBundleIdentifiers;

+ (void)initialize;
+ (void)categoryForBundleID:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForDomainName:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_schemeRemovedEquivalentBundleIDsMapping:(id)a0;
+ (id)shortLocalizedNameForIdentifier:(id)a0;
+ (id)_getEquivalentBundleIdentifiers:(id)a0;
+ (id)bundleIDForPlatform:(id)a0 fromBundleID:(id)a1 platform:(id)a2;
+ (id)localizedNameForIdentifier:(id)a0;
+ (id)_DHToAppStoreCategoriesMap;
+ (id)_xpcConnection;
+ (id)schemeStringForPlatform:(id)a0;
+ (void)categoryForBundleID:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)_bundleIdentifierForContextResponse:(id)a0;
+ (id)systemCategoryIDWithPatternMatching:(id)a0;
+ (void)categoryForDomainNames:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForDomainURLs:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_identifierForContextResponse:(id)a0;
+ (id)_newXpcConnection;
+ (void)_lookupAppStoreUsing:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)parentAppBundleIdentifierForAppRecord:(id)a0;
+ (id)_overrideEquivalentIdentifiers:(id)a0 forBundleID:(id)a1;
+ (id)_urlStringsForHostNames:(id)a0;
+ (id)itemWith:(id)a0 platform:(id)a1 array:(id)a2;
+ (id)_DHIDtoCategoryDisplayNameMap;
+ (void)_getCategoryTypeForDomainName:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_urlComponentsForHostName:(id)a0;
+ (id)_appBundleIdentifierStringFor:(id)a0 categoryIdentifier:(id)a1;
+ (id)_getAssociatedDomainsForHostNames:(id)a0;
+ (id)_equivalentBundleIDsMapping;
+ (id)systemAppCategoryIdentifierForBundleIdentifier:(id)a0;
+ (void)categoryForBundleIdentifiers:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)categoryForDomainURL:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_relatedItemsForContextResponse:(id)a0;
+ (id)equivalentIdentifiersForBundleID:(id)a0;
+ (id)_equivalentBundleIDsMappingForWatchOSBundleID:(id)a0;
+ (id)primaryLocalizedNameForIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4;
- (id)initWithIdentifier:(id)a0 webDomains:(id)a1 bundleIdentifier:(id)a2 primaryWebDomain:(id)a3;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4 canonicalBundleIdentifier:(id)a5;
- (BOOL)isEqualToCategory:(id)a0;
- (void)_ctCategoryCommonInitWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4 canonicalBundleIdentifier:(id)a5;
- (id)initWithIdentifier:(id)a0 webDomains:(id)a1 bundleIdentifier:(id)a2;
- (BOOL)isSystemBundleIdentifier;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)equivalentBundleIdentifers;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3;

@end
