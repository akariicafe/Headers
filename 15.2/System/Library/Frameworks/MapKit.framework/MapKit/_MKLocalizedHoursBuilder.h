@class NSTimeZone, NSString, UIColor, GEOBusinessHours, NSDate, NSArray;

@interface _MKLocalizedHoursBuilder : NSObject {
    BOOL _isClosedTodayAllDay;
    BOOL _isCurrentlyClosed;
    BOOL _isClosingSoon;
    BOOL _isOpeningSoon;
    BOOL _isPermanentlyClosed;
    BOOL _isTemporarilyClosed;
    BOOL _isOpenTodayAllDay;
    BOOL _isCurrentlyOpen;
}

@property (nonatomic) unsigned long long geoMapItemOpeningHourOptions;
@property (nonatomic) unsigned long long localizedHoursStringOptions;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) GEOBusinessHours *operatingHours;
@property (retain, nonatomic) NSDate *compareDate;
@property (readonly, nonatomic) NSString *localizedOperatingHours;
@property (readonly, nonatomic) NSString *localizedOpenState;
@property (readonly, nonatomic) UIColor *hoursStateLabelColor;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSArray *AMPMSymbols;

+ (id)testGetMonthAndDayFormatter;
+ (id)testGetDayOfWeekFormatterFull;
+ (id)testGetHoursFormatter;
+ (id)testGetDayOfWeekFormatterShort;
+ (id)localizedHoursStringNormalHours;
+ (id)localizedHoursStringSpecialHours;
+ (id)hoursDelimeter;
+ (id)localizedHoursDayRangeString:(id)a0;

- (id)initWithMapItem:(id)a0 localizedHoursStringOptions:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_resetLocalizedBuilder:(BOOL)a0;
- (void)_resetLocalizedStrings:(BOOL)a0;
- (void)_updateLocalizedString;
- (id)_updateLocalizedOperatingHoursString:(unsigned long long)a0;
- (id)concatenateStrings:(id)a0 joinedByString:(id)a1;
- (id)_formattedStringForHourRangesWithStartAndEndDates:(id)a0 timeZone:(id)a1;
- (void)updateHoursLabelColorWithDefaultLabelColor:(id)a0;
- (void)calculateWidthsForData:(id)a0;
- (id)formatData:(id)a0;
- (void)_commonInit;
- (id)initWithBusinessHours:(id)a0 timeZone:(id)a1 localizedHoursStringOptions:(unsigned long long)a2;
- (void)updateHoursLabelColor;
- (id)initWithMapItemForMessageForBusiness:(id)a0 localizedHoursStringOptions:(unsigned long long)a1;

@end
