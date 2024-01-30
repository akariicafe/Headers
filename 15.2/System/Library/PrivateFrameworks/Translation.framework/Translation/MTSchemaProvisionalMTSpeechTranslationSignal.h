@class NSData;

@interface MTSchemaProvisionalMTSpeechTranslationSignal : SISchemaInstrumentationMessage {
    struct { unsigned char speechRequestStatus : 1; } _has;
}

@property (nonatomic) int speechRequestStatus;
@property (nonatomic) BOOL hasSpeechRequestStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
