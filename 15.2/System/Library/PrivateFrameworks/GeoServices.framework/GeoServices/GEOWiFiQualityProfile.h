@class PBDataReader, GEOWiFiQualityHours, NSMutableArray;

@interface GEOWiFiQualityProfile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOWiFiQualityHours *_hours;
    NSMutableArray *_qualities;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_hours : 1; unsigned char read_qualities : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasHours;
@property (retain, nonatomic) GEOWiFiQualityHours *hours;
@property (retain, nonatomic) NSMutableArray *qualities;

+ (Class)qualitiesType;
+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addQualities:(id)a0;
- (unsigned long long)qualitiesCount;
- (void)clearQualities;
- (id)qualitiesAtIndex:(unsigned long long)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
