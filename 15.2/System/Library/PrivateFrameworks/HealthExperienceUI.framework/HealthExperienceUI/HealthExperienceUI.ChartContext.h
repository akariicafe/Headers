@interface HealthExperienceUI.ChartContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ dateInterval;
    void /* unknown type, empty encoding */ preferredOverlayRawValue;
    void /* unknown type, empty encoding */ trendActiveRawValue;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
