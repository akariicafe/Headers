@class NSMutableArray, PBUnknownFields;

@interface GEOPDLabelGeometry : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_labelShapes;
    BOOL _hasSelectionPolygon;
    struct { unsigned char has_hasSelectionPolygon : 1; } _flags;
}

+ (id)labelGeometryWithPlaceData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
