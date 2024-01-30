@class NSData;

@interface MHSchemaMHEndpointerUsed : SISchemaInstrumentationMessage {
    struct { unsigned char endpointer : 1; } _has;
}

@property (nonatomic) int endpointer;
@property (nonatomic) BOOL hasEndpointer;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
