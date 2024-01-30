@class NSArray, SAUIAppPunchOut, SAUIImageResource;

@interface SAWeatherForecastSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *aceWeathers;
@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (retain, nonatomic) SAUIImageResource *attributionImage;

+ (id)forecastSnippet;
+ (id)forecastSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
