@interface GEOTimeToLeaveHypothesisFeedbackCollection : PBCodable <NSCopying> {
    double _earliestArrivalOffset;
    double _earliestDepartureOffset;
    double _latestArrivalOffset;
    double _latestDepartureOffset;
    int _arrival;
    int _departure;
    unsigned int _numberOfReroutes;
    int _uiNotification;
    struct { unsigned char has_earliestArrivalOffset : 1; unsigned char has_earliestDepartureOffset : 1; unsigned char has_latestArrivalOffset : 1; unsigned char has_latestDepartureOffset : 1; unsigned char has_arrival : 1; unsigned char has_departure : 1; unsigned char has_numberOfReroutes : 1; unsigned char has_uiNotification : 1; } _flags;
}

@property (nonatomic) BOOL hasDeparture;
@property (nonatomic) int departure;
@property (nonatomic) BOOL hasArrival;
@property (nonatomic) int arrival;
@property (nonatomic) BOOL hasNumberOfReroutes;
@property (nonatomic) unsigned int numberOfReroutes;
@property (nonatomic) BOOL hasUiNotification;
@property (nonatomic) int uiNotification;
@property (nonatomic) BOOL hasEarliestDepartureOffset;
@property (nonatomic) double earliestDepartureOffset;
@property (nonatomic) BOOL hasLatestDepartureOffset;
@property (nonatomic) double latestDepartureOffset;
@property (nonatomic) BOOL hasEarliestArrivalOffset;
@property (nonatomic) double earliestArrivalOffset;
@property (nonatomic) BOOL hasLatestArrivalOffset;
@property (nonatomic) double latestArrivalOffset;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
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
- (id)departureAsString:(int)a0;
- (int)StringAsDeparture:(id)a0;
- (id)arrivalAsString:(int)a0;
- (int)StringAsArrival:(id)a0;
- (id)uiNotificationAsString:(int)a0;
- (int)StringAsUiNotification:(id)a0;

@end
