@class NSData;

@interface SISchemaAnyEvent : SISchemaInstrumentationMessage {
    struct { unsigned char anyEventType : 1; } _has;
}

@property (nonatomic) int anyEventType;
@property (nonatomic) BOOL hasAnyEventType;
@property (copy, nonatomic) NSData *payload;
@property (nonatomic) BOOL hasPayload;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithAnyEventType:(int)a0 payload:(id)a1;
- (BOOL)readFrom:(id)a0;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (id)unwrap;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (Class)topLevelUnionTypeClass;
- (id)dictionaryRepresentation;

@end
