@class PBDataReader, GEOMinimumVisibleElevationRange, NSMutableArray, PBUnknownFields;

@interface GEOElevationProfile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMinimumVisibleElevationRange *_minimumVisibleElevationRange;
    NSMutableArray *_points;
    NSMutableArray *_segmentDescriptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _sumElevationGainCm;
    unsigned int _sumElevationLossCm;
    struct { unsigned char has_sumElevationGainCm : 1; unsigned char has_sumElevationLossCm : 1; unsigned char read_unknownFields : 1; unsigned char read_minimumVisibleElevationRange : 1; unsigned char read_points : 1; unsigned char read_segmentDescriptions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *points;
@property (nonatomic) BOOL hasSumElevationGainCm;
@property (nonatomic) unsigned int sumElevationGainCm;
@property (nonatomic) BOOL hasSumElevationLossCm;
@property (nonatomic) unsigned int sumElevationLossCm;
@property (readonly, nonatomic) BOOL hasMinimumVisibleElevationRange;
@property (retain, nonatomic) GEOMinimumVisibleElevationRange *minimumVisibleElevationRange;
@property (retain, nonatomic) NSMutableArray *segmentDescriptions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)pointType;
+ (Class)segmentDescriptionType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)addPoint:(id)a0;
- (id)jsonRepresentation;
- (id)pointAtIndex:(unsigned long long)a0;
- (void)addSegmentDescription:(id)a0;
- (unsigned long long)segmentDescriptionsCount;
- (void)clearSegmentDescriptions;
- (id)segmentDescriptionAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)clearPoints;
- (unsigned long long)pointsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
