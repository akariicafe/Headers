@class FLOWSchemaFLOWPhoneCallContext, FLOWSchemaFLOWIdentityContext, FLOWSchemaFLOWSmsContext, NSData, FLOWSchemaFLOWHomeAutomationContext, FLOWSchemaFLOWMediaPlayerContext, FLOWSchemaFLOWVoiceShortcutContext;

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
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDomaincontext;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
