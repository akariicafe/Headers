@class _UIDatePickerCalendarTime, NSCalendar, NSString, _UIDatePickerCalendarTimeFormat, UISegmentedControl, NSArray, _UIDatePickerNumericKeyboardViewController, NSLocale, NSDateFormatter, _UIPassthroughScrollInteraction, UILabel, _UIDatePickerCalendarTimeLabel;
@protocol _UIDatePickerCalendarTimeViewDelegate;

@interface _UIDatePickerCalendarTimeView : UIView <_UIDatePickerCalendarTimeLabelDelegate, UIPopoverPresentationControllerDelegate, _UIPassthroughScrollInteractionDelegate> {
    struct { unsigned char isPendingManualKeyboardPresentation : 1; unsigned char isPresentingManualKeyboard : 1; unsigned char needsLabelUpdateOnResignFirstResponder : 1; unsigned char showsTimeLabel : 1; } _flags;
    NSDateFormatter *_formatter;
    long long _currentLayout;
    NSArray *_clockLayoutConstraints;
    _UIPassthroughScrollInteraction *_passthroughInteraction;
}

@property (readonly, nonatomic) UILabel *timeLabel;
@property (readonly, nonatomic) _UIDatePickerCalendarTimeLabel *timeTextField;
@property (readonly, nonatomic) UISegmentedControl *timeOfDaySelector;
@property (retain, nonatomic) _UIDatePickerNumericKeyboardViewController *numericKeyboardViewController;
@property (retain, nonatomic) _UIDatePickerCalendarTimeFormat *timeFormat;
@property (nonatomic, getter=isPassthroughInteractionEnabled) BOOL passthroughInteractionEnabled;
@property (weak, nonatomic) id<_UIDatePickerCalendarTimeViewDelegate> delegate;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSString *customFontDesign;
@property (retain, nonatomic) _UIDatePickerCalendarTime *selectedTime;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) BOOL shouldShowTimeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateFonts;
- (void)willMoveToSuperview:(id)a0;
- (BOOL)passthroughScrollInteraction:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)_notifyDelegate;
- (void)dealloc;
- (void)_reload;
- (BOOL)timeLabelShouldSuppressSoftwareKeyboard:(id)a0;
- (void)timeLabelDidFailToBecomeFirstResponder:(id)a0;
- (void)reloadWithCalendar:(id)a0 locale:(id)a1 selectedTime:(id)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)presentationControllerWillDismiss:(id)a0;
- (void)timeLabelDidBecomeFirstResponder:(id)a0;
- (void)timeLabelDidResignFirstResponder:(id)a0;
- (void)timeLabelWillBecomeFirstResponder:(id)a0;
- (void)_setupDateFormatter;
- (void)_setupViewHierarchy;
- (void)_dismissManualKeyboard;
- (void)_reloadDateFormatters;
- (void)_updateTextFieldsFromSelectedDateComponents;
- (void)_disableCustomKeyboardIfNecessary;
- (void)didUpdateTimeOfDayValue:(id)a0;
- (void)_reloadTimeOfDaySelector;
- (void)_updateSelectedDateComponentsFromTextFields;
- (void)_enableCustomKeyboardIfNecessary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)timeLabelDidBeginEditing:(id)a0;
- (long long)keyboardTypeForTimeLabel:(id)a0;
- (BOOL)timeLabel:(id)a0 didReceiveText:(id)a1;
- (void)timeLabel:(id)a0 didUpdateText:(id)a1;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)a0;
- (void)timeLabelDidEndEditing:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)primaryFirstResponder;
- (void)_updateClockLayout;

@end
