@class _UIDatePickerCalendarTime, NSCalendar, NSString, NSArray, NSLocale, _UIDatePickerCompactTimeLabel, _UIDatePickerOverlayPresentation, UILabel;
@protocol _UIDatePickerCalendarTimeViewDelegate;

@interface _UIDatePickerCalendarTimeView : UIView <_UIDatePickerCompactTimeLabelDelegate, UIPopoverPresentationControllerDelegate> {
    struct { unsigned char showsTimeLabel : 1; } _flags;
    NSArray *_clockLayoutConstraints;
    _UIDatePickerOverlayPresentation *_presentation;
}

@property (readonly, nonatomic) UILabel *timeLabel;
@property (readonly, nonatomic) _UIDatePickerCompactTimeLabel *timeTextField;
@property (weak, nonatomic) id<_UIDatePickerCalendarTimeViewDelegate> delegate;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSString *customFontDesign;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) BOOL roundsToMinuteInterval;
@property (readonly, nonatomic) _UIDatePickerCalendarTime *selectedTime;
@property (nonatomic) BOOL shouldShowTimeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reload;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateFonts;
- (void)setSelectedDate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)willMoveToWindow:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)compactTimeLabel:(id)a0 didSelectTime:(id)a1;
- (void)_reloadDateFormatters;
- (void)_setupViewHierarchy;
- (void)_updateClockLayout;
- (void)_updateTextFieldsFromSelectedDateComponents;
- (BOOL)compactTimeLabel:(id)a0 shouldDismissForInteractionAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)compactTimeLabelDidBeginEditing:(id)a0;
- (void)compactTimeLabelDidEndEditing:(id)a0;
- (void)compactTimeLabelWillBecomeFirstResponder:(id)a0;
- (id)createDatePickerForCompactTimeLabel:(id)a0;
- (id)primaryFirstResponder;
- (void)reloadWithCalendar:(id)a0 locale:(id)a1 selectedDate:(id)a2;

@end
