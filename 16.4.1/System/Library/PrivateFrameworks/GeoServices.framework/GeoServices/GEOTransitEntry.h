@class NSData, PBUnknownFields;

@interface GEOTransitEntry : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _lineMuid;
    NSData *_routingParameters;
    unsigned long long _tripMuid;
    unsigned int _tripStaticDepartureTime;
    unsigned int _windowStartTime;
    struct { unsigned char has_lineMuid : 1; unsigned char has_tripMuid : 1; unsigned char has_tripStaticDepartureTime : 1; unsigned char has_windowStartTime : 1; } _flags;
}

@property (nonatomic) BOOL hasTripMuid;
@property (nonatomic) unsigned long long tripMuid;
@property (nonatomic) BOOL hasLineMuid;
@property (nonatomic) unsigned long long lineMuid;
@property (nonatomic) BOOL hasTripStaticDepartureTime;
@property (nonatomic) unsigned int tripStaticDepartureTime;
@property (nonatomic) BOOL hasWindowStartTime;
@property (nonatomic) unsigned int windowStartTime;
@property (readonly, nonatomic) BOOL hasRoutingParameters;
@property (retain, nonatomic) NSData *routingParameters;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
