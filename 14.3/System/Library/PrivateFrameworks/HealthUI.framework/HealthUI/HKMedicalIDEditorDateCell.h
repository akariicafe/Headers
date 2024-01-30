@class UIDatePicker, NSDate;

@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell {
    UIDatePicker *_picker;
}

@property (retain, nonatomic) NSDate *dateValue;

- (void).cxx_destruct;
- (id)formattedValue;
- (void)beginEditing;
- (void)commitEditing;
- (void)_dateChanged:(id)a0;
- (void)_configureDatePicker;
- (void)_showDatePicker;
- (void)_hideDatePicker;

@end
