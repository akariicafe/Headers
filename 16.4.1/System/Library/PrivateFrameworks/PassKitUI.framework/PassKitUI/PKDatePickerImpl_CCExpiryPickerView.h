@class UIFont, NSString, NSDateFormatter, NSCalendar, NSDate, NSNumber, NSLocale;

@interface PKDatePickerImpl_CCExpiryPickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate> {
    unsigned long long _calendarUnit[2];
    struct _NSRange { unsigned long long location; unsigned long long length; } _possibleRange[2];
    double _width[2];
    NSDateFormatter *_dateFormatter[2];
    NSNumber *_useDoubleMonthStyle;
    NSCalendar *_calendar;
    NSLocale *_locale;
    UIFont *_font;
    id _changeTarget;
    SEL _changeAction;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)_calculateWidthForComponent:(long long)a0 usingFont:(id)a1;
- (id)_dateForComponent:(long long)a0 index:(unsigned long long)a1;
- (id)_dateFormatForCalendarUnit:(unsigned long long)a0;
- (id)_dateWithCalendarUnit:(unsigned long long)a0 value:(long long)a1;
- (unsigned long long)_defaultIndexForComponent:(long long)a0;
- (long long)_numberOfItemsForComponent:(long long)a0;
- (id)_stringForComponent:(long long)a0 index:(unsigned long long)a1;
- (BOOL)_useDoubleMonthStyle;
- (double)_widthForComponent:(long long)a0;
- (id)initShowingDay:(BOOL)a0 month:(BOOL)a1 year:(BOOL)a2 useDarkAppearance:(BOOL)a3 locale:(id)a4 calendar:(id)a5;
- (void)prepareToDie;
- (void)setDateValueChangedTarget:(id)a0 action:(SEL)a1;

@end
