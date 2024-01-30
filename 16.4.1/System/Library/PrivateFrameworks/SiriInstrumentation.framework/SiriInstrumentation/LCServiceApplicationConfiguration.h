@class NSString, NSArray, NSData, LCServiceLoggingParameters;

@interface LCServiceApplicationConfiguration : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) LCServiceLoggingParameters *applicationParameters;
@property (nonatomic) BOOL hasApplicationParameters;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSArray *blacklistedCategories;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)categoriesCount;
- (void)addCategories:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)clearCategories;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)categoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addBlacklistedCategories:(int)a0;
- (int)blacklistedCategoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)blacklistedCategoriesCount;
- (void)clearBlacklistedCategories;
- (void)deleteApplicationParameters;
- (void)deleteBlacklistedCategories;
- (void)deleteBundleIdentifier;
- (void)deleteCategories;

@end
