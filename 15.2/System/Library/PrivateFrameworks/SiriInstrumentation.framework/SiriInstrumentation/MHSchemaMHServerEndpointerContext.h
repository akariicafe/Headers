@class NSData;

@interface MHSchemaMHServerEndpointerContext : SISchemaInstrumentationMessage {
    struct { unsigned char enabled : 1; } _has;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
