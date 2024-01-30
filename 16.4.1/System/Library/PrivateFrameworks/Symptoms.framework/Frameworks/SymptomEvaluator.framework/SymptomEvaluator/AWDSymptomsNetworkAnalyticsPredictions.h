@interface AWDSymptomsNetworkAnalyticsPredictions : PBCodable <NSCopying> {
    struct { unsigned char lifetimeOldestItemSecs : 1; unsigned char modelGraphPullups : 1; unsigned char modelRecalls : 1; unsigned char predictionQueries : 1; unsigned char timeSinceLastTrainedSecs : 1; unsigned char timestamp : 1; unsigned char uniquePredictionClients : 1; unsigned char calendarTypeMarker : 1; unsigned char dayAlikeGroups : 1; unsigned char networkType : 1; unsigned char predictionErrorOver24hr1000 : 1; unsigned char timeZoneMarker : 1; unsigned char trainingCompletionCode : 1; unsigned char trainingProgress1000 : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) BOOL hasTimeSinceLastTrainedSecs;
@property (nonatomic) unsigned long long timeSinceLastTrainedSecs;
@property (nonatomic) BOOL hasTrainingCompletionCode;
@property (nonatomic) int trainingCompletionCode;
@property (nonatomic) BOOL hasLifetimeOldestItemSecs;
@property (nonatomic) unsigned long long lifetimeOldestItemSecs;
@property (nonatomic) BOOL hasTrainingProgress1000;
@property (nonatomic) unsigned int trainingProgress1000;
@property (nonatomic) BOOL hasPredictionErrorOver24hr1000;
@property (nonatomic) unsigned int predictionErrorOver24hr1000;
@property (nonatomic) BOOL hasUniquePredictionClients;
@property (nonatomic) unsigned long long uniquePredictionClients;
@property (nonatomic) BOOL hasPredictionQueries;
@property (nonatomic) unsigned long long predictionQueries;
@property (nonatomic) BOOL hasModelRecalls;
@property (nonatomic) unsigned long long modelRecalls;
@property (nonatomic) BOOL hasModelGraphPullups;
@property (nonatomic) unsigned long long modelGraphPullups;
@property (nonatomic) BOOL hasTimeZoneMarker;
@property (nonatomic) unsigned int timeZoneMarker;
@property (nonatomic) BOOL hasCalendarTypeMarker;
@property (nonatomic) unsigned int calendarTypeMarker;
@property (nonatomic) BOOL hasDayAlikeGroups;
@property (nonatomic) unsigned int dayAlikeGroups;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;
- (int)StringAsTrainingCompletionCode:(id)a0;
- (id)trainingCompletionCodeAsString:(int)a0;

@end
