@class NSString, NSArray, NSData;

@interface DODMLASRSchemaDODMLASRUserEditExperimentRedecodingResults : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *datapackVersion;
@property (nonatomic) BOOL hasDatapackVersion;
@property (copy, nonatomic) NSArray *confusionPairs;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addConfusionPairs:(id)a0;
- (void)clearConfusionPairs;
- (unsigned long long)confusionPairsCount;
- (id)confusionPairsAtIndex:(unsigned long long)a0;

@end
