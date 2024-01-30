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
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)handleMultiSelectViewPressWithRecognizer:(id)a0;
- (BOOL)leftViewSelected;
- (BOOL)rightViewSelected;
- (void)configureWithLeftGlyph:(id)a0 leftTitle:(id)a1 rightGlyph:(id)a2 rightTitle:(id)a3;

@end
