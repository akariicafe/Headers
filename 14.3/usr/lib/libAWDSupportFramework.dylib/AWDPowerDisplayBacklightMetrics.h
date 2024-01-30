@class NSMutableArray;

@interface AWDPowerDisplayBacklightMetrics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char alsAutoBrightnessChangeCount : 1; unsigned char alsAutoBrightnessCurveE0A : 1; unsigned char alsAutoBrightnessCurveE0B : 1; unsigned char alsAutoBrightnessCurveE1 : 1; unsigned char alsAutoBrightnessCurveE2 : 1; unsigned char alsAutoBrightnessCurveEdynth : 1; unsigned char alsAutoBrightnessCurveL0A : 1; unsigned char alsAutoBrightnessCurveL0B : 1; unsigned char alsAutoBrightnessCurveL1 : 1; unsigned char alsAutoBrightnessCurveL2 : 1; unsigned char alsAutoBrightnessLux : 1; unsigned char alsAutoBrightnessSlider : 1; unsigned char alsBrightnessEnableCnt : 1; unsigned char dispOnCount : 1; unsigned char displayIdlePercentage : 1; unsigned char frameRateResidencyPercentage : 1; unsigned char mieCount : 1; unsigned char mieDuration : 1; unsigned char pluggedDisplayOnDuration : 1; unsigned char residencyPercentage30Hz : 1; unsigned char residencyPercentage60Hz : 1; unsigned char totalBacklightPower : 1; unsigned char totalDisplayPower : 1; unsigned char unpluggedDisplayOnDuration : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDispOnCount;
@property (nonatomic) unsigned int dispOnCount;
@property (nonatomic) BOOL hasUnpluggedDisplayOnDuration;
@property (nonatomic) unsigned int unpluggedDisplayOnDuration;
@property (nonatomic) BOOL hasPluggedDisplayOnDuration;
@property (nonatomic) unsigned int pluggedDisplayOnDuration;
@property (nonatomic) BOOL hasMieDuration;
@property (nonatomic) unsigned int mieDuration;
@property (nonatomic) BOOL hasMieCount;
@property (nonatomic) unsigned int mieCount;
@property (nonatomic) BOOL hasDisplayIdlePercentage;
@property (nonatomic) unsigned int displayIdlePercentage;
@property (nonatomic) BOOL hasAlsAutoBrightnessCurveE1;
@property (nonatomic) int alsAutoBrightnessCurveE1;
@property (nonatomic) BOOL hasAlsAutoBrightnessCurveL1;
@property (nonatomic) int alsAutoBrightnessCurveL1;
@property (nonatomic) BOOL hasAlsAutoBrightnessCurveE2;
@property (nonatomic) int alsAutoBrightnessCurveE2;
@property (nonatomic) BOOL hasAlsAutoBrightnessCurveL2;
@property (nonatomic) int alsAutoBrightnessCurveL2;
@property (nonatomic) BOOL hasAlsAutoBrightnessCurveE0A;
@property (nonatomic) int alsAutoBrightnessCurveE0A;
@property (nonatomic) BOOL hasAlsAutoBrightnessCurveL0A;
@property (nonatomic) int alsAutoBrightnessCurveL0A;
@property (nonatomic) BOOL hasAlsAutoBrightnessCurveE0B;
@property (nonatomic) int alsAutoBrightnessCurveE0B;
@property (nonatomic) BOOL hasAlsAutoBrightnessCurveL0B;
@property (nonatomic) int alsAutoBrightnessCurveL0B;
@property (nonatomic) BOOL hasAlsAutoBrightnessCurveEdynth;
@property (nonatomic) int alsAutoBrightnessCurveEdynth;
@property (nonatomic) BOOL hasAlsAutoBrightnessSlider;
@property (nonatomic) unsigned int alsAutoBrightnessSlider;
@property (nonatomic) BOOL hasAlsAutoBrightnessLux;
@property (nonatomic) unsigned int alsAutoBrightnessLux;
@property (nonatomic) BOOL hasAlsAutoBrightnessChangeCount;
@property (nonatomic) unsigned int alsAutoBrightnessChangeCount;
@property (nonatomic) BOOL hasAlsBrightnessEnableCnt;
@property (nonatomic) unsigned int alsBrightnessEnableCnt;
@property (retain, nonatomic) NSMutableArray *backlightBuckets;
@property (nonatomic) BOOL hasTotalDisplayPower;
@property (nonatomic) unsigned int totalDisplayPower;
@property (nonatomic) BOOL hasTotalBacklightPower;
@property (nonatomic) unsigned int totalBacklightPower;
@property (nonatomic) BOOL hasFrameRateResidencyPercentage;
@property (nonatomic) unsigned int frameRateResidencyPercentage;
@property (nonatomic) BOOL hasResidencyPercentage60Hz;
@property (nonatomic) unsigned int residencyPercentage60Hz;
@property (nonatomic) BOOL hasResidencyPercentage30Hz;
@property (nonatomic) unsigned int residencyPercentage30Hz;

+ (Class)backlightBucketType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addBacklightBucket:(id)a0;
- (unsigned long long)backlightBucketsCount;
- (void)clearBacklightBuckets;
- (id)backlightBucketAtIndex:(unsigned long long)a0;

@end
