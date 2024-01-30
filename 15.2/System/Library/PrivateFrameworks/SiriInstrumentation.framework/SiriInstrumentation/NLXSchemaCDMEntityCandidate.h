@class NSData, USOSchemaUSOGraph;

@interface NLXSchemaCDMEntityCandidate : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; } _has;
}

@property (retain, nonatomic) USOSchemaUSOGraph *entity;
@property (nonatomic) BOOL hasEntity;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
