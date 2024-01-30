@class NSString, ASCodableCloudKitSample;

@interface ASCodableCloudKitAchievement : PBCodable <NSCopying> {
    struct { unsigned char completedDate : 1; unsigned char doubleValue : 1; unsigned char intValue : 1; unsigned char workoutActivityType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) ASCodableCloudKitSample *sample;
@property (nonatomic) BOOL hasCompletedDate;
@property (nonatomic) double completedDate;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasIntValue;
@property (nonatomic) long long intValue;
@property (nonatomic) BOOL hasWorkoutActivityType;
@property (nonatomic) long long workoutActivityType;
@property (readonly, nonatomic) BOOL hasDefinitionIdentifier;
@property (retain, nonatomic) NSString *definitionIdentifier;
@property (readonly, nonatomic) BOOL hasTemplateUniqueName;
@property (retain, nonatomic) NSString *templateUniqueName;

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
