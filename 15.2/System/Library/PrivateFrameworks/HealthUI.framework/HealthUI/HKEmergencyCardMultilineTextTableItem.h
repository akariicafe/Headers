@class HKMedicalIDEditorMultilineStringCell;
@protocol HKEmergencyCardRowHeightChangeDelegate;

@interface HKEmergencyCardMultilineTextTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate> {
    HKMedicalIDEditorMultilineStringCell *_editableCell;
}

@property (weak, nonatomic) id<HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate;

- (void)setData:(id)a0;
- (void).cxx_destruct;
- (void)commitEditing;
- (id)_placeholderText;
- (void)medicalIDEditorCellDidChangeSelection:(id)a0 keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)medicalIDEditorCellDidBeginEditing:(id)a0 keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)medicalIDEditorCell:(id)a0 didChangeHeight:(double)a1 keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;
- (id)_multilineStringValue;
- (void)_updateMultilineStringValueWithValue:(id)a0;
- (double)_cellFittedHeightWithWidth:(double)a0;
- (void)medicalIDEditorCellDidChangeValue:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndex:(long long)a1;
- (void)_configureEditableCell:(id)a0;
- (id)_editableCell;

@end
