@class UIDatePicker, NSString, UIView, NSArray, _UIDatePickerLinkedLabel, UIPointerInteraction, UILayoutGuide, NSDateFormatter, _UIDatePickerDataModel, UILabel, UIColor;

@interface _UIDatePickerIOSCompactView : UIControl <UIContextMenuInteractionDelegate, UIContextMenuInteractionDelegate_Private, UIPointerInteractionDelegate, _UIDatePickerViewComponent> {
    struct { unsigned char isEnabled : 1; } _flags;
    NSDateFormatter *_dateFormatterMedium;
    NSDateFormatter *_dateFormatterShort;
    UIView *_dateView;
    UIView *_dateBackgroundPlatter;
    _UIDatePickerLinkedLabel *_dateLabel;
    NSDateFormatter *_timeFormatter;
    UIView *_timeView;
    UIView *_timeBackgroundPlatter;
    UILabel *_timeLabel;
    UILayoutGuide *_timeViewLayoutGuide;
    NSDateFormatter *_layoutFormatter;
    BOOL _dateOnLeadingSide;
    NSArray *_dateTimeConstraints;
    UIPointerInteraction *_pointerInteraction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) _UIDatePickerDataModel *data;
@property (readonly, nonatomic) long long datePickerStyle;
@property (nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) BOOL allowsZeroCountDownDuration;
@property (nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) BOOL allowsZeroTimeInterval;
@property (readonly, nonatomic, getter=_isTimeIntervalMode) BOOL isTimeIntervalMode;
@property (nonatomic) double timeInterval;
@property (readonly, nonatomic) double contentWidth;
@property (retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property (retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property (retain, nonatomic, getter=_magnifierLineColor, setter=_setMagnifierLineColor:) UIColor *magnifierLineColor;

- (struct CGSize { double x0; double x1; })defaultSize;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)tintColorDidChange;
- (void)didReset;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)updateConstraints;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)_updateUI;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)didChangeMode;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didChangeDateFrom:(id)a0 animated:(BOOL)a1;
- (void)didChangeToday;
- (BOOL)hasDefaultSize;
- (struct CGSize { double x0; double x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)usesAutoLayout;
- (void)didChangeLocale;
- (void)_setEnabled:(BOOL)a0;
- (void)_setHidesLabels:(BOOL)a0;
- (void)_updateDateBeforeTimeValue;
- (id)_targetedPreviewForContextMenu;
- (void)didChangeMinuteInterval;
- (void)didChangeMinimumDate;
- (void)didChangeMaximumDate;
- (void)_updateEnabledStyling;
- (void)didChangeTimeZone;
- (void)didChangeCalendar;

@end
