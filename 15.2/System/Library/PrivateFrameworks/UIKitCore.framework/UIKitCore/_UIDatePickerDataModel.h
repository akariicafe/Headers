@class NSDate, NSCalendar, NSString, NSLocale, NSDateComponents, NSTimeZone, _UIDatePickerDateRange, _UIDatePickerChineseCalendar;

@interface _UIDatePickerDataModel : NSObject {
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
@property (nonatomic) BOOL roundsToMinuteInterval;
@property (retain, nonatomic) NSString *customFontDesign;

- (id)createDatePickerRepresentingDataModelForMode:(long long)a0 style:(long long)a1;
- (void)_setupDerivedCalendars;
- (id)_dateForRoundingDateToMinuteInterval:(id)a0;
- (id)createDatePickerRepresentingDataModel;
- (void).cxx_destruct;
- (id)init;
- (void)resetForCurrentLocaleOrCalendarChange;

@end
