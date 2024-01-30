@class UILabel, _UIControlEventsGestureRecognizer, UIView;
@protocol _UIDatePickerWheelsTimeLabelDelegate;

@interface _UIDatePickerWheelsTimeLabel : _UIDatePickerCalendarTimeLabel <_UIControlEventsGestureRecognizerDelegate> {
    UILabel *_measurementLabel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _hoursReferenceFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _minutesReferenceFrame;
    long long _highlightedScope;
    BOOL _highlightedForTouch;
    UIView *_touchHighlightedView;
}

@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UILabel *hourLabel;
@property (readonly, nonatomic) UILabel *minuteLabel;
@property (readonly, nonatomic) UILabel *timeSeparatorLabel;
@property (readonly, nonatomic) _UIControlEventsGestureRecognizer *controlEventsGestureRecognizer;
@property (weak, nonatomic) id<_UIDatePickerWheelsTimeLabelDelegate> wheelsDelegate;
@property (nonatomic) BOOL wheelsActive;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } combinedTextRectFromLabels;

+ (BOOL)supportsScribbleInteraction;

- (void)setContentHidden:(BOOL)a0;
- (void)setFont:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hourRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })minuteRect;
- (void)stateMachineUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (void)controlEventsGestureRecognizer:(id)a0 recognizedControlEvent:(unsigned long long)a1 withEvent:(id)a2;
- (void)willBeginWritingInScribbleInteraction;
- (id)_viewForHighlightedTouchAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithTimeFormat:(id)a0 minuteInterval:(long long)a1;
- (void).cxx_destruct;
- (void)endEditingWheels;
- (BOOL)_treatMinutesAsHoursForState:(unsigned long long)a0;
- (void)pushCurrentStateIntoUI;
- (BOOL)displaysTimeOfDayLabel;
- (long long)decrementBehaviour;
- (void)beginEditingWheels;
- (id)font;
- (void)setHighlightedForTouch:(BOOL)a0;
- (void)updateHoursFromDatePicker:(long long)a0 wheelsChanged:(BOOL)a1;
- (void)updateMinutesFromDatePicker:(long long)a0 wheelsChanged:(BOOL)a1;
- (void)configureLabelsForHour:(struct { double x0; double x1; long long x2; })a0 minute:(struct { double x0; double x1; long long x2; })a1;

@end
