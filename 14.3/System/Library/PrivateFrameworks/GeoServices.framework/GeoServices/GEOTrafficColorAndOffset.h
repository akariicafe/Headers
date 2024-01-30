@class PBUnknownFields;

@interface GEOTrafficColorAndOffset : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _color;
    unsigned int _offset;
    struct { unsigned char has_color : 1; unsigned char has_offset : 1; } _flags;
}

@property (nonatomic) BOOL hasColor;
@property (nonatomic) unsigned int color;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) unsigned int offset;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
