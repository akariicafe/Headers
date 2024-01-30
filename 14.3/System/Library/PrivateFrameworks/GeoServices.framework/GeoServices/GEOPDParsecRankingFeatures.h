@class PBUnknownFields;

@interface GEOPDParsecRankingFeatures : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _distanceFromContainment;
    double _distanceFromDeviceLocation;
    double _expectedCtr;
    BOOL _isRecallMismatch;
    BOOL _isSpellCorrected;
    struct { unsigned char has_distanceFromContainment : 1; unsigned char has_distanceFromDeviceLocation : 1; unsigned char has_expectedCtr : 1; unsigned char has_isRecallMismatch : 1; unsigned char has_isSpellCorrected : 1; } _flags;
}

@property (nonatomic) BOOL hasExpectedCtr;
@property (nonatomic) double expectedCtr;
@property (nonatomic) BOOL hasDistanceFromDeviceLocation;
@property (nonatomic) double distanceFromDeviceLocation;
@property (nonatomic) BOOL hasDistanceFromContainment;
@property (nonatomic) double distanceFromContainment;
@property (nonatomic) BOOL hasIsSpellCorrected;
@property (nonatomic) BOOL isSpellCorrected;
@property (nonatomic) BOOL hasIsRecallMismatch;
@property (nonatomic) BOOL isRecallMismatch;
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
