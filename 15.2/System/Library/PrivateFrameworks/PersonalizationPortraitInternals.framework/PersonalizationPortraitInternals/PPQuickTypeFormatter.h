@class NSString, NSURL, _PASLock, NSMeasurementFormatter, NSLengthFormatter, NSLocale, NSDateComponentsFormatter, PPQuickTypeQuery, NSDateFormatter, NSCache;

@interface PPQuickTypeFormatter : NSObject {
    PPQuickTypeQuery *_query;
    NSLocale *_locale;
    NSString *_desiredLanguage;
    NSString *_fallbackLanguage;
    _PASLock *_localizedStrings;
    NSDateFormatter *_birthdayFormatter;
    NSDateFormatter *_chineseBirthdayFormatter;
    NSDateFormatter *_yearlessChineseBirthdayFormatter;
    NSDateFormatter *_shortEventFormatter;
    NSDateFormatter *_longEventFormatter;
    NSCache *_localizedLabelCache;
    NSCache *_dateFormatCache;
    NSURL *_labeledValueLocalizationURL;
    NSCache *_appNameCache;
    NSMeasurementFormatter *_measurementWholeFormatter;
    NSMeasurementFormatter *_measurementDecimalFormatter;
    NSMeasurementFormatter *_measurementUnscaledFormatter;
    NSLengthFormatter *_lengthFormatter;
    NSDateComponentsFormatter *_dateComponentFormatter;
}

+ (id)new;
+ (id)formatterWithQuery:(id)a0;

- (id)timeLeftLabel;
- (id)formattedMeasurement:(id)a0 allowDecimals:(BOOL)a1 scaleUnits:(BOOL)a2;
- (id)destinationLabel;
- (id)navigationItemLabelForTypeLabel:(id)a0 destination:(id)a1;
- (id)formattedEventTime:(id)a0;
- (id)inviteLinkLabel;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)makeMeasurementWholeFormatter;
- (id)formattedStringForLabel:(id)a0;
- (id)formattedBirthday:(id)a0;
- (id)makeShortEventFormatter;
- (id)formattedStringsForLabels:(id)a0;
- (id)makeLongEventFormatter;
- (id)makeLengthFormatter;
- (id)formattedTimeInterval:(double)a0;
- (id)makeMeasurementUnscaledFormatter;
- (id)distanceLabel;
- (void).cxx_destruct;
- (id)makeChineseBirthdayFormatter;
- (id)attributionPattern;
- (id)init;
- (id)formattedLengthInMeters:(double)a0;
- (id)makeDateComponentFormatter;
- (id)formattedPostalAddress:(id)a0;
- (id)makeMeasurementDecimalFormatter;
- (id)makeBirthdayFormatter;
- (id)streetLabel;
- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)etaLabel;

@end
