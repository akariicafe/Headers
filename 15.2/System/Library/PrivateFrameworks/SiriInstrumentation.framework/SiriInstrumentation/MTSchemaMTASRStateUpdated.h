@class NSData;

@interface MTSchemaMTASRStateUpdated : SISchemaInstrumentationMessage {
    struct { unsigned char asrState : 1; } _has;
}

@property (nonatomic) int asrState;
@property (nonatomic) BOOL hasAsrState;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
