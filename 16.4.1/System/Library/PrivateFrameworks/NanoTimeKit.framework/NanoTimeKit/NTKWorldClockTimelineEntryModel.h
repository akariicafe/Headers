@class WorldClockCity;

@interface NTKWorldClockTimelineEntryModel : NTKTimelineEntryModel

@property (retain, nonatomic) WorldClockCity *city;
@property (nonatomic) BOOL showIdealizedTime;

+ (id)_analogImageProvider;

- (id)init;
- (void).cxx_destruct;
- (id)_timeZone;
- (double)_timeZoneOffset;
- (id)_abbreviationTextProvider;
- (id)_cityNameTextProvider;
- (id)_dayOffsetTextProvider;
- (id)_differenceTextProvider;
- (id)_differenceTextProviderWithSize:(long long)a0 andCaps:(BOOL)a1;
- (id)_graphicCircularMetadata;
- (id)_newCircularMediumTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newLargeModularTemplate;
- (id)_newLargeUtilityTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newSignatureRectangularTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newSmallModularTemplate;
- (id)_signatureCorner;
- (id)_timeAndAbbreviationTextProvider;
- (id)_timeAndCityNameOffsetTextProvider;
- (id)_timeAndDayOffsetTextProvider;
- (id)_timeAndDifferenceOffsetTextProvider;
- (id)_timeCityNameTimeZoneOffsetTextProvider;
- (id)_timeTextProvider;
- (id)templateForComplicationFamily:(long long)a0;

@end
