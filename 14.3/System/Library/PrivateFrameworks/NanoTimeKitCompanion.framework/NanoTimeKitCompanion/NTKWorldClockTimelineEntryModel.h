@class WorldClockCity;

@interface NTKWorldClockTimelineEntryModel : NTKTimelineEntryModel

@property (retain, nonatomic) WorldClockCity *city;
@property (nonatomic) BOOL showIdealizedTime;

+ (id)_analogImageProvider;

- (id)_timeZone;
- (id)init;
- (void).cxx_destruct;
- (double)_timeZoneOffset;
- (id)templateForComplicationFamily:(long long)a0;
- (id)_newCircularMediumTemplate;
- (id)_newSmallModularTemplate;
- (id)_newLargeModularTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_newLargeUtilityTemplate;
- (id)_newSignatureRectangularTemplate;
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
