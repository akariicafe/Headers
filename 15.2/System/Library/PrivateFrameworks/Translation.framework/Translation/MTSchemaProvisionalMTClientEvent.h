@class NSData, MTSchemaProvisionalMTSessionContext, MTSchemaProvisionalMTClientEventMetadata, MTSchemaProvisionalMTInvocationContext, MTSchemaProvisionalMTAppLanguageIdentificationContext, MTSchemaProvisionalMTAppLanguageIdentificationInteracted, MTSchemaProvisionalMTBatchRequestContext, MTSchemaProvisionalMTAppDisambiguationInteracted, MTSchemaProvisionalMTSpeechTranslationSignal, MTSchemaProvisionalMTAppTextPasted, MTSchemaProvisionalMTUserFacingSessionSignal;

@interface MTSchemaProvisionalMTClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) MTSchemaProvisionalMTClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) MTSchemaProvisionalMTBatchRequestContext *batchRequestContext;
@property (nonatomic) BOOL hasBatchRequestContext;
@property (retain, nonatomic) MTSchemaProvisionalMTInvocationContext *invocationContext;
@property (nonatomic) BOOL hasInvocationContext;
@property (retain, nonatomic) MTSchemaProvisionalMTSessionContext *sessionContext;
@property (nonatomic) BOOL hasSessionContext;
@property (retain, nonatomic) MTSchemaProvisionalMTAppTextPasted *appTextPasted;
@property (nonatomic) BOOL hasAppTextPasted;
@property (retain, nonatomic) MTSchemaProvisionalMTAppLanguageIdentificationContext *appLIDContext;
@property (nonatomic) BOOL hasAppLIDContext;
@property (retain, nonatomic) MTSchemaProvisionalMTAppLanguageIdentificationInteracted *appLIDInteracted;
@property (nonatomic) BOOL hasAppLIDInteracted;
@property (retain, nonatomic) MTSchemaProvisionalMTAppDisambiguationInteracted *appDisambiguationInteracted;
@property (nonatomic) BOOL hasAppDisambiguationInteracted;
@property (retain, nonatomic) MTSchemaProvisionalMTSpeechTranslationSignal *speechRecognitionSignal;
@property (nonatomic) BOOL hasSpeechRecognitionSignal;
@property (retain, nonatomic) MTSchemaProvisionalMTUserFacingSessionSignal *userFacingSessionSignal;
@property (nonatomic) BOOL hasUserFacingSessionSignal;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)readFrom:(id)a0;
- (int)getAnyEventType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (BOOL)isProvisional;
- (id)getTypeId;
- (id)getVersion;

@end
