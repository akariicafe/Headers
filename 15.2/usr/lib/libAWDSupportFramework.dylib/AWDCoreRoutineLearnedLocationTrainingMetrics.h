@class NSMutableArray;

@interface AWDCoreRoutineLearnedLocationTrainingMetrics : PBCodable <NSCopying> {
    struct { unsigned char intervalSinceLastAttempt : 1; unsigned char latency : 1; unsigned char maxIntervalBetweenLocations : 1; unsigned char timestamp : 1; unsigned char locationsProcessed : 1; unsigned char placeCountDevice : 1; unsigned char placeCountTotal : 1; unsigned char visitCountDevice : 1; unsigned char visitCountTotal : 1; unsigned char trainedVisits : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTrainedVisits;
@property (nonatomic) BOOL trainedVisits;
@property (nonatomic) BOOL hasIntervalSinceLastAttempt;
@property (nonatomic) unsigned long long intervalSinceLastAttempt;
@property (nonatomic) BOOL hasLatency;
@property (nonatomic) unsigned long long latency;
@property (nonatomic) BOOL hasLocationsProcessed;
@property (nonatomic) unsigned int locationsProcessed;
@property (nonatomic) BOOL hasMaxIntervalBetweenLocations;
@property (nonatomic) unsigned long long maxIntervalBetweenLocations;
@property (retain, nonatomic) NSMutableArray *visits;
@property (retain, nonatomic) NSMutableArray *places;
@property (nonatomic) BOOL hasVisitCountDevice;
@property (nonatomic) unsigned int visitCountDevice;
@property (nonatomic) BOOL hasVisitCountTotal;
@property (nonatomic) unsigned int visitCountTotal;
@property (nonatomic) BOOL hasPlaceCountDevice;
@property (nonatomic) unsigned int placeCountDevice;
@property (nonatomic) BOOL hasPlaceCountTotal;
@property (nonatomic) unsigned int placeCountTotal;

+ (Class)visitsType;
+ (Class)placesType;

- (void)clearPlaces;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)placesCount;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addVisits:(id)a0;
- (unsigned long long)visitsCount;
- (void)clearVisits;
- (id)visitsAtIndex:(unsigned long long)a0;
- (void)addPlaces:(id)a0;
- (id)placesAtIndex:(unsigned long long)a0;

@end
