@class GEONavCameraState;

@interface GEOLogMsgStateNavigation : PBCodable <NSCopying> {
    double _distanceToDestination;
    GEONavCameraState *_navCameraState;
    int _lineType;
    int _navState;
    struct { unsigned char has_distanceToDestination : 1; unsigned char has_lineType : 1; unsigned char has_navState : 1; } _flags;
}

@property (nonatomic) BOOL hasLineType;
@property (nonatomic) int lineType;
@property (nonatomic) BOOL hasNavState;
@property (nonatomic) int navState;
@property (nonatomic) BOOL hasDistanceToDestination;
@property (nonatomic) double distanceToDestination;
@property (readonly, nonatomic) BOOL hasNavCameraState;
@property (retain, nonatomic) GEONavCameraState *navCameraState;

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
- (void).cxx_destruct;
- (int)StringAsLineType:(id)a0;
- (int)StringAsNavState:(id)a0;
- (id)lineTypeAsString:(int)a0;
- (id)navStateAsString:(int)a0;

@end
