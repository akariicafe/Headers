@class NSMutableArray;

@interface TISKPositionalMetricSample : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *positionalMetricSample;

+ (id)makeMetric:(unsigned long long)a0;

- (void)merge:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (unsigned long long)size;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description:(BOOL)a0;
- (id)generateDataForSR:(id)a0;
- (void)addSample:(id)a0 withPosition:(unsigned long long)a1;
- (id)singleMetricSample:(unsigned long long)a0;

@end
