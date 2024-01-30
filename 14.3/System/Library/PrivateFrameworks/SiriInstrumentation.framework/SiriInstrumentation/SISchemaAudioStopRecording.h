@class NSData;

@interface SISchemaAudioStopRecording : PBCodable {
    struct { unsigned char endpointType : 1; } _has;
}

@property (nonatomic) int endpointType;
@property (nonatomic) BOOL hasEndpointType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
