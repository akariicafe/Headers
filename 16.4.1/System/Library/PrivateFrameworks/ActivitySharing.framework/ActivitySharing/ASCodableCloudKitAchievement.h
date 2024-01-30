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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
