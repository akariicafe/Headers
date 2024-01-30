@class NSMutableArray, ASCodableCloudKitActivitySnapshot;

@interface ASCodableActivityDataPreview : PBCodable <NSCopying> {
    struct { unsigned char date : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasActivitySnapshot;
@property (retain, nonatomic) ASCodableCloudKitActivitySnapshot *activitySnapshot;
@property (retain, nonatomic) NSMutableArray *workouts;
@property (retain, nonatomic) NSMutableArray *achievements;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;

+ (Class)workoutsType;
+ (Class)achievementsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addWorkouts:(id)a0;
- (unsigned long long)workoutsCount;
- (void)clearWorkouts;
- (id)workoutsAtIndex:(unsigned long long)a0;
- (void)addAchievements:(id)a0;
- (unsigned long long)achievementsCount;
- (void)clearAchievements;
- (id)achievementsAtIndex:(unsigned long long)a0;

@end
