@class UILabel;

@interface CNGeminiPickerCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *labelLabel;
@property (readonly, nonatomic) UILabel *valueLabel;

- (id)labelView;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)setText:(id)a0 detailText:(id)a1;
- (id)valueView;

@end
