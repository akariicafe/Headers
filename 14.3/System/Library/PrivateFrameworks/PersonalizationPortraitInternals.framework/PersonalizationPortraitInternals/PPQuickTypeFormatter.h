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
+ (id)keyDictionaryForQuery:(id)a0;

- (BOOL)_isYearlessComponents:(id)a0;
- (id)makeMeasurementWholeFormatter;
- (id)makeMeasurementUnscaledFormatter;
- (id)init;
- (void).cxx_destruct;
- (id)makeLongEventFormatter;
- (void)_initializeLocalizedLableCache;
- (id)_dateFormatForTemplate:(id)a0;
- (id)etaLabel;
- (id)formattedBirthday:(id)a0;
- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)formattedStringsForLabels:(id)a0;
- (id)itemLabelForBundleId:(id)a0 typeLabel:(id)a1;
- (id)formattedStringForLabel:(id)a0;
- (id)makeMeasurementDecimalFormatter;
- (id)streetLabel;
- (id)_dateFromComponents:(id)a0 destinationCalendar:(id)a1;
- (id)makeYearlessChineseBirthdayFormatter;
- (id)formattedEventTime:(id)a0;
- (id)navigationItemLabelForTypeLabel:(id)a0 destination:(id)a1;
- (id)makeShortEventFormatter;
- (id)makeDateComponentFormatter;
- (id)makeChineseBirthdayFormatter;
- (id)formattedMeasurement:(id)a0 allowDecimals:(BOOL)a1 scaleUnits:(BOOL)a2;
- (id)formattedPostalAddress:(id)a0;
- (id)destinationLabel;
- (id)initWithquery:(id)a0;
- (id)_localizedStringForKey:(id)a0;
- (id)makeBirthdayFormatter;
- (id)attributionPattern;
- (id)_locale;
- (id)distanceLabel;
- (id)formattedLengthInMeters:(double)a0;
- (void)_precacheDateFormats;
- (id)formattedTimeInterval:(double)a0;
- (id)makeLengthFormatter;
- (id)timeLeftLabel;

@end
