@class NSString, NSMutableArray, PBDataReader;

@interface GEOTrafficRegion : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_area;
    NSMutableArray *_boundingBoxs;
    NSMutableArray *_geohashes;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_area : 1; unsigned char read_boundingBoxs : 1; unsigned char read_geohashes : 1; unsigned char read_name : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *geohashes;
@property (readonly, nonatomic) BOOL hasArea;
@property (retain, nonatomic) NSString *area;
@property (retain, nonatomic) NSMutableArray *boundingBoxs;

+ (Class)geohashesType;
+ (Class)boundingBoxType;
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
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addGeohashes:(id)a0;
- (void)addBoundingBox:(id)a0;
- (unsigned long long)geohashesCount;
- (void)clearGeohashes;
- (id)geohashesAtIndex:(unsigned long long)a0;
- (unsigned long long)boundingBoxsCount;
- (void)clearBoundingBoxs;
- (id)boundingBoxAtIndex:(unsigned long long)a0;

@end
