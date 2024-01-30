@class PBUnknownFields;

@interface GEOPoint : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _elevationCm;
    unsigned int _offsetM;
    struct { unsigned char has_elevationCm : 1; unsigned char has_offsetM : 1; } _flags;
}

@property (nonatomic) BOOL hasOffsetM;
@property (nonatomic) unsigned int offsetM;
@property (nonatomic) BOOL hasElevationCm;
@property (nonatomic) int elevationCm;
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
