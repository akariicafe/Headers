@class NSString, NSArray, NSData;

@interface GRRSchemaGRRHypothesisRankingStarted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (copy, nonatomic) NSArray *featureFlags;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addFeatureFlags:(id)a0;
- (void)clearFeatureFlags;
- (unsigned long long)featureFlagsCount;
- (id)featureFlagsAtIndex:(unsigned long long)a0;

@end
