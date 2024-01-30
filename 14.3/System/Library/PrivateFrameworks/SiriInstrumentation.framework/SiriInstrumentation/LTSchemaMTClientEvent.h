@class NSData, LTSchemaSpeechTranslationEvent, LTSchemaDisambiguationSpeechTranslationEvent, LTSchemaTTSSpeechTranslationEvent, LTSchemaASRSpeechTranslationEvent, LTSchemaSafariFeedbackEvent, LTSchemaBatchTranslationEvent, LTSchemaLIDSpeechTranslationEvent, LTSchemaMTSpeechTranslationEvent;

@interface LTSchemaMTClientEvent : PBCodable

@property (retain, nonatomic) LTSchemaSafariFeedbackEvent *safariFeedbackEvent;
@property (nonatomic) BOOL hasSafariFeedbackEvent;
@property (retain, nonatomic) LTSchemaBatchTranslationEvent *batchTranslationEvent;
@property (nonatomic) BOOL hasBatchTranslationEvent;
@property (retain, nonatomic) LTSchemaSpeechTranslationEvent *speechTranslationEvent;
@property (nonatomic) BOOL hasSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaLIDSpeechTranslationEvent *lidSpeechTranslationEvent;
@property (nonatomic) BOOL hasLidSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaDisambiguationSpeechTranslationEvent *disambiguationSpeechTranslationEvent;
@property (nonatomic) BOOL hasDisambiguationSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaASRSpeechTranslationEvent *asrSpeechTranslationEvent;
@property (nonatomic) BOOL hasAsrSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaMTSpeechTranslationEvent *mtSpeechTranslationEvent;
@property (nonatomic) BOOL hasMtSpeechTranslationEvent;
@property (retain, nonatomic) LTSchemaTTSSpeechTranslationEvent *ttsspeechTranslationEvent;
@property (nonatomic) BOOL hasTtsspeechTranslationEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (int)getAnyEventType;
- (id)getTypeId;

@end
