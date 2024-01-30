@class PBDataReader;

@interface GEOVLFFrameDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { float *list; unsigned long long count; unsigned long long size; } _calibrationMatrixs;
    struct { float *list; unsigned long long count; unsigned long long size; } _vioPoses;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _radialDistortion1;
    float _radialDistortion2;
    unsigned int _vioStatus;
    struct { unsigned char has_radialDistortion1 : 1; unsigned char has_radialDistortion2 : 1; unsigned char has_vioStatus : 1; unsigned char read_calibrationMatrixs : 1; unsigned char read_vioPoses : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasVioStatus;
@property (nonatomic) unsigned int vioStatus;
@property (readonly, nonatomic) unsigned long long vioPosesCount;
@property (readonly, nonatomic) float *vioPoses;
@property (readonly, nonatomic) unsigned long long calibrationMatrixsCount;
@property (readonly, nonatomic) float *calibrationMatrixs;
@property (nonatomic) BOOL hasRadialDistortion1;
@property (nonatomic) float radialDistortion1;
@property (nonatomic) BOOL hasRadialDistortion2;
@property (nonatomic) float radialDistortion2;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
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
- (float)vioPoseAtIndex:(unsigned long long)a0;
- (void)addCalibrationMatrix:(float)a0;
- (void)addVioPose:(float)a0;
- (float)calibrationMatrixAtIndex:(unsigned long long)a0;
- (void)clearCalibrationMatrixs;
- (void)clearVioPoses;
- (void)setCalibrationMatrixs:(float *)a0 count:(unsigned long long)a1;
- (void)setVioPoses:(float *)a0 count:(unsigned long long)a1;

@end
