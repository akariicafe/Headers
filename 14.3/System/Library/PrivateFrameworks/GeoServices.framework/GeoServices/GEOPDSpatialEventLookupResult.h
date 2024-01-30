@class PBDataReader, GEOMapRegion, NSMutableArray, PBUnknownFields;

@interface GEOPDSpatialEventLookupResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_events;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _statusCode;
    struct { unsigned char has_statusCode : 1; unsigned char read_unknownFields : 1; unsigned char read_displayMapRegion : 1; unsigned char read_events : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *events;
@property (readonly, nonatomic) BOOL hasDisplayMapRegion;
@property (retain, nonatomic) GEOMapRegion *displayMapRegion;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)eventType;
+ (BOOL)isValid:(id)a0;

- (void)addEvent:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)eventAtIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearEvents;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)eventsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)statusCodeAsString:(int)a0;
- (int)StringAsStatusCode:(id)a0;

@end
