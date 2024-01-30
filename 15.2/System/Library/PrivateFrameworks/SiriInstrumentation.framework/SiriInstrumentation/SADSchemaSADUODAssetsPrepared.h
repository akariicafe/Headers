@class NSData;

@interface SADSchemaSADUODAssetsPrepared : SISchemaInstrumentationMessage {
    struct { unsigned char locale : 1; unsigned char elapsedSeconds : 1; } _has;
}

@property (nonatomic) int locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) unsigned int elapsedSeconds;
@property (nonatomic) BOOL hasElapsedSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
