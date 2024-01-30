@class PBUnknownFields;

@interface GEOLaneWidth : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _offset;
    unsigned int _width;
    unsigned int _zilchPathIndex;
    struct { unsigned char has_offset : 1; unsigned char has_width : 1; unsigned char has_zilchPathIndex : 1; } _flags;
}

@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int width;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) unsigned int offset;
@property (nonatomic) BOOL hasZilchPathIndex;
@property (nonatomic) unsigned int zilchPathIndex;
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
