@class NSArray, NSData, SISchemaUUID;

@interface DODMLASRSchemaDODMLASRUserEditExperimentEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *redecodingResults;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addRedecodingResults:(id)a0;
- (void)clearRedecodingResults;
- (unsigned long long)redecodingResultsCount;
- (id)redecodingResultsAtIndex:(unsigned long long)a0;

@end
