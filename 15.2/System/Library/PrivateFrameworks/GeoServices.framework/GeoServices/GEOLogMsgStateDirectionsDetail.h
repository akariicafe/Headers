@interface GEOLogMsgStateDirectionsDetail : PBCodable <NSCopying> {
    int _transportType;
    BOOL _isEv;
    struct { unsigned char has_transportType : 1; unsigned char has_isEv : 1; } _flags;
}

@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) BOOL hasIsEv;
@property (nonatomic) BOOL isEv;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)transportTypeAsString:(int)a0;
- (int)StringAsTransportType:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
