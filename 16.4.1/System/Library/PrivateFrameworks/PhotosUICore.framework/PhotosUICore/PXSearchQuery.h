@class NSArray, NSString, CSSuggestion, PXSearchQueryOptions;

@interface PXSearchQuery : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *queryTokens;
@property (readonly, copy, nonatomic) PXSearchQueryOptions *options;
@property (readonly, copy, nonatomic) NSString *searchText;
@property (readonly, copy, nonatomic) NSArray *searchTokens;
@property (readonly, copy, nonatomic) NSString *localizedQueryString;
@property (readonly, copy, nonatomic) NSString *priorityAssetUUID;
@property (readonly, nonatomic) BOOL hasSearchText;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) unsigned long long searchTermCount;
@property (readonly, nonatomic) BOOL supportsRecentSearch;
@property (retain, nonatomic) CSSuggestion *currentSpotlightQueryState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSearchText:(id)a0 searchTokens:(id)a1 options:(id)a2;
- (BOOL)isEquivalentToRecentSearchQuery:(id)a0;

@end
