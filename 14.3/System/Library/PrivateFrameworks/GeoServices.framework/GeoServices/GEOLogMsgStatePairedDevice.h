@class GEOLogMsgStateDeviceIdentifier;

@interface GEOLogMsgStatePairedDevice : PBCodable <NSCopying> {
    GEOLogMsgStateDeviceIdentifier *_pairedDeviceIdentifier;
    int _type;
    BOOL _isConnected;
    struct { unsigned char has_type : 1; unsigned char has_isConnected : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasIsConnected;
@property (nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL hasPairedDeviceIdentifier;
@property (retain, nonatomic) GEOLogMsgStateDeviceIdentifier *pairedDeviceIdentifier;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)typeAsString:(int)a0;

@end
