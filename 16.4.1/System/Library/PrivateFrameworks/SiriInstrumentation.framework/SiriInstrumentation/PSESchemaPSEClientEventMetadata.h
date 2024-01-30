@class NSData, SISchemaUUID;

@interface PSESchemaPSEClientEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char siriEngagementTaskSuccess : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *uiSessionId;
@property (nonatomic) BOOL hasUiSessionId;
@property (retain, nonatomic) SISchemaUUID *originalLastRequestId;
@property (nonatomic) BOOL hasOriginalLastRequestId;
@property (nonatomic) int siriEngagementTaskSuccess;
@property (nonatomic) BOOL hasSiriEngagementTaskSuccess;
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
- (void)deleteSiriEngagementTaskSuccess;
- (void)deleteOriginalLastRequestId;
- (void)deleteUiSessionId;

@end
