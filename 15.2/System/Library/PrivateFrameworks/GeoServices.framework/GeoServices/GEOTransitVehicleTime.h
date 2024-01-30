@class PBUnknownFields;

@interface GEOTransitVehicleTime : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _absTime;
    struct { unsigned char has_absTime : 1; } _flags;
}

@property (nonatomic) BOOL hasAbsTime;
@property (nonatomic) unsigned int absTime;
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
