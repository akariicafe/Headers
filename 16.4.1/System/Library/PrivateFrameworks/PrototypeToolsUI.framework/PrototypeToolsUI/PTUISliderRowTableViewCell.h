@class UISlider, UILabel;

@interface PTUISliderRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate> {
    UISlider *_slider;
    UILabel *_label;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateLabel;
- (void)_valueChanged:(id)a0;
- (void).cxx_destruct;
- (void)updateDisplayedValue;
- (void)labelTapped;
- (void)numericKeypadDidUpdateValue:(id)a0;
- (void)numericKeypadWillDismiss:(id)a0;
- (void)updateCellCharacteristics;

@end
