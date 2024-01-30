@interface TAVisitDetectionMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double distanceToPreviousVisit;
@property (readonly, nonatomic) double residualDistanceToPreviousVisit;
@property (readonly, nonatomic) unsigned long long nSigmaBetweenVisits;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDistance:(double)a0 residualDistance:(double)a1 nSigma:(unsigned long long)a2;

@end
