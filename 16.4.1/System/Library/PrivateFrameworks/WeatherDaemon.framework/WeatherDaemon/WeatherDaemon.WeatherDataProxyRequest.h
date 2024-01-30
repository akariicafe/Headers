@interface WeatherDaemon.WeatherDataProxyRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ requests;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ options;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
