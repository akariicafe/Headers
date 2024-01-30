@class NSString, NSIndexSet, PSIWordEmbeddingMatch, NSMutableSet, NSDictionary;

@interface PSIQueryToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *normalizedText;
@property (readonly, copy, nonatomic) NSString *resolvedText;
@property (readonly, copy, nonatomic) NSString *wildcardResolvedText;
@property (retain, nonatomic) PSIWordEmbeddingMatch *wordEmbeddingMatch;
@property (nonatomic) BOOL isFullTextToken;
@property (nonatomic) BOOL belongsToSearchText;
@property (nonatomic) unsigned long long userCategory;
@property (copy, nonatomic) NSIndexSet *searchedCategories;
@property (readonly, nonatomic) BOOL containsMarker;
@property (retain, nonatomic) NSMutableSet *assetIds;
@property (retain, nonatomic) NSMutableSet *collectionIds;
@property (retain, nonatomic) NSDictionary *dateAttributes;
@property (readonly, nonatomic) unsigned long long matchType;
@property (nonatomic) BOOL userControlledCategoriesUseWildcard;
@property (nonatomic) BOOL usesWordEmbeddings;
@property (nonatomic) BOOL isFilterTypeToken;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInSearchText;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, nonatomic) unsigned long long collectionCount;
@property (readonly, nonatomic) unsigned long long resultCount;
@property (retain, nonatomic) PSIQueryToken *parentToken;
@property (readonly, nonatomic) BOOL isTextSearchable;
@property (readonly, copy, nonatomic) NSString *groupMatchingText;
@property (readonly, copy, nonatomic) NSDictionary *debugDictionary;

+ (id)personQueryTokensFromSocialGroupQueryToken:(id)a0;
+ (id)stringForMatchType:(unsigned long long)a0;

- (id)initWithIdentifier:(id)a0 userCategory:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 userCategory:(unsigned long long)a1 searchedCategories:(id)a2;
- (id)tokenByWordEmbeddingWithMatch:(id)a0;
- (id)initWithText:(id)a0 normalizedText:(id)a1 identifier:(id)a2 userCategory:(unsigned long long)a3 searchedCategories:(id)a4 matchType:(unsigned long long)a5;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0 normalizedText:(id)a1 userCategory:(unsigned long long)a2 matchType:(unsigned long long)a3;
- (id)initWithText:(id)a0 normalizedText:(id)a1 userCategory:(unsigned long long)a2 searchedCategories:(id)a3 matchType:(unsigned long long)a4;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithText:(id)a0 userCategory:(unsigned long long)a1 matchType:(unsigned long long)a2;
- (id)initWithText:(id)a0 userCategory:(unsigned long long)a1 searchedCategories:(id)a2 matchType:(unsigned long long)a3;
- (void)replaceIdentifier:(id)a0;
- (void)normalizeTextWithTokenizer:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
