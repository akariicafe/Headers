@class NSString, NSMeasurementFormatter, NSLengthFormatter, _PASLock, NSLocale, NSDateComponentsFormatter, PPQuickTypeQuery, NSDateFormatter, _PASCachedResult, NSCache;

@interface PPQuickTypeFormatter : NSObject {
    PPQuickTypeQuery *_query;
    NSLocale *_locale;
    NSString *_desiredLanguage;
    NSString *_fallbackLanguage;
    NSDateFormatter *_birthdayFormatter;
    NSDateFormatter *_chineseBirthdayFormatter;
    NSDateFormatter *_yearlessChineseBirthdayFormatter;
    NSDateFormatter *_shortEventFormatter;
    NSDateFormatter *_longEventFormatter;
    NSCache *_dateFormatCache;
    NSCache *_appNameCache;
    NSMeasurementFormatter *_measurementWholeFormatter;
    NSMeasurementFormatter *_measurementDecimalFormatter;
    NSMeasurementFormatter *_measurementUnscaledFormatter;
    NSLengthFormatter *_lengthFormatter;
    NSDateComponentsFormatter *_dateComponentFormatter;
    _PASLock *_localizedStringsCache;
    _PASCachedResult *_cachedContactsLabeledValuesLprojs;
}

+ (id)formatterWithQuery:(id)a0;
+ (id)new;

- (id)formattedBirthday:(id)a0;
- (id)formattedMeasurement:(id)a0 allowDecimals:(BOOL)a1 scaleUnits:(BOOL)a2;
- (id)distanceLabel;
- (id)makeMeasurementDecimalFormatter;
- (id)formattedStringForLabel:(id)a0;
- (id)destinationLabel;
- (id)makeLengthFormatter;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)formattedStringsForLabels:(id)a0;
- (id)etaLabel;
- (id)formattedEventTime:(id)a0;
- (id)makeMeasurementUnscaledFormatter;
- (id)makeDateComponentFormatter;
- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)makeChineseBirthdayFormatter;
- (id)makeMeasurementWholeFormatter;
- (id)makeBirthdayFormatter;
- (id)inviteLinkLabel;
- (id)makeLongEventFormatter;
- (id)formattedLengthInMeters:(double)a0;
- (id)timeLeftLabel;
- (id)makeShortEventFormatter;
- (id)init;
- (id)attributionPattern;
- (id)formattedPostalAddress:(id)a0;
- (id)navigationItemLabelForTypeLabel:(id)a0 destination:(id)a1;
- (id)formattedTimeInterval:(double)a0;
- (void).cxx_destruct;
- (id)streetLabel;

@end
