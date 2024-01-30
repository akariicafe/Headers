@class NSData;

@interface SISchemaUIStatePresenting : SISchemaInstrumentationMessage {
    struct { unsigned char presentationType : 1; } _has;
}

@property (nonatomic) int presentationType;
@property (nonatomic) BOOL hasPresentationType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deletePresentationType;

@end
