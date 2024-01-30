@class NSMutableArray, PBDataReader;

@interface GEOWiFiQualityServiceResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_locationResults;
    NSMutableArray *_networkResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _statusCode;
    struct { unsigned char has_statusCode : 1; unsigned char read_locationResults : 1; unsigned char read_networkResults : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *locationResults;
@property (retain, nonatomic) NSMutableArray *networkResults;

+ (BOOL)isValid:(id)a0;
+ (Class)locationResultsType;
+ (Class)networkResultsType;

- (id)initWithData:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
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
- (int)StringAsStatusCode:(id)a0;
- (void)addLocationResults:(id)a0;
- (void)addNetworkResults:(id)a0;
- (void)clearLocationResults;
- (void)clearNetworkResults;
- (id)locationResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)locationResultsCount;
- (id)networkResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)networkResultsCount;
- (id)statusCodeAsString:(int)a0;

@end
