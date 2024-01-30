@class NSData, SISchemaUUID;

@interface OPTINSchemaOPTINStatePropagationEvent : SISchemaTopLevelUnionType {
    struct { unsigned char optInState : 1; unsigned char propagationState : 1; } _has;
}

@property (nonatomic) int optInState;
@property (nonatomic) BOOL hasOptInState;
@property (nonatomic) int propagationState;
@property (nonatomic) BOOL hasPropagationState;
@property (retain, nonatomic) SISchemaUUID *hashedHomeKitAccessoryId;
@property (nonatomic) BOOL hasHashedHomeKitAccessoryId;
@property (readonly, nonatomic) NSData *jsonData;

- (int)getAnyEventType;
- (id)suppressMessageUnderConditions;
- (id)qualifiedMessageName;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteHashedHomeKitAccessoryId;
- (void)deleteOptInState;
- (void)deletePropagationState;

@end
