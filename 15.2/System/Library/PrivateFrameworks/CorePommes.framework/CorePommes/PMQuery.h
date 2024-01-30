@class PMQueryNode, NSString, PMParameters;

@interface PMQuery : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRoot;
@property (retain, nonatomic) PMQueryNode *root;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasCountry;
@property (retain, nonatomic) NSString *country;
@property (readonly, nonatomic) BOOL hasRawQuery;
@property (retain, nonatomic) NSString *rawQuery;
@property (readonly, nonatomic) BOOL hasOriginalQuery;
@property (retain, nonatomic) NSString *originalQuery;
@property (readonly, nonatomic) BOOL hasTokenizedQuery;
@property (retain, nonatomic) NSString *tokenizedQuery;
@property (readonly, nonatomic) BOOL hasSearchParams;
@property (retain, nonatomic) PMParameters *searchParams;

- (id)initWithQueryString:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)_parse:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithCSQueryString:(id)a0 optimize:(BOOL)a1;
- (void)addFiltersToQuery:(id)a0 optimize:(BOOL)a1;
- (void)_printQueryTree:(id)a0;
- (id)optimizeQuery:(id)a0 originalQueryParts:(id)a1;
- (void)_build:(void *)a0 stack:(id)a1;
- (int)_lookupOperator:(int)a0;
- (int)_lookupAttribute:(id)a0;
- (double)_evalTimeExpression:(int)a0 deltaString:(const char *)a1;
- (id)_stringifyQueryTree:(id)a0 indent:(unsigned long long)a1;
- (id)removeWildCard:(id)a0;

@end
