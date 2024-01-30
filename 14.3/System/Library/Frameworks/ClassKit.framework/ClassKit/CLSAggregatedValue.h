@interface CLSAggregatedValue : CLSReportItem <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double value;
@property (nonatomic) long long totalSampleCount;
@property (readonly, nonatomic) double normalized;
@property (nonatomic) int aggregateType;

- (void)add:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void)scalarMultiply:(double)a0;

@end
