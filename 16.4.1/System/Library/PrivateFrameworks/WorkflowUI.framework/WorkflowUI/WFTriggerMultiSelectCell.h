@class WFTriggerOptionSelectionView, UIImpactFeedbackGenerator, UIStackView;
@protocol WFTriggerMultiSelectCellDelegate;

@interface WFTriggerMultiSelectCell : UITableViewCell

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) WFTriggerOptionSelectionView *leftView;
@property (readonly, nonatomic) WFTriggerOptionSelectionView *rightView;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic, getter=isLeftViewSelected) BOOL leftViewSelected;
@property (nonatomic, getter=isRightViewSelected) BOOL rightViewSelected;
@property (weak, nonatomic) id<WFTriggerMultiSelectCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)configureWithLeftGlyph:(id)a0 leftTitle:(id)a1 leftTintColor:(id)a2 rightGlyph:(id)a3 rightTitle:(id)a4 rightTintColor:(id)a5;
- (void)handleMultiSelectViewPressWithRecognizer:(id)a0;

@end
