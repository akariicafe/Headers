@class UILabel;

@interface CNGeminiPickerCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *labelLabel;
@property (readonly, nonatomic) UILabel *valueLabel;

- (id)labelView;
- (id)valueView;
- (void)setText:(id)a0 detailText:(id)a1;
- (void).cxx_destruct;
- (void)tintColorDidChange;

@end
