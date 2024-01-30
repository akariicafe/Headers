@class NSString, NSArray;

@interface CTCategory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSArray *webDomains;
@property (copy, nonatomic) NSString *primaryWebDomain;
@property (copy, nonatomic) NSString *canonicalBundleIdentifier;
@property (copy, nonatomic) NSString *resourceString;
@property (copy, nonatomic) NSString *secondaryIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSArray *equivalentBundleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *equivalentBundleIdentifers;
@property (readonly, copy, nonatomic) NSString *primaryIdentifier;
@property (readonly, copy, nonatomic) NSString *primaryLocalizedName;
@property (readonly, copy, nonatomic) NSString *secondaryLocalizedName;

+ (id)_xpcConnection;
+ (void)initialize;
+ (id)localizedNameForIdentifier:(id)a0;
+ (id)_DHIDtoCategoryDisplayNameMap;
+ (void)categoryForBundleIdentifiers:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)categoryForDomainNames:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForDomainURLs:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)_getCategoryTypeForDomainName:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_newXpcConnection;
+ (id)_identifierUsingContextKit:(id)a0 error:(id *)a1 relatedItems:(id *)a2;
+ (id)_getAssociatedDomainsForHostNames:(id)a0;
+ (id)_getequivalentBundleIdentifiers:(id)a0;
+ (id)systemAppCategoryIdentifierForBundleIdentifier:(id)a0;
+ (id)_overrideEquivalentIdentifiers:(id)a0 forBundleID:(id)a1;
+ (void)_lookupAppStoreUsing:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)categoryForBundleID:(id)a0 platform:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)_identifierUsingContextKit:(id)a0 error:(id *)a1 relatedItems:(id *)a2 bundleIdentifier:(id *)a3;
+ (id)systemCategoryIDWithPatternMatching:(id)a0;
+ (id)_equivalentBundleIDsMapping;
+ (id)_schemeRemovedEquivalentBundleIDsMapping:(id)a0;
+ (id)primaryLocalizedNameForIdentifier:(id)a0;
+ (id)shortLocalizedNameForIdentifier:(id)a0;
+ (void)categoryForBundleID:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForDomainURL:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)categoryForDomainName:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_DHIDtoPrimaryCategoriesMap;
+ (id)_DHToAppStoreCategoriesMap;
+ (id)equivalentIdentifiersForBundleID:(id)a0;
+ (id)itemWith:(id)a0 platform:(id)a1 array:(id)a2;
+ (id)_equivalentBundleIDsMappingForWatchOSBundleID:(id)a0;
+ (id)parentAppBundleIdentifierForAppRecord:(id)a0;

- (BOOL)isEqualToCategory:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4 canonicalBundleIdentifier:(id)a5;
- (void)_ctCategoryCommonInitWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3 primaryWebDomain:(id)a4 canonicalBundleIdentifier:(id)a5;
- (id)initWithIdentifier:(id)a0 equivalentBundleIdentifiers:(id)a1 webDomains:(id)a2 bundleIdentifier:(id)a3;
- (id)initWithIdentifier:(id)a0 webDomains:(id)a1 bundleIdentifier:(id)a2 primaryWebDomain:(id)a3;
- (id)initWithIdentifier:(id)a0 webDomains:(id)a1 bundleIdentifier:(id)a2;
- (BOOL)isSystemBundleIdentifier;

@end
