@class VUISeparatorView, NSString, VUILabel, UISwitch, VUITextLayout, UITextField, VUIDebugViewDefaults;

@interface VUIDebugCollectionViewDefaultsCell : VUIListCollectionViewCell <UITextFieldDelegate>

@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUITextLayout *subtitleLayout;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) UISwitch *defaultsSwitch;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) VUIDebugViewDefaults *defaults;
@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_defaultsSwitchPressed:(id)a0;
- (void)configureCellWithDefaults:(id)a0;

@end
