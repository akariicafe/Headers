@class NSData;

@interface CLPInstSchemaCLPCDMReplayTaskEnded : SISchemaInstrumentationMessage {
    struct { unsigned char replayedSampleCount : 1; } _has;
}

@property (nonatomic) unsigned int replayedSampleCount;
@property (nonatomic) BOOL hasReplayedSampleCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteReplayedSampleCount;

@end
