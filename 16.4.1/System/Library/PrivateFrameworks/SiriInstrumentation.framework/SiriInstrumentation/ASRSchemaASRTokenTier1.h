@class NSString, NSData;

@interface ASRSchemaASRTokenTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *phoneSequence;
@property (nonatomic) BOOL hasPhoneSequence;
@property (copy, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) BOOL hasIpaPhoneSequence;
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
- (void)deleteIpaPhoneSequence;
- (void)deletePhoneSequence;
- (void)deleteText;

@end
