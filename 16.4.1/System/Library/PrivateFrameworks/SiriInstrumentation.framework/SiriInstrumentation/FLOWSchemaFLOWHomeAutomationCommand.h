@class NSArray, NSData, SISchemaUUID;

@interface FLOWSchemaFLOWHomeAutomationCommand : SISchemaInstrumentationMessage {
    struct { unsigned char commandType : 1; unsigned char commandOutcome : 1; unsigned char commandErrorReason : 1; unsigned char commandDuration : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *commandId;
@property (nonatomic) BOOL hasCommandId;
@property (nonatomic) int commandType;
@property (nonatomic) BOOL hasCommandType;
@property (nonatomic) int commandOutcome;
@property (nonatomic) BOOL hasCommandOutcome;
@property (nonatomic) int commandErrorReason;
@property (nonatomic) BOOL hasCommandErrorReason;
@property (nonatomic) unsigned int commandDuration;
@property (nonatomic) BOOL hasCommandDuration;
@property (copy, nonatomic) NSArray *homeAutomationRequests;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteCommandId;
- (void)addHomeAutomationRequests:(id)a0;
- (void)clearHomeAutomationRequests;
- (void)deleteCommandDuration;
- (void)deleteCommandErrorReason;
- (void)deleteCommandOutcome;
- (void)deleteCommandType;
- (void)deleteHomeAutomationRequests;
- (id)homeAutomationRequestsAtIndex:(unsigned long long)a0;
- (unsigned long long)homeAutomationRequestsCount;

@end
