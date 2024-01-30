@class TAInterVisitMetricPerDevice;

@interface TASingleVisitDetectionMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TAInterVisitMetricPerDevice *interVisitMetrics;
@property (readonly, nonatomic) unsigned long long loiType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInterVisitMetrics:(id)a0 loiType:(unsigned long long)a1;

@end
