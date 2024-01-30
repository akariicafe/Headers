@class NSData;

@interface NLXSchemaCDMSiriVocabularySpanDataTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char priorOrdinality : 1; unsigned char priorScore : 1; } _has;
}

@property (nonatomic) unsigned int priorOrdinality;
@property (nonatomic) BOOL hasPriorOrdinality;
@property (nonatomic) double priorScore;
@property (nonatomic) BOOL hasPriorScore;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
