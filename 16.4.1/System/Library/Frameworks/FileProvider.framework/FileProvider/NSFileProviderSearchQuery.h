@class NSString, NSSet, NSArray;

@interface NSFileProviderSearchQuery : NSObject <NSCopying, NSSecureCoding> {
    BOOL _shouldPerformServerSearch;
    NSString *_scopeFragment;
    NSString *_scopedToItemIdentifierBundleId;
    NSString *_keyboardLanguage;
    NSString *_alternateScopeToItemIdentifier;
    NSString *_providerDomainID;
    NSSet *_cachedExtensions;
    NSSet *_allowedUTTypes;
    unsigned long long _trashedItemsMembership;
    NSString *_bundleIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSSet *allowedContentTypes;
@property (copy, nonatomic) NSString *keyboardLanguage;
@property (copy, nonatomic) NSString *alternateScopeToItemIdentifier;
@property (nonatomic) BOOL shouldPerformServerSearch;
@property (nonatomic) unsigned long long trashedItemsMembership;
@property (nonatomic) BOOL includesTrashedItems;
@property (copy, nonatomic) NSString *scopeFragment;
@property (copy, nonatomic) NSString *providerDomainID;
@property (readonly, copy) NSArray *csQueryScopes;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSSet *allowedContentTypes;
@property (readonly, copy, nonatomic) NSSet *allowedPathExtensions;
@property (readonly, copy, nonatomic) NSString *scopedToItemIdentifier;
@property (readonly, copy, nonatomic) NSString *searchContainerItemIdentifier;

+ (id)newSearchContainerItemIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAllowedContentTypes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)predicate;
- (id)allowedContentTypesPredicate;
- (id)filenamePredicate;
- (id)initWithSearchScope:(id)a0;
- (id)initWithSearchScopedToItemID:(id)a0;
- (id)initWithSearchScopedToItemID:(id)a0 alternateItemID:(id)a1;
- (id)initWithSearchScopedToItemIdentifier:(id)a0 alternateItemIdentifier:(id)a1 providerDomainID:(id)a2 searchContainerItemIdentifier:(id)a3;
- (BOOL)isEqualToFileProviderSearchQuery:(id)a0;
- (id)toSpotlightQueryString;

@end
