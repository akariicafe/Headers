@class NSData;

@interface HALSchemaHALForceFetchEnded : SISchemaInstrumentationMessage {
    struct { unsigned char numDeviceContextsFetched : 1; } _has;
}

@property (nonatomic) unsigned int numDeviceContextsFetched;
@property (nonatomic) BOOL hasNumDeviceContextsFetched;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
