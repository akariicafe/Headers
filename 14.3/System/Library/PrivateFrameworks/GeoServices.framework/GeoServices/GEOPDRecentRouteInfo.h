@class PBDataReader, NSData, NSMutableArray, PBUnknownFields;

@interface GEOPDRecentRouteInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_etaFilter;
    NSData *_evChargingMetadata;
    NSData *_originalWaypointRoute;
    NSData *_routeId;
    NSData *_sessionState;
    NSMutableArray *_zilchPointSegments;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _preferredTransportType;
    struct { unsigned char has_preferredTransportType : 1; unsigned char read_unknownFields : 1; unsigned char read_etaFilter : 1; unsigned char read_evChargingMetadata : 1; unsigned char read_originalWaypointRoute : 1; unsigned char read_routeId : 1; unsigned char read_sessionState : 1; unsigned char read_zilchPointSegments : 1; unsigned char read_zilchPoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasZilchPoints;
@property (retain, nonatomic) NSData *zilchPoints;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (retain, nonatomic) NSData *sessionState;
@property (readonly, nonatomic) BOOL hasRouteId;
@property (retain, nonatomic) NSData *routeId;
@property (nonatomic) BOOL hasPreferredTransportType;
@property (nonatomic) int preferredTransportType;
@property (readonly, nonatomic) BOOL hasEtaFilter;
@property (retain, nonatomic) NSData *etaFilter;
@property (retain, nonatomic) NSMutableArray *zilchPointSegments;
@property (readonly, nonatomic) BOOL hasEvChargingMetadata;
@property (retain, nonatomic) NSData *evChargingMetadata;
@property (readonly, nonatomic) BOOL hasOriginalWaypointRoute;
@property (retain, nonatomic) NSData *originalWaypointRoute;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)zilchPointSegmentType;
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
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addZilchPointSegment:(id)a0;
- (unsigned long long)zilchPointSegmentsCount;
- (void)clearZilchPointSegments;
- (id)zilchPointSegmentAtIndex:(unsigned long long)a0;
- (id)preferredTransportTypeAsString:(int)a0;
- (int)StringAsPreferredTransportType:(id)a0;

@end
