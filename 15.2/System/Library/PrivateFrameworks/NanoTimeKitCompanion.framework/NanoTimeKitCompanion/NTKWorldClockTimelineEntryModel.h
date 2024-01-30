@class WorldClockCity;

@interface NTKWorldClockTimelineEntryModel : NTKTimelineEntryModel

@property (retain, nonatomic) WorldClockCity *city;
@property (nonatomic) BOOL showIdealizedTime;

+ (id)_analogImageProvider;

- (id)_timeZone;
- (double)_timeZoneOffset;
- (void).cxx_destruct;
- (id)init;
- (id)templateForComplicationFamily:(long long)a0;
- (id)_newSmallModularTemplate;
- (id)_newLargeModularTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newLargeUtilityTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_newCircularMediumTemplate;
- (id)_signatureCorner;
- (id)_abbreviationTextProvider;
- (id)_timeAndDifferenceOffsetTextProvider;
- (id)_timeAndAbbreviationTextProvider;
- (id)_timeTextProvider;
- (id)_cityNameTextProvider;
- (id)_timeAndDayOffsetTextProvider;
- (id)_differenceTextProvider;
- (id)_timeAndCityNameOffsetTextProvider;
- (id)_graphicCircularMetadata;
- (id)_timeCityNameTimeZoneOffsetTextProvider;
- (id)_differenceTextProviderWithSize:(long long)a0 andCaps:(BOOL)a1;
- (id)_dayOffsetTextProvider;

@end
