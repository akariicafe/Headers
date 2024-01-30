@class TAInterVisitMetricPerDevice;

@interface TAGeneralDetectionMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TAInterVisitMetricPerDevice *interVisitMetrics;
@property (readonly, nonatomic) unsigned long long dominantUserActivity;
@property (readonly, nonatomic) long long pdState;
@property (readonly, nonatomic) BOOL geoNavHint;
@property (readonly, nonatomic) BOOL vehicularStateHint;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInterVisitMetrics:(id)a0 dominantUserActivity:(unsigned long long)a1 pdState:(long long)a2 geoNavHint:(BOOL)a3 vehicularStateHint:(BOOL)a4;

@end
