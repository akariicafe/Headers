@class NSString;

@interface WeatherComplications.ChanceRainDataSource : WeatherComplications.BaseDataSource {
    void /* unknown type, empty encoding */ $__lazy_storage_$_rectangularFormatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nhpFormatter;
    void /* unknown type, empty encoding */ nhpLocationCache;
    void /* unknown type, empty encoding */ nhpLogger;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ nhpFamilies;
}

@property (class, nonatomic, readonly) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;
- (id)sampleTemplate;

@end
