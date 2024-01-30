@class NSData, SISchemaUUID;

@interface GRRSchemaGRRRanking : SISchemaInstrumentationMessage {
    struct { unsigned char parseType : 1; unsigned char score : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *parseId;
@property (nonatomic) BOOL hasParseId;
@property (nonatomic) int parseType;
@property (nonatomic) BOOL hasParseType;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteParseType;
- (void)deleteParseId;
- (void)deleteScore;

@end
