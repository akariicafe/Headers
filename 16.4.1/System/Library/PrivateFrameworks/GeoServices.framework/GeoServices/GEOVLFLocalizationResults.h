@class GEOVLFCorrection, NSMutableArray, PBDataReader;

@interface GEOVLFLocalizationResults : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEOVLFPositionContextClassification { double _indoorProbability; double _outdoorProbability; int _type; struct { unsigned char indoorProbability : 1; unsigned char outdoorProbability : 1; unsigned char type : 1; } _has; } _positionContextClassification;
    NSMutableArray *_localizationDetails;
    GEOVLFCorrection *_vlfCorrection;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _vlfFinalState;
    struct { unsigned char has_positionContextClassification : 1; unsigned char has_vlfFinalState : 1; unsigned char read_localizationDetails : 1; unsigned char read_vlfCorrection : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasVlfCorrection;
@property (retain, nonatomic) GEOVLFCorrection *vlfCorrection;
@property (nonatomic) BOOL hasVlfFinalState;
@property (nonatomic) int vlfFinalState;
@property (retain, nonatomic) NSMutableArray *localizationDetails;
@property (nonatomic) BOOL hasPositionContextClassification;
@property (nonatomic) struct GEOVLFPositionContextClassification { double x0; double x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } positionContextClassification;

+ (BOOL)isValid:(id)a0;
+ (Class)localizationDetailsType;

- (id)initWithData:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsVlfFinalState:(id)a0;
- (void)addLocalizationDetails:(id)a0;
- (void)clearLocalizationDetails;
- (id)localizationDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)localizationDetailsCount;
- (id)vlfFinalStateAsString:(int)a0;

@end
