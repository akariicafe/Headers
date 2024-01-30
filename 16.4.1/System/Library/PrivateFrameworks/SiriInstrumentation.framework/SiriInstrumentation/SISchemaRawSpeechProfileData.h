@class NSData;

@interface SISchemaRawSpeechProfileData : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *r;
@property (nonatomic) BOOL hasR;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteR;

@end
