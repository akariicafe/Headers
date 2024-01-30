@class PBUnknownFields, GEOPDDatasetABStatus, NSString, NSData, PBDataReader, NSMutableArray, GEOTransitRouteUpdateConfiguration;

@interface GEOTransitRouteUpdateResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTimepoint { double _currentUserTime; double _time; int _type; struct { unsigned char currentUserTime : 1; unsigned char time : 1; unsigned char type : 1; } _has; } _timepointUsed;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSData *_responseId;
    GEOTransitRouteUpdateConfiguration *_routeUpdateConfiguration;
    NSMutableArray *_routeUpdates;
    NSString *_transitDataVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _status;
    struct { unsigned char has_timepointUsed : 1; unsigned char has_status : 1; unsigned char read_unknownFields : 1; unsigned char read_datasetAbStatus : 1; unsigned char read_responseId : 1; unsigned char read_routeUpdateConfiguration : 1; unsigned char read_routeUpdates : 1; unsigned char read_transitDataVersion : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *routeUpdates;
@property (readonly, nonatomic) BOOL hasResponseId;
@property (retain, nonatomic) NSData *responseId;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasDatasetAbStatus;
@property (retain, nonatomic) GEOPDDatasetABStatus *datasetAbStatus;
@property (readonly, nonatomic) BOOL hasRouteUpdateConfiguration;
@property (retain, nonatomic) GEOTransitRouteUpdateConfiguration *routeUpdateConfiguration;
@property (nonatomic) BOOL hasTimepointUsed;
@property (nonatomic) struct GEOTimepoint { double x0; double x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } timepointUsed;
@property (readonly, nonatomic) BOOL hasTransitDataVersion;
@property (retain, nonatomic) NSString *transitDataVersion;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)routeUpdateType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsStatus:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)statusAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addRouteUpdate:(id)a0;
- (unsigned long long)routeUpdatesCount;
- (void)clearRouteUpdates;
- (id)routeUpdateAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
