@class NSString, WKContentView;

@interface WKDateTimePicker : NSObject <WKFormControl> {
    NSString *_formatString;
    struct RetainPtr<NSString> { void *m_ptr; } _initialValue;
    double _initialValueAsNumber;
    BOOL _shouldRemoveTimeZoneInformation;
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

- (void)reset:(id)a0;
- (void)setHour:(long long)a0 minute:(long long)a1;
- (void).cxx_destruct;
- (id)controlView;
- (void)done:(id)a0;
- (void)_dateChanged;
- (struct RetainPtr<NSDateFormatter> { void *x0; })dateFormatterForPicker;
- (BOOL)shouldForceGregorianCalendar;
- (void)setDateTimePickerToInitialValue;
- (void)removeDatePickerPresentation;
- (void)showDateTimePicker;
- (id)initWithView:(id)a0 datePickerMode:(long long)a1;
- (void)handleDatePickerPresentationDismissal;
- (void)dealloc;
- (long long)_timeZoneOffsetFromGMT:(id)a0;
- (void)datePickerChanged:(id)a0;
- (void)_dateChangedSetAsString;
- (void)_dateChangedSetAsNumber;
- (void)controlEndEditing;
- (id)_sanitizeInputValueForFormatter:(id)a0;
- (void)controlBeginEditing;
- (id).cxx_construct;

@end
