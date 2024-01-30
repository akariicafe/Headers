@class PBUnknownFields;

@interface GEOUpdateLocation : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _metersFromStartOfRoute;
    unsigned int _minSecondsSinceLastUpdate;
    struct { unsigned char has_metersFromStartOfRoute : 1; unsigned char has_minSecondsSinceLastUpdate : 1; } _flags;
}

@property (nonatomic) BOOL hasMetersFromStartOfRoute;
@property (nonatomic) unsigned int metersFromStartOfRoute;
@property (nonatomic) BOOL hasMinSecondsSinceLastUpdate;
@property (nonatomic) unsigned int minSecondsSinceLastUpdate;
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
