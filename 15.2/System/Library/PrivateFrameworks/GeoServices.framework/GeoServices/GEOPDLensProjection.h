@interface GEOPDLensProjection : PBCodable <NSCopying> {
    double _cx;
    double _cy;
    double _fovH;
    double _fovS;
    double _k2;
    double _k3;
    double _k4;
    double _lx;
    double _ly;
    int _type;
    struct { unsigned char has_cx : 1; unsigned char has_cy : 1; unsigned char has_fovH : 1; unsigned char has_fovS : 1; unsigned char has_k2 : 1; unsigned char has_k3 : 1; unsigned char has_k4 : 1; unsigned char has_lx : 1; unsigned char has_ly : 1; unsigned char has_type : 1; } _flags;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
