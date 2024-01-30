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

+ (Class)locationResultsType;
+ (Class)networkResultsType;
+ (BOOL)isValid:(id)a0;

- (unsigned long long)networkResultsCount;
- (void)readAll:(BOOL)a0;
- (void)addLocationResults:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (void)clearNetworkResults;
- (void)clearLocationResults;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (id)locationResultsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (int)StringAsStatusCode:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addNetworkResults:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)networkResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)locationResultsCount;
- (unsigned long long)hash;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)statusCodeAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
