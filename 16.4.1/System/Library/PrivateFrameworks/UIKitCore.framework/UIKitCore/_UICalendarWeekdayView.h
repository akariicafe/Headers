@class _UICalendarDataModel, NSArray, _UIDatePickerLinkedLabel;

@interface _UICalendarWeekdayView : UIView {
    struct { BOOL rebuildLabels; } _flags;
    NSArray *_labels;
}

@property (readonly, nonatomic) _UICalendarDataModel *dataModel;
@property (readonly, nonatomic) _UIDatePickerLinkedLabel *sizingLabel;
@property (nonatomic) double preferredLabelWidth;

- (void)_updateFont;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithDataModel:(id)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didUpdateLocale;
- (void)_rebuildLabels;
- (void)_setNeedsRebuildLabels;
- (void)didUpdateCalendar;
- (void)didUpdateFontDesign;

@end
