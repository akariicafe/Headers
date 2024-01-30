@class NSData;

@interface ORCHSchemaORCHCDMRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; unsigned char delegatedUserDialogAct : 1; } _has;
}

@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL delegatedUserDialogAct;
@property (nonatomic) BOOL hasDelegatedUserDialogAct;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteDelegatedUserDialogAct;
- (void)deleteStatus;

@end
