@class NSString, PBDataReader;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_direction;
    NSString *_headsign;
    unsigned long long _lineId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_lineId : 1; unsigned char read_direction : 1; unsigned char read_headsign : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasLineId;
@property (nonatomic) unsigned long long lineId;
@property (readonly, nonatomic) BOOL hasDirection;
@property (retain, nonatomic) NSString *direction;
@property (readonly, nonatomic) BOOL hasHeadsign;
@property (retain, nonatomic) NSString *headsign;

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

@end
