@class UIDatePicker, NSDate;

@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell {
    UIDatePicker *_picker;
}

@property (retain, nonatomic) NSDate *dateValue;

- (void)beginEditing;
- (void).cxx_destruct;
- (id)formattedValue;
- (void)commitEditing;
- (void)_showDatePicker;
- (void)_dateChanged:(id)a0;
- (void)_configureDatePicker;
- (void)_hideDatePicker;

@end
