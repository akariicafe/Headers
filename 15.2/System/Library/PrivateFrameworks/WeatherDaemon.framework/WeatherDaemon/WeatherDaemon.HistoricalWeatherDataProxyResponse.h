@interface WeatherDaemon.HistoricalWeatherDataProxyResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ history;
    void /* unknown type, empty encoding */ error;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
