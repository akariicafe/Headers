@class NSString, WKContentView;

@interface WKDateTimePicker : NSObject <WKFormControl> {
    NSString *_formatString;
    struct RetainPtr<NSString> { void *m_ptr; } _initialValue;
    WKContentView *_view;
    struct CGPoint { double x; double y; } _interactionPoint;
    struct RetainPtr<UIDatePicker> { void *m_ptr; } _datePicker;
    BOOL _isDismissingDatePicker;
    struct RetainPtr<_UIDatePickerOverlayPresentation> { void *m_ptr; } _datePickerPresentation;
    struct RetainPtr<UIToolbar> { void *m_ptr; } _accessoryView;
}

@property (readonly, nonatomic) NSString *calendarType;
@property (readonly, nonatomic) double hour;
@property (readonly, nonatomic) double minute;

- (id).cxx_construct;
- (void)done:(id)a0;
- (void)reset:(id)a0;
- (void)dealloc;
- (id)controlView;
- (void)setHour:(long long)a0 minute:(long long)a1;
- (void).cxx_destruct;
- (void)_dateChanged;
- (id)_sanitizeInputValueForFormatter:(id)a0;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)setDateTimePickerToInitialValue;
- (struct RetainPtr<NSDateFormatter> { void *x0; })dateFormatterForPicker;
- (void)datePickerChanged:(id)a0;
- (void)handleDatePickerPresentationDismissal;
- (id)initWithView:(id)a0 datePickerMode:(long long)a1;
- (void)removeDatePickerPresentation;
- (BOOL)shouldForceGregorianCalendar;
- (void)showDateTimePicker;

@end
