@class UIView;
@protocol FIUIHealthSettingsForceUpdatable;

@interface FIUIHealthSettingsTableViewCell : UITableViewCell {
    UIView *_inputView;
}

@property (weak, nonatomic) id<FIUIHealthSettingsForceUpdatable> forceUpdatable;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)canResignFirstResponder;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (id)inputView;
- (void)setInputView:(id)a0;
- (BOOL)becomeFirstResponder;

@end
