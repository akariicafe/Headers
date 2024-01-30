@class NSString;

@interface HDAWDHealthKitAchievement : PBCodable <NSCopying> {
    struct { unsigned char completedDate : 1; unsigned char value : 1; unsigned char achievementType : 1; unsigned char workoutActivityType : 1; } _has;
}

@property (nonatomic) BOOL hasAchievementType;
@property (nonatomic) int achievementType;
@property (nonatomic) BOOL hasCompletedDate;
@property (nonatomic) long long completedDate;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) long long value;
@property (readonly, nonatomic) BOOL hasDefinitionIdentifier;
@property (retain, nonatomic) NSString *definitionIdentifier;
@property (nonatomic) BOOL hasWorkoutActivityType;
@property (nonatomic) int workoutActivityType;

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
- (id)achievementTypeAsString:(int)a0;
- (int)StringAsAchievementType:(id)a0;
- (id)workoutActivityTypeAsString:(int)a0;
- (int)StringAsWorkoutActivityType:(id)a0;

@end
