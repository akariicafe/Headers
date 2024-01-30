@class NSDate, NSCalendar, NSString, NSLocale, NSDateComponents, NSTimeZone, _UIDatePickerDateRange, _UIDatePickerChineseCalendar;

@interface _UIDatePickerDataModel : NSObject {
    NSLocale *_effectiveLocale;
    NSCalendar *_effectiveCalendar;
    _UIDatePickerChineseCalendar *_chineseWrapperCalendar;
    _UIDatePickerDateRange *_dateRange;
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
@property (readonly, copy, nonatomic) NSDateComponents *effectiveDateComponents;
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) NSDate *maximumDate;
@property (nonatomic) long long minuteInterval;
@property (retain, nonatomic) NSString *customFontDesign;

- (id)init;
- (void).cxx_destruct;
- (void)resetForCurrentLocaleOrCalendarChange;
- (void)_setupDerivedLocaleAndCalendars;
- (id)createDatePickerRepresentingDataModel;

@end
