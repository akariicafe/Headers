@class NSData, NSMutableArray, PBDataReader;

@interface GEOTrafficRerouteFeedbackCollection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSData *_directionResponseID;
    NSData *_oldRouteID;
    NSMutableArray *_oldRouteIncidents;
    NSData *_reroutedRouteID;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _oldRouteHistoricTravelTime;
    unsigned int _oldRouteTravelTime;
    unsigned int _reroutedRouteHistoricTravelTime;
    unsigned int _reroutedRouteTravelTime;
    BOOL _oldRouteBlocked;
    struct { unsigned char has_oldRouteHistoricTravelTime : 1; unsigned char has_oldRouteTravelTime : 1; unsigned char has_reroutedRouteHistoricTravelTime : 1; unsigned char has_reroutedRouteTravelTime : 1; unsigned char has_oldRouteBlocked : 1; unsigned char read_directionResponseID : 1; unsigned char read_oldRouteID : 1; unsigned char read_oldRouteIncidents : 1; unsigned char read_reroutedRouteID : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasOldRouteTravelTime;
@property (nonatomic) unsigned int oldRouteTravelTime;
@property (nonatomic) BOOL hasReroutedRouteTravelTime;
@property (nonatomic) unsigned int reroutedRouteTravelTime;
@property (nonatomic) BOOL hasOldRouteHistoricTravelTime;
@property (nonatomic) unsigned int oldRouteHistoricTravelTime;
@property (nonatomic) BOOL hasReroutedRouteHistoricTravelTime;
@property (nonatomic) unsigned int reroutedRouteHistoricTravelTime;
@property (nonatomic) BOOL hasOldRouteBlocked;
@property (nonatomic) BOOL oldRouteBlocked;
@property (retain, nonatomic) NSMutableArray *oldRouteIncidents;
@property (readonly, nonatomic) BOOL hasDirectionResponseID;
@property (retain, nonatomic) NSData *directionResponseID;
@property (readonly, nonatomic) BOOL hasOldRouteID;
@property (retain, nonatomic) NSData *oldRouteID;
@property (readonly, nonatomic) BOOL hasReroutedRouteID;
@property (retain, nonatomic) NSData *reroutedRouteID;

+ (Class)oldRouteIncidentsType;
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
- (void)addOldRouteIncidents:(id)a0;
- (unsigned long long)oldRouteIncidentsCount;
- (void)clearOldRouteIncidents;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)a0;

@end
