@class NSData, NSString;

@interface ACHCodableLegacyAchievement : PBCodable <NSCopying> {
    struct { unsigned char achievementType : 1; unsigned char completedDate : 1; unsigned char doubleValue : 1; unsigned char intValue : 1; unsigned char workoutActivityType : 1; unsigned char alerted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasAchievementType;
@property (nonatomic) long long achievementType;
@property (nonatomic) BOOL hasCompletedDate;
@property (nonatomic) double completedDate;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasIntValue;
@property (nonatomic) long long intValue;
@property (nonatomic) BOOL hasAlerted;
@property (nonatomic) BOOL alerted;
@property (readonly, nonatomic) BOOL hasDefinitionIdentifier;
@property (retain, nonatomic) NSString *definitionIdentifier;
@property (nonatomic) BOOL hasWorkoutActivityType;
@property (nonatomic) long long workoutActivityType;

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

@end
