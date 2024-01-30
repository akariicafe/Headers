@class SISchemaHardwareInterfaceIdentifier, NSData;

@interface SISchemaAudioFirstBufferRecorded : PBCodable {
    struct { unsigned char audioInputRoute : 1; } _has;
}

@property (nonatomic) int audioInputRoute;
@property (nonatomic) BOOL hasAudioInputRoute;
@property (retain, nonatomic) SISchemaHardwareInterfaceIdentifier *hardwareInterfaceVendorID;
@property (nonatomic) BOOL hasHardwareInterfaceVendorID;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
