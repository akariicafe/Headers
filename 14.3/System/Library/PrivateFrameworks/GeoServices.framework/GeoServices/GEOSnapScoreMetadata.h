@class GEOSnapScorePoint, PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOSnapScoreMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_destinationAccessPoints;
    NSMutableArray *_destinationPoints;
    NSMutableArray *_originAccessPoints;
    GEOSnapScorePoint *_originPoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_destinationAccessPoints : 1; unsigned char read_destinationPoints : 1; unsigned char read_originAccessPoints : 1; unsigned char read_originPoint : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasOriginPoint;
@property (retain, nonatomic) GEOSnapScorePoint *originPoint;
@property (retain, nonatomic) NSMutableArray *originAccessPoints;
@property (retain, nonatomic) NSMutableArray *destinationPoints;
@property (retain, nonatomic) NSMutableArray *destinationAccessPoints;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)originAccessPointType;
+ (Class)destinationPointType;
+ (Class)destinationAccessPointType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addOriginAccessPoint:(id)a0;
- (void)addDestinationPoint:(id)a0;
- (void)addDestinationAccessPoint:(id)a0;
- (unsigned long long)originAccessPointsCount;
- (void)clearOriginAccessPoints;
- (id)originAccessPointAtIndex:(unsigned long long)a0;
- (unsigned long long)destinationPointsCount;
- (void)clearDestinationPoints;
- (id)destinationPointAtIndex:(unsigned long long)a0;
- (unsigned long long)destinationAccessPointsCount;
- (void)clearDestinationAccessPoints;
- (id)destinationAccessPointAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
