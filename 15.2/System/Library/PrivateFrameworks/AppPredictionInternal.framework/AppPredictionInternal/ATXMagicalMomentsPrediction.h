@class NSString;

@interface ATXMagicalMomentsPrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *predictionIdentifier;
@property (readonly, nonatomic) double confidence;

+ (id)convertPredictionsToPMMPredictionItems:(id)a0 reason:(unsigned int)a1 anchor:(long long)a2 triggerEvent:(id)a3;
+ (long long)mmReasonToPMMReason:(unsigned int)a0;
+ (id)pmmMetadataForDuetEvent:(id)a0;
+ (long long)mmAnchorToPMMAnchor:(long long)a0;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithConfidence:(double)a0 predictionIdentifier:(id)a1;

@end
