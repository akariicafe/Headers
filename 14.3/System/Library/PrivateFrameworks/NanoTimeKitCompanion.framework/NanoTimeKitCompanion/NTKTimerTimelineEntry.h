@interface NTKTimerTimelineEntry : NTKTimelineEntryModel

@property (nonatomic) double remainingTime;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double countdownDuration;

+ (id)_modularRectangularImageProvider;
+ (id)_cornerSmallImageProvider;
+ (id)_modularSmallImageProvider;
+ (id)_circularSmallImageProvider;
+ (id)_circularMediumImageProvider;
+ (id)_utilitarianSmallImageProvider;
+ (id)_extraLargeImageProvider;
+ (id)companionModel;

- (id)templateForComplicationFamily:(long long)a0;
- (id)_countdownTextProvider;
- (id)_newCircularMediumTemplate;
- (id)_newSimpleTextTemplate;
- (id)_newSmallModularTemplate;
- (id)_newLargeModularTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newLargeFlatUtilityTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newSignatureCornerGaugeImageTemplate;
- (id)_newSignatureRectangular;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureExtraLargeCircularTemplate;
- (id)_templateMetadata;
- (id)_headerTextProviderForTimeAtState:(unsigned long long)a0;
- (id)_textProviderForTimeAtState:(unsigned long long)a0 withUnknownText:(id)a1 twoDigitMinuteZeroPadding:(BOOL)a2;
- (id)_gaugeProviderForTimeAtState:(unsigned long long)a0 tintColor:(id)a1;
- (id)_textProviderForTimeAtState:(unsigned long long)a0 withUnknownText:(id)a1;
- (id)_textProviderForTimeAtState:(unsigned long long)a0;
- (id)_relativeDateGaugeProviderForTimeInterval:(double)a0 fullDuration:(double)a1 paused:(BOOL)a2 tintColor:(id)a3;
- (id)_relativeDateTextProviderForTimeInterval:(double)a0 paused:(BOOL)a1 twoDigitMinuteZeroPadding:(BOOL)a2;

@end
