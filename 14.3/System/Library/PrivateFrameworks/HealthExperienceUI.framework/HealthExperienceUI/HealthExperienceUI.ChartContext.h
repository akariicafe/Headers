@interface HealthExperienceUI.ChartContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ dateInterval;
    void /* unknown type, empty encoding */ preferredOverlayRawValue;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
