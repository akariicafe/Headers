@class NSNumber;

@interface CMProxPDP : NSObject <NSSecureCoding, NSCopying> {
    NSNumber *fTimestamp;
    NSNumber *fIntensity;
    NSNumber *fIntensityCalDelta;
    NSNumber *fIntensityBaselineDelta;
    NSNumber *fAmbient;
    NSNumber *fPocketProbability;
    NSNumber *fBaselineConfidence;
    NSNumber *fRxNtcC;
    NSNumber *fScanFlags;
    NSNumber *fPocketFlag;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *timestamp;
@property (readonly, nonatomic) NSNumber *intensity;
@property (readonly, nonatomic) NSNumber *intensityCalDelta;
@property (readonly, nonatomic) NSNumber *intensityBaselineDelta;
@property (readonly, nonatomic) NSNumber *ambient;
@property (readonly, nonatomic) NSNumber *pocketProbability;
@property (readonly, nonatomic) NSNumber *baselineConfidence;
@property (readonly, nonatomic) NSNumber *rxNtcC;
@property (readonly, nonatomic) NSNumber *scanFlags;
@property (readonly, nonatomic) NSNumber *pocketFlag;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithTimestamp:(double)a0 intensity:(float)a1 intensityCalDelta:(float)a2 intensityBaselineDelta:(float)a3 ambient:(float)a4 pocketProbability:(float)a5 baselineConfidence:(float)a6 rxNtcC:(float)a7 scanFlags:(BOOL)a8 pocketFlag:(BOOL)a9;

@end
