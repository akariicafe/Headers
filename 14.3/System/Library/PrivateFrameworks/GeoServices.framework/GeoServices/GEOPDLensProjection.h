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

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasFovS;
@property (nonatomic) double fovS;
@property (nonatomic) BOOL hasFovH;
@property (nonatomic) double fovH;
@property (nonatomic) BOOL hasK2;
@property (nonatomic) double k2;
@property (nonatomic) BOOL hasK3;
@property (nonatomic) double k3;
@property (nonatomic) BOOL hasK4;
@property (nonatomic) double k4;
@property (nonatomic) BOOL hasCx;
@property (nonatomic) double cx;
@property (nonatomic) BOOL hasCy;
@property (nonatomic) double cy;
@property (nonatomic) BOOL hasLx;
@property (nonatomic) double lx;
@property (nonatomic) BOOL hasLy;
@property (nonatomic) double ly;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
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
- (id)initWithDictionary:(id)a0;

@end
