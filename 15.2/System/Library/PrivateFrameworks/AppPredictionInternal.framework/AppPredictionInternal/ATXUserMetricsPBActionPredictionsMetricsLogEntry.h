@class NSString, NSMutableArray;

@interface ATXUserMetricsPBActionPredictionsMetricsLogEntry : PBCodable <NSCopying> {
    struct { unsigned char dayOfWeek : 1; unsigned char engagedActions : 1; unsigned char hourOfDay : 1; unsigned char rankOfFirstEngagement : 1; unsigned char shownActions : 1; unsigned char ui : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUserIdentifier;
@property (retain, nonatomic) NSString *userIdentifier;
@property (nonatomic) BOOL hasHourOfDay;
@property (nonatomic) unsigned int hourOfDay;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) int dayOfWeek;
@property (nonatomic) BOOL hasShownActions;
@property (nonatomic) unsigned int shownActions;
@property (nonatomic) BOOL hasEngagedActions;
@property (nonatomic) unsigned int engagedActions;
@property (nonatomic) BOOL hasRankOfFirstEngagement;
@property (nonatomic) unsigned int rankOfFirstEngagement;
@property (readonly, nonatomic) BOOL hasEngagedBundleId;
@property (retain, nonatomic) NSString *engagedBundleId;
@property (nonatomic) BOOL hasUi;
@property (nonatomic) int ui;
@property (readonly, nonatomic) BOOL hasCacheId;
@property (retain, nonatomic) NSString *cacheId;
@property (retain, nonatomic) NSMutableArray *experiments;

+ (Class)experimentsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)dayOfWeekAsString:(int)a0;
- (int)StringAsDayOfWeek:(id)a0;
- (void)addExperiments:(id)a0;
- (unsigned long long)experimentsCount;
- (void)clearExperiments;
- (id)experimentsAtIndex:(unsigned long long)a0;
- (id)uiAsString:(int)a0;
- (int)StringAsUi:(id)a0;

@end
