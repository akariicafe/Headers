@class UIStackView, UILabel, UIView;

@interface DKNotableUserDataCardCell : UIView

@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) UIStackView *labelContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (id)_titleFont;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_bodyFont;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 accessoryView:(id)a2;
- (id)_stateFont;
- (long long)_stateStackViewAxis;

@end
