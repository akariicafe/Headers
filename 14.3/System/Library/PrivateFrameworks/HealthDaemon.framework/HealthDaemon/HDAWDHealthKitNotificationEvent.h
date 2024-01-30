@class HDAWDHealthKitExperimentalCondition, HDAWDHealthKitConcurrentCalendarItem, HDAWDHealthKitActivityCache, HDAWDHealthKitAchievement, HDAWDHealthKitWeeklySummaryDetail, NSMutableArray, HDAWDHealthKitNotificationResponseFlags;

@interface HDAWDHealthKitNotificationEvent : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _goalTypes;
    struct { unsigned char endDate : 1; unsigned char startDate : 1; unsigned char timestamp : 1; unsigned char alertType : 1; unsigned char testAction : 1; unsigned char dndEnabled : 1; unsigned char failedPosting : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasAlertType;
@property (nonatomic) int alertType;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) long long endDate;
@property (nonatomic) BOOL hasDndEnabled;
@property (nonatomic) BOOL dndEnabled;
@property (nonatomic) BOOL hasFailedPosting;
@property (nonatomic) BOOL failedPosting;
@property (readonly, nonatomic) BOOL hasExperimentalCondition;
@property (retain, nonatomic) HDAWDHealthKitExperimentalCondition *experimentalCondition;
@property (nonatomic) BOOL hasTestAction;
@property (nonatomic) int testAction;
@property (readonly, nonatomic) BOOL hasCalendarItem;
@property (retain, nonatomic) HDAWDHealthKitConcurrentCalendarItem *calendarItem;
@property (retain, nonatomic) NSMutableArray *views;
@property (readonly, nonatomic) BOOL hasActivityCache;
@property (retain, nonatomic) HDAWDHealthKitActivityCache *activityCache;
@property (readonly, nonatomic) BOOL hasAchievement;
@property (retain, nonatomic) HDAWDHealthKitAchievement *achievement;
@property (readonly, nonatomic) BOOL hasWeeklySummaryDetail;
@property (retain, nonatomic) HDAWDHealthKitWeeklySummaryDetail *weeklySummaryDetail;
@property (readonly, nonatomic) unsigned long long goalTypesCount;
@property (readonly, nonatomic) unsigned int *goalTypes;
@property (readonly, nonatomic) BOOL hasResponseFlags;
@property (retain, nonatomic) HDAWDHealthKitNotificationResponseFlags *responseFlags;

+ (Class)viewsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)viewsCount;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)alertTypeAsString:(int)a0;
- (int)StringAsAlertType:(id)a0;
- (void)clearViews;
- (void)addViews:(id)a0;
- (id)viewsAtIndex:(unsigned long long)a0;
- (void)clearGoalTypes;
- (unsigned int)goalTypesAtIndex:(unsigned long long)a0;
- (void)addGoalTypes:(unsigned int)a0;
- (id)testActionAsString:(int)a0;
- (int)StringAsTestAction:(id)a0;
- (void)setGoalTypes:(unsigned int *)a0 count:(unsigned long long)a1;

@end
