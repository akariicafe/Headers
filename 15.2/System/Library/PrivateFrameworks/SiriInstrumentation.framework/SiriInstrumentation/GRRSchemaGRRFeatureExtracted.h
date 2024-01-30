@class GRRSchemaGRRSource, NSArray, NSData;

@interface GRRSchemaGRRFeatureExtracted : SISchemaInstrumentationMessage

@property (retain, nonatomic) GRRSchemaGRRSource *source;
@property (nonatomic) BOOL hasSource;
@property (copy, nonatomic) NSArray *featureNames;
@property (copy, nonatomic) NSArray *features;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)featuresCount;
- (void)clearFeatures;
- (BOOL)readFrom:(id)a0;
- (id)featuresAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addFeatureNames:(id)a0;
- (void)addFeatures:(id)a0;
- (void)clearFeatureNames;
- (unsigned long long)featureNamesCount;
- (id)featureNamesAtIndex:(unsigned long long)a0;

@end
