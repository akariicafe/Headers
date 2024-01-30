@class NSString, NSArray, UILabel, UIDatePicker, UITapGestureRecognizer;
@protocol EKDateTimeCellDelegate;

@interface EKDateTimeCell : UITableViewCell <_UIDatePickerCompactStyleDelegate> {
    UILabel *_titleLabel;
    UIDatePicker *_datePicker;
    long long _currentVisibleComponent;
    BOOL _isEditing;
    NSArray *_currentConstraints;
    UITapGestureRecognizer *_gestureRecognizer;
}

@property (nonatomic) id<EKDateTimeCellDelegate> dateTimeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateConstraints;
- (void)willMoveToSuperview:(id)a0;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)_datePicker:(id)a0 didSelectComponent:(long long)a1;
- (void)datePickerChanged:(id)a0;
- (void)contentSizeCategoryChanged;
- (void)datePickerBeganEditing:(id)a0;
- (void)datePickerEndedEditing:(id)a0;
- (void)handleTap;
- (void)replaceControlsWithPicker:(id)a0;
- (void)resetDatePickerSelection;
- (void)updateWithDate:(id)a0 timeZone:(id)a1 allDay:(BOOL)a2 needsStrikethrough:(BOOL)a3;

@end
