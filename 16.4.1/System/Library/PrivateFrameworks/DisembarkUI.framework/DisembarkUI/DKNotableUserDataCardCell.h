@class UILabel, UIStackView, UIView;

@interface DKNotableUserDataCardCell : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) UIStackView *labelContainer;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (id)_titleFont;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_bodyFont;
- (id)_stateFont;
- (long long)_stateStackViewAxis;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 accessoryView:(id)a2;

@end
