@interface GEOLogMsgStateSummaryLookAroundLog : PBCodable <NSCopying> {
    unsigned int _durationSec;
    BOOL _hadMoveActions;
    BOOL _hadPanActions;
    BOOL _hadPoiTapActions;
    BOOL _hadShareActions;
    BOOL _hadZoomActions;
    struct { unsigned char has_durationSec : 1; unsigned char has_hadMoveActions : 1; unsigned char has_hadPanActions : 1; unsigned char has_hadPoiTapActions : 1; unsigned char has_hadShareActions : 1; unsigned char has_hadZoomActions : 1; } _flags;
}

@property (nonatomic) BOOL hasDurationSec;
@property (nonatomic) unsigned int durationSec;
@property (nonatomic) BOOL hasHadPanActions;
@property (nonatomic) BOOL hadPanActions;
@property (nonatomic) BOOL hasHadZoomActions;
@property (nonatomic) BOOL hadZoomActions;
@property (nonatomic) BOOL hasHadMoveActions;
@property (nonatomic) BOOL hadMoveActions;
@property (nonatomic) BOOL hasHadPoiTapActions;
@property (nonatomic) BOOL hadPoiTapActions;
@property (nonatomic) BOOL hasHadShareActions;
@property (nonatomic) BOOL hadShareActions;

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

@end
