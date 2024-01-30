@class NSArray;

@interface WeatherComplications.Container : CLKCComplicationBundleDataSourceContainer

@property (class, nonatomic, readonly) NSArray *complicationBundleDataSources;

- (id)init;

@end
