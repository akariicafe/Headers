@class NSArray, NSString, LNPropertyQuery, NSNumber;

@interface LNQueryRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long requestType;
@property (readonly, nonatomic) NSArray *identifiersToMatch;
@property (readonly, copy, nonatomic) NSString *stringToMatch;
@property (readonly, nonatomic) LNPropertyQuery *propertyQuery;
@property (readonly, nonatomic) NSArray *sortingOptions;
@property (readonly, nonatomic) NSNumber *maximumResultCount;
@property (readonly, copy, nonatomic) NSString *entityIdentifier;
@property (readonly, copy, nonatomic) NSString *entityMangledTypeName;
@property (readonly, copy, nonatomic) NSString *queryIdentifier;
@property (readonly, copy, nonatomic) NSString *queryMangledTypeName;
@property (readonly, copy, nonatomic) NSArray *intentMangledTypeNames;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)a0 entityType:(id)a1;
- (id)initWithIdentifiers:(id)a0 entityMangledTypeName:(id)a1;
- (id)initWithPropertyQuery:(id)a0 maximumResultCount:(id)a1 entityType:(id)a2 intentMangledTypeNames:(id)a3 sortingOptions:(id)a4;
- (id)initWithPropertyQuery:(id)a0 maximumResultCount:(id)a1 queryMangledTypeName:(id)a2 sortingOptions:(id)a3;
- (id)initWithPropertyQuery:(id)a0 maximumResultCount:(id)a1 queryType:(id)a2 sortingOptions:(id)a3;
- (id)initWithRequestType:(long long)a0 identifiersToMatch:(id)a1 stringToMatch:(id)a2 propertyQuery:(id)a3 maximumResultCount:(id)a4 entityIdentifier:(id)a5 entityMangledTypeName:(id)a6 queryIdentifier:(id)a7 queryMangledTypeName:(id)a8 intentMangledTypeNames:(id)a9 sortingOptions:(id)a10;
- (id)initWithString:(id)a0 entityMangledTypeName:(id)a1;
- (id)initWithString:(id)a0 entityType:(id)a1;

@end
