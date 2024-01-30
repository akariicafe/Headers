@class NSString, UIDatePicker, DOMHTMLInputElement;

@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl> {
    NSString *_formatString;
    BOOL _shouldRemoveTimeZoneInformation;
    BOOL _isTimeInput;
}

@property (retain, nonatomic) DOMHTMLInputElement *_inputElement;
@property (retain, nonatomic) UIDatePicker *_datePicker;

- (void)dealloc;
- (id)controlView;
- (long long)_timeZoneOffsetFromGMT:(id)a0;
- (void)_dateChangedSetAsString;
- (void)_dateChangedSetAsNumber;
- (void)_dateChangeHandler:(id)a0;
- (id)_sanitizeInputValueForFormatter:(id)a0;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)initWithDOMHTMLInputElement:(id)a0 datePickerMode:(long long)a1;
- (void)_dateChanged;

@end
