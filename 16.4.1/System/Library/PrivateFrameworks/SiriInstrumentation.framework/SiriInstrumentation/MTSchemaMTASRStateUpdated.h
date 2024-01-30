@class NSData;

@interface MTSchemaMTASRStateUpdated : SISchemaInstrumentationMessage {
    struct { unsigned char asrState : 1; } _has;
}

@property (nonatomic) int asrState;
@property (nonatomic) BOOL hasAsrState;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteAsrState;

@end
