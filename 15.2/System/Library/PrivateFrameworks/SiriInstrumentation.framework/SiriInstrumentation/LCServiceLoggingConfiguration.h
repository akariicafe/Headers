@class NSArray, NSData, LCServiceLoggingParameters;

@interface LCServiceLoggingConfiguration : SISchemaInstrumentationMessage {
    struct { unsigned char configurationVersion : 1; } _has;
}

@property (retain, nonatomic) LCServiceLoggingParameters *defaultParameters;
@property (nonatomic) BOOL hasDefaultParameters;
@property (nonatomic) int configurationVersion;
@property (nonatomic) BOOL hasConfigurationVersion;
@property (copy, nonatomic) NSArray *applications;
@property (copy, nonatomic) NSArray *blacklistedBundleIdentifiers;
@property (copy, nonatomic) NSArray *denyListedCategories;
@property (readonly, nonatomic) NSData *jsonData;

- (void)addBlacklistedBundleIdentifiers:(id)a0;
- (int)denyListedCategoriesAtIndex:(unsigned long long)a0;
- (void)clearApplications;
- (BOOL)readFrom:(id)a0;
- (void)addApplications:(id)a0;
- (unsigned long long)applicationsCount;
- (unsigned long long)denyListedCategoriesCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)blacklistedBundleIdentifiersCount;
- (id)initWithJSON:(id)a0;
- (id)applicationsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)blacklistedBundleIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearBlacklistedBundleIdentifiers;
- (void)clearDenyListedCategories;
- (void)addDenyListedCategories:(int)a0;
- (id)dictionaryRepresentation;

@end
