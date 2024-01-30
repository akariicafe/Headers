@class NSData, MHSchemaMHVoiceTriggerEventInfo;

@interface MHSchemaMHVoiceTriggerSecondPassRejected : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; } _has;
}

@property (retain, nonatomic) MHSchemaMHVoiceTriggerEventInfo *voiceTriggerEventInfo;
@property (nonatomic) BOOL hasVoiceTriggerEventInfo;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
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
