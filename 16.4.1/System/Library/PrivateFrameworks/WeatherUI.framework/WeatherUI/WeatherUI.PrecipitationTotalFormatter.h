@class NSLocale;

@interface WeatherUI.PrecipitationTotalFormatter : NSMeasurementFormatter {
    void /* unknown type, empty encoding */ trimLeadingZeros;
}

@property (nonatomic, copy) NSLocale *locale;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
