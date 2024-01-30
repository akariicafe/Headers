@class GEOCarInfo;

@interface GEOLogMsgStateCarPlay : PBCodable <NSCopying> {
    GEOCarInfo *_carInfo;
    BOOL _isConnected;
    struct { unsigned char has_isConnected : 1; } _flags;
}

@property (nonatomic) BOOL hasIsConnected;
@property (nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL hasCarInfo;
@property (retain, nonatomic) GEOCarInfo *carInfo;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
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
