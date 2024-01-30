@class NSNumber, NSString;

@interface WeatherComplications.WeatherDataSource : WeatherComplications.BaseDataSource

@property (class, nonatomic, readonly) NSNumber *legacyNTKComplicationType;
@property (class, nonatomic, readonly) NSString *bundleIdentifier;

- (id)initWithComplication:(id)a0 family:(long long)a1 forDevice:(id)a2;

@end
