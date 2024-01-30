@class PBUnknownFields;

@interface GEOPDEnhancedPlacement : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _buildingIds;
    double _elevation;
    float _buildingFaceAzimuth;
    float _buildingHeight;
    struct { unsigned char has_elevation : 1; unsigned char has_buildingFaceAzimuth : 1; unsigned char has_buildingHeight : 1; } _flags;
}

+ (id)enhancedPlacementWithPlaceData:(id)a0;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
