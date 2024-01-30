@class NSString, NSArray, NSData, LCServiceLoggingParameters;

@interface LCServiceApplicationConfiguration : PBCodable

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) LCServiceLoggingParameters *applicationParameters;
@property (nonatomic) BOOL hasApplicationParameters;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSArray *blacklistedCategories;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addCategories:(id)a0;
- (void)addBlacklistedCategories:(int)a0;
- (void)clearCategories;
- (unsigned long long)categoriesCount;
- (id)categoriesAtIndex:(unsigned long long)a0;
- (void)clearBlacklistedCategories;
- (unsigned long long)blacklistedCategoriesCount;
- (int)blacklistedCategoriesAtIndex:(unsigned long long)a0;

@end
