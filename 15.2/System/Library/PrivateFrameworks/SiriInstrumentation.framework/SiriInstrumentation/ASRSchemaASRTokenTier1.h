@class NSString, NSData;

@interface ASRSchemaASRTokenTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *phoneSequence;
@property (nonatomic) BOOL hasPhoneSequence;
@property (copy, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) BOOL hasIpaPhoneSequence;
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
