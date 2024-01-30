@interface WeatherDaemon.WeatherDataProxyRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ requests;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ options;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
