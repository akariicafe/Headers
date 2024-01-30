@class NSMutableArray;

@interface GEOLogMsgEventCommuteWindow : PBCodable <NSCopying> {
    NSMutableArray *_predictedDestinations;
    double _startTime;
    unsigned int _duration;
    int _endReason;
    unsigned int _numberOfAlertingResponses;
    unsigned int _numberOfDoomRoutingRequests;
    unsigned int _predictedExitTime;
    struct { unsigned char has_startTime : 1; unsigned char has_duration : 1; unsigned char has_endReason : 1; unsigned char has_numberOfAlertingResponses : 1; unsigned char has_numberOfDoomRoutingRequests : 1; unsigned char has_predictedExitTime : 1; } _flags;
}

@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasPredictedExitTime;
@property (nonatomic) unsigned int predictedExitTime;
@property (nonatomic) BOOL hasEndReason;
@property (nonatomic) int endReason;
@property (retain, nonatomic) NSMutableArray *predictedDestinations;
@property (nonatomic) BOOL hasNumberOfDoomRoutingRequests;
@property (nonatomic) unsigned int numberOfDoomRoutingRequests;
@property (nonatomic) BOOL hasNumberOfAlertingResponses;
@property (nonatomic) unsigned int numberOfAlertingResponses;

+ (Class)predictedDestinationType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (void)addPredictedDestination:(id)a0;
- (unsigned long long)predictedDestinationsCount;
- (void)clearPredictedDestinations;
- (id)predictedDestinationAtIndex:(unsigned long long)a0;
- (id)endReasonAsString:(int)a0;
- (int)StringAsEndReason:(id)a0;
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

@end
