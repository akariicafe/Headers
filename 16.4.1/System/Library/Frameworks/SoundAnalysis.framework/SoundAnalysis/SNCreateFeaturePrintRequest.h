@class NSString, SNTimeDurationConstraint;

@interface SNCreateFeaturePrintRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long featurePrintType;
@property (nonatomic) float overlapFactor;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } windowDuration;
@property (readonly, nonatomic) SNTimeDurationConstraint *windowDurationConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)createAnalyzerWithError:(id *)a0;
- (id)initWithFeaturePrintType:(long long)a0;

@end
