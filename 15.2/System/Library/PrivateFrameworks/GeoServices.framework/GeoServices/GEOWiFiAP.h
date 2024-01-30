@class NSString;

@interface GEOWiFiAP : PBCodable <NSCopying> {
    NSString *_uniqueID;
    unsigned int _channel;
    int _origin;
    int _rssi;
    struct { unsigned char has_channel : 1; unsigned char has_origin : 1; unsigned char has_rssi : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) int origin;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (int)StringAsOrigin:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)originAsString:(int)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
