@interface AWDBiometricKitPassCodeChallengeAttempt : PBCodable <NSCopying> {
    struct { unsigned char overallTime : 1; unsigned char timestamp : 1; unsigned char ambientLux : 1; unsigned char attentionScore : 1; unsigned char deviceOrientation : 1; unsigned char faceDistance : 1; unsigned char matchIdentityCount : 1; unsigned char matchType : 1; unsigned char ppmAllocatedBudget : 1; unsigned char ppmRequestedBudget : 1; unsigned char sensorTemperature : 1; unsigned char hasOcclusion : 1; unsigned char passcodeChallengeResult : 1; unsigned char passcodeChallengeTemplateUpdated : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasOverallTime;
@property (nonatomic) unsigned long long overallTime;
@property (nonatomic) BOOL hasPasscodeChallengeResult;
@property (nonatomic) BOOL passcodeChallengeResult;
@property (nonatomic) BOOL hasPasscodeChallengeTemplateUpdated;
@property (nonatomic) BOOL passcodeChallengeTemplateUpdated;
@property (nonatomic) BOOL hasAmbientLux;
@property (nonatomic) int ambientLux;
@property (nonatomic) BOOL hasSensorTemperature;
@property (nonatomic) int sensorTemperature;
@property (nonatomic) BOOL hasFaceDistance;
@property (nonatomic) unsigned int faceDistance;
@property (nonatomic) BOOL hasAttentionScore;
@property (nonatomic) unsigned int attentionScore;
@property (nonatomic) BOOL hasHasOcclusion;
@property (nonatomic) BOOL hasOcclusion;
@property (nonatomic) BOOL hasPpmRequestedBudget;
@property (nonatomic) unsigned int ppmRequestedBudget;
@property (nonatomic) BOOL hasPpmAllocatedBudget;
@property (nonatomic) unsigned int ppmAllocatedBudget;
@property (nonatomic) BOOL hasDeviceOrientation;
@property (nonatomic) unsigned int deviceOrientation;
@property (nonatomic) BOOL hasMatchIdentityCount;
@property (nonatomic) unsigned int matchIdentityCount;
@property (nonatomic) BOOL hasMatchType;
@property (nonatomic) unsigned int matchType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
