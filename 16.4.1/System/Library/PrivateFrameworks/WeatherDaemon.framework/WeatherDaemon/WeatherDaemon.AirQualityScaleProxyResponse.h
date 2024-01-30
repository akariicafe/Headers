@interface WeatherDaemon.AirQualityScaleProxyResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ error;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
