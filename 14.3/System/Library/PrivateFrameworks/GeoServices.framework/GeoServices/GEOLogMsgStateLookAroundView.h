@class GEOLocation;

@interface GEOLogMsgStateLookAroundView : PBCodable <NSCopying> {
    GEOLocation *_location;
    double _zoomLevel;
    unsigned int _heading;
    unsigned int _numberPoisInView;
    BOOL _isLabelingShown;
    struct { unsigned char has_zoomLevel : 1; unsigned char has_heading : 1; unsigned char has_numberPoisInView : 1; unsigned char has_isLabelingShown : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) BOOL hasHeading;
@property (nonatomic) unsigned int heading;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) double zoomLevel;
@property (nonatomic) BOOL hasNumberPoisInView;
@property (nonatomic) unsigned int numberPoisInView;
@property (nonatomic) BOOL hasIsLabelingShown;
@property (nonatomic) BOOL isLabelingShown;

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
- (id)initWithDictionary:(id)a0;

@end
