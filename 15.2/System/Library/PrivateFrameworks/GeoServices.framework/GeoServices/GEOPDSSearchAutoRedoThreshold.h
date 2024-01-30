@class PBUnknownFields;

@interface GEOPDSSearchAutoRedoThreshold : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    double _panDeltaThresholdInMeters;
    double _zoomInPercentThreshold;
    double _zoomOutPercentThreshold;
    unsigned int _numberOfVisiblePoisThreshold;
    struct { unsigned char has_panDeltaThresholdInMeters : 1; unsigned char has_zoomInPercentThreshold : 1; unsigned char has_zoomOutPercentThreshold : 1; unsigned char has_numberOfVisiblePoisThreshold : 1; } _flags;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
