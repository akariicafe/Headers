@class GEOShortTrafficSummary, PBDataReader, GEORouteTrafficDetail, NSMutableArray, PBUnknownFields;

@interface GEOETAResultByType : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _expectedTimeOfDeparture;
    GEORouteTrafficDetail *_routeTrafficDetail;
    GEOShortTrafficSummary *_shortTrafficSummary;
    NSMutableArray *_summaryForPredictedDestinations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    int _licensePlateRestrictionImpact;
    unsigned int _staticTravelTime;
    int _status;
    int _transportType;
    unsigned int _travelTimeBestEstimate;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    struct { unsigned char has_expectedTimeOfDeparture : 1; unsigned char has_distance : 1; unsigned char has_historicTravelTime : 1; unsigned char has_licensePlateRestrictionImpact : 1; unsigned char has_staticTravelTime : 1; unsigned char has_status : 1; unsigned char has_transportType : 1; unsigned char has_travelTimeBestEstimate : 1; unsigned char has_travelTimeAggressiveEstimate : 1; unsigned char has_travelTimeConservativeEstimate : 1; unsigned char read_unknownFields : 1; unsigned char read_routeTrafficDetail : 1; unsigned char read_shortTrafficSummary : 1; unsigned char read_summaryForPredictedDestinations : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasTravelTimeBestEstimate;
@property (nonatomic) unsigned int travelTimeBestEstimate;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) unsigned int distance;
@property (nonatomic) BOOL hasExpectedTimeOfDeparture;
@property (nonatomic) double expectedTimeOfDeparture;
@property (nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) BOOL hasStaticTravelTime;
@property (nonatomic) unsigned int staticTravelTime;
@property (retain, nonatomic) NSMutableArray *summaryForPredictedDestinations;
@property (readonly, nonatomic) BOOL hasRouteTrafficDetail;
@property (retain, nonatomic) GEORouteTrafficDetail *routeTrafficDetail;
@property (readonly, nonatomic) BOOL hasShortTrafficSummary;
@property (retain, nonatomic) GEOShortTrafficSummary *shortTrafficSummary;
@property (nonatomic) BOOL hasLicensePlateRestrictionImpact;
@property (nonatomic) int licensePlateRestrictionImpact;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)summaryForPredictedDestinationType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)addSummaryForPredictedDestination:(id)a0;
- (unsigned long long)summaryForPredictedDestinationsCount;
- (void)clearSummaryForPredictedDestinations;
- (id)summaryForPredictedDestinationAtIndex:(unsigned long long)a0;
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
- (id)licensePlateRestrictionImpactAsString:(int)a0;
- (int)StringAsLicensePlateRestrictionImpact:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (int)StringAsTransportType:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)transportTypeAsString:(int)a0;

@end
