@class NSString, NSData;

@interface LTSchemaTTSSpeechTranslationEvent : PBCodable {
    struct { unsigned char responseTimeMs : 1; unsigned char playbackBeginTimeMs : 1; } _has;
}

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasRequestID;
@property (copy, nonatomic) NSString *selectedLocale;
@property (nonatomic) BOOL hasSelectedLocale;
@property (nonatomic) unsigned int responseTimeMs;
@property (nonatomic) BOOL hasResponseTimeMs;
@property (nonatomic) unsigned int playbackBeginTimeMs;
@property (nonatomic) BOOL hasPlaybackBeginTimeMs;
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
