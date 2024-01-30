@class NSString;

@interface HealthExperienceUI.ChartContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ dateInterval;
    void /* unknown type, empty encoding */ preferredOverlayRawValue;
    void /* unknown type, empty encoding */ trendActiveRawValue;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
