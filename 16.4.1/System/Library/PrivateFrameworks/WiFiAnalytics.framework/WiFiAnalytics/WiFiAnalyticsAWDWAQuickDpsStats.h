@interface WiFiAnalyticsAWDWAQuickDpsStats : PBCodable <NSCopying> {
    struct { unsigned char quickDpsTimeSincePreviousTriggerMinutes : 1; unsigned char awdlActivityThreshold : 1; unsigned char ccaThreshold : 1; unsigned char probabilityThreshold : 1; unsigned char rssiThreshold : 1; unsigned char screenOffThreshold : 1; unsigned char screenOnThreshold : 1; unsigned char stallProbability : 1; unsigned char suppressedReason : 1; unsigned char isDpsValidationDisabled : 1; unsigned char quickDpsResetRecommendation : 1; unsigned char screenStateOn : 1; unsigned char stallPrediction : 1; } _has;
}

@property (nonatomic) BOOL hasScreenStateOn;
@property (nonatomic) BOOL screenStateOn;
@property (nonatomic) BOOL hasQuickDpsResetRecommendation;
@property (nonatomic) BOOL quickDpsResetRecommendation;
@property (nonatomic) BOOL hasStallPrediction;
@property (nonatomic) BOOL stallPrediction;
@property (nonatomic) BOOL hasStallProbability;
@property (nonatomic) unsigned int stallProbability;
@property (nonatomic) BOOL hasProbabilityThreshold;
@property (nonatomic) unsigned int probabilityThreshold;
@property (nonatomic) BOOL hasCcaThreshold;
@property (nonatomic) unsigned int ccaThreshold;
@property (nonatomic) BOOL hasRssiThreshold;
@property (nonatomic) unsigned int rssiThreshold;
@property (nonatomic) BOOL hasScreenOnThreshold;
@property (nonatomic) unsigned int screenOnThreshold;
@property (nonatomic) BOOL hasScreenOffThreshold;
@property (nonatomic) unsigned int screenOffThreshold;
@property (nonatomic) BOOL hasSuppressedReason;
@property (nonatomic) int suppressedReason;
@property (nonatomic) BOOL hasIsDpsValidationDisabled;
@property (nonatomic) BOOL isDpsValidationDisabled;
@property (nonatomic) BOOL hasAwdlActivityThreshold;
@property (nonatomic) unsigned int awdlActivityThreshold;
@property (nonatomic) BOOL hasQuickDpsTimeSincePreviousTriggerMinutes;
@property (nonatomic) unsigned long long quickDpsTimeSincePreviousTriggerMinutes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsSuppressedReason:(id)a0;
- (id)suppressedReasonAsString:(int)a0;

@end
