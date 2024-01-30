@class NSData, NSMutableArray, PBDataReader;

@interface GEOTrafficPath : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { long long *list; unsigned long long count; unsigned long long size; } _continuingRoadIds;
    struct { long long *list; unsigned long long count; unsigned long long size; } _roadIds;
    NSMutableArray *_geometrys;
    NSData *_openlr;
    long long _pathletId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _endOffset;
    float _startOffset;
    struct { unsigned char has_pathletId : 1; unsigned char has_endOffset : 1; unsigned char has_startOffset : 1; unsigned char read_continuingRoadIds : 1; unsigned char read_roadIds : 1; unsigned char read_geometrys : 1; unsigned char read_openlr : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasOpenlr;
@property (retain, nonatomic) NSData *openlr;
@property (readonly, nonatomic) unsigned long long roadIdsCount;
@property (readonly, nonatomic) long long *roadIds;
@property (nonatomic) BOOL hasStartOffset;
@property (nonatomic) float startOffset;
@property (nonatomic) BOOL hasEndOffset;
@property (nonatomic) float endOffset;
@property (readonly, nonatomic) unsigned long long continuingRoadIdsCount;
@property (readonly, nonatomic) long long *continuingRoadIds;
@property (nonatomic) BOOL hasPathletId;
@property (nonatomic) long long pathletId;
@property (retain, nonatomic) NSMutableArray *geometrys;

+ (Class)geometryType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
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
- (void)addRoadId:(long long)a0;
- (void)addContinuingRoadId:(long long)a0;
- (void)addGeometry:(id)a0;
- (void)clearRoadIds;
- (long long)roadIdAtIndex:(unsigned long long)a0;
- (unsigned long long)geometrysCount;
- (void)clearContinuingRoadIds;
- (long long)continuingRoadIdAtIndex:(unsigned long long)a0;
- (void)clearGeometrys;
- (id)geometryAtIndex:(unsigned long long)a0;
- (void)setRoadIds:(long long *)a0 count:(unsigned long long)a1;
- (void)setContinuingRoadIds:(long long *)a0 count:(unsigned long long)a1;

@end
