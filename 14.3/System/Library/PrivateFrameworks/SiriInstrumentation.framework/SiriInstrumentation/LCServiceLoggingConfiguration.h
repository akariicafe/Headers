@class NSArray, NSData, LCServiceLoggingParameters;

@interface LCServiceLoggingConfiguration : PBCodable

@property (retain, nonatomic) LCServiceLoggingParameters *defaultParameters;
@property (nonatomic) BOOL hasDefaultParameters;
@property (nonatomic) int configurationVersion;
@property (nonatomic) BOOL hasConfigurationVersion;
@property (copy, nonatomic) NSArray *applications;
@property (copy, nonatomic) NSArray *blacklistedBundleIdentifiers;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)clearBlacklistedBundleIdentifiers;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addBlacklistedBundleIdentifiers:(id)a0;
- (void)addApplications:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)blacklistedBundleIdentifiersCount;
- (id)applicationsAtIndex:(unsigned long long)a0;
- (void)clearApplications;
- (id)blacklistedBundleIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)applicationsCount;

@end
