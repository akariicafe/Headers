@class NSData;

@interface SISchemaAudioStopRecordingStarted : SISchemaInstrumentationMessage {
    struct { unsigned char stopReasonMajor : 1; unsigned char stopReasonMinor : 1; } _has;
}

@property (nonatomic) int stopReasonMajor;
@property (nonatomic) BOOL hasStopReasonMajor;
@property (nonatomic) int stopReasonMinor;
@property (nonatomic) BOOL hasStopReasonMinor;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteStopReasonMajor;
- (void)deleteStopReasonMinor;

@end
