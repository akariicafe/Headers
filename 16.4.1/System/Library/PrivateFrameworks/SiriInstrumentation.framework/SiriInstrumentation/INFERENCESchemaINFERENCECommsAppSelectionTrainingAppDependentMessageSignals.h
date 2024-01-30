@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentMessageSignals : SISchemaInstrumentationMessage {
    struct { unsigned char appAffinityScoreForMessages : 1; unsigned char appAffinityScoreForMessagesUsingSiri : 1; unsigned char appAffinityScoreForMessagesReceived : 1; } _has;
}

@property (nonatomic) float appAffinityScoreForMessages;
@property (nonatomic) BOOL hasAppAffinityScoreForMessages;
@property (nonatomic) float appAffinityScoreForMessagesUsingSiri;
@property (nonatomic) BOOL hasAppAffinityScoreForMessagesUsingSiri;
@property (nonatomic) float appAffinityScoreForMessagesReceived;
@property (nonatomic) BOOL hasAppAffinityScoreForMessagesReceived;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteAppAffinityScoreForMessages;
- (void)deleteAppAffinityScoreForMessagesReceived;
- (void)deleteAppAffinityScoreForMessagesUsingSiri;

@end
