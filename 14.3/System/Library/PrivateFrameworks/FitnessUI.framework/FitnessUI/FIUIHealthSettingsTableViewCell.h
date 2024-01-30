@class UIView;
@protocol FIUIHealthSettingsForceUpdatable;

@interface FIUIHealthSettingsTableViewCell : UITableViewCell {
    UIView *_inputView;
}

@property (weak, nonatomic) id<FIUIHealthSettingsForceUpdatable> forceUpdatable;

- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (id)inputView;
- (void)setInputView:(id)a0;

@end
