@class NSData, SISchemaUUID;

@interface FLOWSchemaFLOWEntityContext : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfEntitiesShown : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) unsigned int numberOfEntitiesShown;
@property (nonatomic) BOOL hasNumberOfEntitiesShown;
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
