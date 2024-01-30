@class PBUnknownFields;

@interface GEOTransitDepartureEntry : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _tripMuid;
    unsigned int _departureTime;
    struct { unsigned char has_tripMuid : 1; unsigned char has_departureTime : 1; } _flags;
}

@property (nonatomic) BOOL hasTripMuid;
@property (nonatomic) unsigned long long tripMuid;
@property (nonatomic) BOOL hasDepartureTime;
@property (nonatomic) unsigned int departureTime;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
