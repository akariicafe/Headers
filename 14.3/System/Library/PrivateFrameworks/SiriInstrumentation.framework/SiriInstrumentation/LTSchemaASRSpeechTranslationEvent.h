@class NSString, NSData;

@interface LTSchemaASRSpeechTranslationEvent : PBCodable {
    struct { unsigned char timeToFirstPartialMs : 1; unsigned char timeToFinalResultMs : 1; unsigned char latencyFinalResultMs : 1; } _has;
}

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasRequestID;
@property (copy, nonatomic) NSString *selectedLocale;
@property (nonatomic) BOOL hasSelectedLocale;
@property (nonatomic) unsigned int timeToFirstPartialMs;
@property (nonatomic) BOOL hasTimeToFirstPartialMs;
@property (nonatomic) unsigned int timeToFinalResultMs;
@property (nonatomic) BOOL hasTimeToFinalResultMs;
@property (nonatomic) unsigned int latencyFinalResultMs;
@property (nonatomic) BOOL hasLatencyFinalResultMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
