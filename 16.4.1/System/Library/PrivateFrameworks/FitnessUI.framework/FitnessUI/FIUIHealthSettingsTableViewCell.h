@class UIView;
@protocol FIUIHealthSettingsForceUpdatable;

@interface FIUIHealthSettingsTableViewCell : UITableViewCell {
    UIView *_inputView;
}

@property (weak, nonatomic) id<FIUIHealthSettingsForceUpdatable> forceUpdatable;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)inputView;
- (BOOL)becomeFirstResponder;
- (void)setInputView:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (void).cxx_destruct;

@end
