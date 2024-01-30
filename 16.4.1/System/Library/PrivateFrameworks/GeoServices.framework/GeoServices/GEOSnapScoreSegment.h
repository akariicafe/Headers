@class PBDataReader, GEOLatLng, NSMutableArray, PBUnknownFields;

@interface GEOSnapScoreSegment : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributes;
    NSMutableArray *_categoryScores;
    unsigned long long _geoId;
    GEOLatLng *_pointOnLine;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _overallScore;
    struct { unsigned char has_geoId : 1; unsigned char has_overallScore : 1; unsigned char read_unknownFields : 1; unsigned char read_attributes : 1; unsigned char read_categoryScores : 1; unsigned char read_pointOnLine : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasGeoId;
@property (nonatomic) unsigned long long geoId;
@property (readonly, nonatomic) BOOL hasPointOnLine;
@property (retain, nonatomic) GEOLatLng *pointOnLine;
@property (nonatomic) BOOL hasOverallScore;
@property (nonatomic) float overallScore;
@property (retain, nonatomic) NSMutableArray *categoryScores;
@property (retain, nonatomic) NSMutableArray *attributes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)attributeType;
+ (BOOL)isValid:(id)a0;
+ (Class)categoryScoreType;

- (id)initWithData:(id)a0;
- (void)clearAttributes;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)addAttribute:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)attributesCount;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (id)attributeAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addCategoryScore:(id)a0;
- (id)categoryScoreAtIndex:(unsigned long long)a0;
- (unsigned long long)categoryScoresCount;
- (void)clearCategoryScores;

@end
