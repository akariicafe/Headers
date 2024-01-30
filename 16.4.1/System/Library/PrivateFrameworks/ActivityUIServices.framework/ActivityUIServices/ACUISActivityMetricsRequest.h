@class ACUISSystemApertureMetricsRequest, ACUISActivityItemMetricsRequest, _TtC18ActivityUIServices22ActivityMetricsRequest;

@interface ACUISActivityMetricsRequest : NSObject <NSCopying, NSSecureCoding> {
    _TtC18ActivityUIServices22ActivityMetricsRequest *_metricsRequest;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ACUISActivityItemMetricsRequest *lockScreenMetrics;
@property (copy, nonatomic) ACUISSystemApertureMetricsRequest *systemApertureMetrics;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLockScreenMetrics:(id)a0;
- (id)_ACUISItemMetricsRequestFromRequest:(id)a0;
- (id)_activityMetricsRequest;
- (id)_initWithMetricsRequest:(id)a0;

@end
