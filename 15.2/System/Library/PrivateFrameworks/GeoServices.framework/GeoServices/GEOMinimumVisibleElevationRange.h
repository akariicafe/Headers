@class PBUnknownFields;

@interface GEOMinimumVisibleElevationRange : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _lowerBoundCm;
    int _upperBoundCm;
    struct { unsigned char has_lowerBoundCm : 1; unsigned char has_upperBoundCm : 1; } _flags;
}

@property (nonatomic) BOOL hasLowerBoundCm;
@property (nonatomic) int lowerBoundCm;
@property (nonatomic) BOOL hasUpperBoundCm;
@property (nonatomic) int upperBoundCm;
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
