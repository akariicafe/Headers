@class UIDatePicker, NSDate;

@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell {
    UIDatePicker *_picker;
}

@property (retain, nonatomic) NSDate *dateValue;

- (id)formattedValue;
- (void)beginEditing;
- (void).cxx_destruct;
- (void)commitEditing;
- (void)_hideDatePicker;
- (void)_showDatePicker;
- (void)_configureDatePicker;
- (void)_dateChanged:(id)a0;

@end
