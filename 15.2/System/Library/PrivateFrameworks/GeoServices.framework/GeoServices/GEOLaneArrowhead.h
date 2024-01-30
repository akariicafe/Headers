@class PBUnknownFields;

@interface GEOLaneArrowhead : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _angle;
    int _category;
    struct { unsigned char has_angle : 1; unsigned char has_category : 1; } _flags;
}

@property (nonatomic) BOOL hasAngle;
@property (nonatomic) int angle;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) int category;
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
- (id)categoryAsString:(int)a0;
- (int)StringAsCategory:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
