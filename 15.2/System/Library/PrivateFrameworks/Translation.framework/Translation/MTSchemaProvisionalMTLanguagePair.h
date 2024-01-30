@class NSData;

@interface MTSchemaProvisionalMTLanguagePair : SISchemaInstrumentationMessage {
    struct { unsigned char sourceLanguage : 1; unsigned char targetLanguage : 1; } _has;
}

@property (nonatomic) int sourceLanguage;
@property (nonatomic) BOOL hasSourceLanguage;
@property (nonatomic) int targetLanguage;
@property (nonatomic) BOOL hasTargetLanguage;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
