@class NSNumber, NSString;

@interface WeatherComplications.UVDataSource : WeatherComplications.BaseDataSource {
    void /* unknown type, empty encoding */ rectangularFormatter;
}

@property (class, nonatomic, readonly) NSNumber *legacyNTKComplicationType;
@property (class, nonatomic, readonly) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;

@end
