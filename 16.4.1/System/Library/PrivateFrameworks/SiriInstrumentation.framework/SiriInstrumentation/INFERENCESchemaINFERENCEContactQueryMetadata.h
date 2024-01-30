@class NSData;

@interface INFERENCESchemaINFERENCEContactQueryMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char hasName : 1; unsigned char hasRelationship : 1; unsigned char hasHandleLabel : 1; unsigned char hasHandleValue : 1; unsigned char hasMeReference : 1; unsigned char hasContactId : 1; unsigned char isEmergencyQuery : 1; } _has;
}

@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasHasName;
@property (nonatomic) BOOL hasRelationship;
@property (nonatomic) BOOL hasHasRelationship;
@property (nonatomic) BOOL hasHandleLabel;
@property (nonatomic) BOOL hasHasHandleLabel;
@property (nonatomic) BOOL hasHandleValue;
@property (nonatomic) BOOL hasHasHandleValue;
@property (nonatomic) BOOL hasMeReference;
@property (nonatomic) BOOL hasHasMeReference;
@property (nonatomic) BOOL hasContactId;
@property (nonatomic) BOOL hasHasContactId;
@property (nonatomic) BOOL isEmergencyQuery;
@property (nonatomic) BOOL hasIsEmergencyQuery;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteHasContactId;
- (void)deleteHasHandleLabel;
- (void)deleteHasHandleValue;
- (void)deleteHasMeReference;
- (void)deleteHasName;
- (void)deleteHasRelationship;
- (void)deleteIsEmergencyQuery;

@end
