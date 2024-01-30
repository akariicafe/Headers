@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDSSearchEvChargingParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_networks;
    NSMutableArray *_ports;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_networks : 1; unsigned char read_ports : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *ports;
@property (retain, nonatomic) NSMutableArray *networks;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)networkType;
+ (Class)portType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)addNetwork:(id)a0;
- (id)portAtIndex:(unsigned long long)a0;
- (unsigned long long)networksCount;
- (void)clearNetworks;
- (id)networkAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addPort:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)portsCount;
- (void)clearPorts;

@end
