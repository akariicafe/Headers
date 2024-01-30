@class NSString, NSData;

@interface SISchemaLocaleIdentifier : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasCountryCode;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) BOOL hasLanguageCode;
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
- (void)deleteCountryCode;
- (void)deleteLanguageCode;

@end
