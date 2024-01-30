@class GEOPDMapsIdentifier, GEOPDScorecardLayout, NSMutableArray, PBDataReader;

@interface GEOPDPlaceQuestionnaireResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_historicalMapsIds;
    GEOPDMapsIdentifier *_mapsId;
    GEOPDScorecardLayout *_scorecardLayout;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _status;
    BOOL _alwaysPositionInitialRatingCtaTowardsTop;
    BOOL _collectPhotos;
    BOOL _isOverride;
    BOOL _suppressOnExistingRichData;
    struct { unsigned char has_status : 1; unsigned char has_alwaysPositionInitialRatingCtaTowardsTop : 1; unsigned char has_collectPhotos : 1; unsigned char has_isOverride : 1; unsigned char has_suppressOnExistingRichData : 1; unsigned char read_historicalMapsIds : 1; unsigned char read_mapsId : 1; unsigned char read_scorecardLayout : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
