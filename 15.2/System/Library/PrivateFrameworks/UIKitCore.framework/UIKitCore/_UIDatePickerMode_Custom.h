@class NSString, NSArray;

@interface _UIDatePickerMode_Custom : _UIDatePickerMode {
    NSString *_originalFormat;
    NSArray *_components;
    NSArray *_sortedComponents;
    long long _displayedUnits;
    long long _desiredUnits;
}

- (id)components;
- (void).cxx_destruct;
- (void)noteCalendarChanged;
- (id)initWithFormatString:(id)a0 datePickerView:(id)a1;
- (void)resetComponentWidths;
- (long long)componentForCalendarUnit:(unsigned long long)a0;
- (unsigned long long)numberOfComponents;
- (unsigned long long)calendarUnitForComponent:(long long)a0;
- (id)dateFormatForCalendarUnit:(unsigned long long)a0;
- (double)widthForCalendarUnit:(unsigned long long)a0 font:(id)a1 maxWidth:(double)a2;
- (unsigned long long)extractableCalendarUnits;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)a0;
- (long long)valueForRow:(long long)a0 inCalendarUnit:(unsigned long long)a1;
- (long long)numberOfRowsInComponent:(long long)a0;
- (id)dateForRow:(long long)a0 inCalendarUnit:(unsigned long long)a1;
- (long long)displayedCalendarUnits;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)a0;
- (id)_componentForCalendarUnit:(unsigned long long)a0;

@end
