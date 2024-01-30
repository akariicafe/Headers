@class FLOWSchemaFLOWSmsContext, FLOWSchemaFLOWPegasusContext, NSData, FLOWSchemaFLOWHomeCommunicationContext, FLOWSchemaFLOWHomeAutomationContext, FLOWSchemaFLOWVoiceShortcutContext, FLOWSchemaFLOWIdentityContext, FLOWSchemaFLOWPhoneCallContext, FLOWSchemaFLOWMediaPlayerContext, FLOWSchemaFLOWInformationPluginContext, FLOWSchemaFLOWBriefingContext;

@interface FLOWSchemaFLOWDomainContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWVoiceShortcutContext *voiceShortcutContext;
@property (nonatomic) BOOL hasVoiceShortcutContext;
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationContext *homeAutomationContext;
@property (nonatomic) BOOL hasHomeAutomationContext;
@property (retain, nonatomic) FLOWSchemaFLOWPhoneCallContext *phoneCallContext;
@property (nonatomic) BOOL hasPhoneCallContext;
@property (retain, nonatomic) FLOWSchemaFLOWSmsContext *smsContext;
@property (nonatomic) BOOL hasSmsContext;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerContext *mediaPlayerContext;
@property (nonatomic) BOOL hasMediaPlayerContext;
@property (retain, nonatomic) FLOWSchemaFLOWIdentityContext *identityContext;
@property (nonatomic) BOOL hasIdentityContext;
@property (retain, nonatomic) FLOWSchemaFLOWBriefingContext *briefingContext;
@property (nonatomic) BOOL hasBriefingContext;
@property (retain, nonatomic) FLOWSchemaFLOWPegasusContext *pegasusContext;
@property (nonatomic) BOOL hasPegasusContext;
@property (retain, nonatomic) FLOWSchemaFLOWInformationPluginContext *informationPluginContext;
@property (nonatomic) BOOL hasInformationPluginContext;
@property (retain, nonatomic) FLOWSchemaFLOWHomeCommunicationContext *homeCommunicationContext;
@property (nonatomic) BOOL hasHomeCommunicationContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDomaincontext;

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
- (void)deleteBriefingContext;
- (void)deleteHomeAutomationContext;
- (void)deleteHomeCommunicationContext;
- (void)deleteIdentityContext;
- (void)deleteInformationPluginContext;
- (void)deleteMediaPlayerContext;
- (void)deletePegasusContext;
- (void)deletePhoneCallContext;
- (void)deleteSmsContext;
- (void)deleteVoiceShortcutContext;

@end
