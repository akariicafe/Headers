@class NSDate, NSCalendar, NSString, NSLocale, NSDateComponents, NSTimeZone, _UIDatePickerDateRange, _UIDatePickerChineseCalendar;

@interface _UIDatePickerDataModel : NSObject {
    NSLocale *_effectiveLocale;
    NSCalendar *_effectiveCalendar;
    BOOL _usingLocaleCalendar;
    _UIDatePickerChineseCalendar *_chineseWrapperCalendar;
}

@property (nonatomic) long long datePickerStyle;
@property (nonatomic) long long datePickerMode;
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSLocale *effectiveLocale;
@property (readonly, nonatomic) NSCalendar *effectiveCalendar;
@property (readonly, nonatomic) NSCalendar *formattingCalendar;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDateComponents *lastSelectedDateComponents;
@property (readonly, nonatomic) NSDate *effectiveDate;
@property (readonly, nonatomic) _UIDatePickerDateRange *dateRange;
@property (readonly, copy, nonatomic) NSDateComponents *effectiveDateComponents;
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) NSDate *maximumDate;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) BOOL roundsToMinuteInterval;
@property (retain, nonatomic) NSString *customFontDesign;

- (id)init;
- (void).cxx_destruct;
- (void)_setupDerivedLocaleAndCalendars;
- (id)_dateForRoundingDateToMinuteInterval:(id)a0;
- (id)createDatePickerRepresentingDataModel;
- (id)createDatePickerRepresentingDataModelForMode:(long long)a0 style:(long long)a1;
- (void)resetForCurrentLocaleOrCalendarChange;

@end
