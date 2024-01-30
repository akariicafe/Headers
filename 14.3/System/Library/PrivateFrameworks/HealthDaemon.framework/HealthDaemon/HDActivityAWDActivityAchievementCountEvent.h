@interface HDActivityAWDActivityAchievementCountEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char totalAchievementCount : 1; unsigned char totalOTAAchievementCount : 1; unsigned char totalOTAAchievementViewedCount : 1; unsigned char moreThanOneYearSinceActivitySetup : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTotalAchievementCount;
@property (nonatomic) int totalAchievementCount;
@property (nonatomic) BOOL hasMoreThanOneYearSinceActivitySetup;
@property (nonatomic) BOOL moreThanOneYearSinceActivitySetup;
@property (nonatomic) BOOL hasTotalOTAAchievementCount;
@property (nonatomic) int totalOTAAchievementCount;
@property (nonatomic) BOOL hasTotalOTAAchievementViewedCount;
@property (nonatomic) int totalOTAAchievementViewedCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)totalAchievementCountAsString:(int)a0;
- (int)StringAsTotalAchievementCount:(id)a0;
- (id)totalOTAAchievementCountAsString:(int)a0;
- (int)StringAsTotalOTAAchievementCount:(id)a0;
- (id)totalOTAAchievementViewedCountAsString:(int)a0;
- (int)StringAsTotalOTAAchievementViewedCount:(id)a0;

@end
