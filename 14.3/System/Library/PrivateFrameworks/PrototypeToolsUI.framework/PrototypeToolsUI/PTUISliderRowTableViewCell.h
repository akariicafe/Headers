@class UISlider, UILabel;

@interface PTUISliderRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate> {
    UISlider *_slider;
    UILabel *_label;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateLabel;
- (void)updateDisplayedValue;
- (void)_valueChanged:(id)a0;
- (void)numericKeypadDidUpdateValue:(id)a0;
- (void)numericKeypadWillDismiss:(id)a0;
- (void)updateCellCharacteristics;
- (void)labelTapped;

@end
