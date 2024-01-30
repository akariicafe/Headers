@class NSString, NSSet;

@interface NSFileProviderSearchQuery : NSObject <NSCopying, NSSecureCoding> {
    BOOL _shouldPerformServerSearch;
    NSString *_scopeFragment;
    NSString *_scopedToItemIdentifierBundleId;
    NSString *_keyboardLanguage;
    NSString *_providerDomainID;
    NSSet *_cachedExtensions;
    unsigned long long _trashedItemsMembership;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSSet *allowedContentTypes;
@property (copy, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) BOOL shouldPerformServerSearch;
@property (nonatomic) unsigned long long trashedItemsMembership;
@property (nonatomic) BOOL includesTrashedItems;
@property (copy, nonatomic) NSString *scopeFragment;
@property (copy, nonatomic) NSString *providerDomainID;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSSet *allowedContentTypes;
@property (readonly, copy, nonatomic) NSSet *allowedPathExtensions;
@property (readonly, copy, nonatomic) NSString *scopedToItemIdentifier;
@property (readonly, copy, nonatomic) NSString *searchContainerItemIdentifier;

+ (id)newSearchContainerItemIdentifier;

- (id)predicate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAllowedContentTypes:(id)a0;
- (id)initWithSearchScopedToItemIdentifier:(id)a0 providerDomainID:(id)a1 searchContainerItemIdentifier:(id)a2;
- (BOOL)isEqualToFileProviderSearchQuery:(id)a0;
- (id)toSpotlightQueryString;
- (id)filenamePredicate;
- (id)allowedContentTypesPredicate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSearchScopedToItemID:(id)a0;
- (id)initWithSearchScope:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
