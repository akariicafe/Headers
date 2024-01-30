@class UISwitch;
@protocol HKMedicalIDEditorSwitchDelegate;

@interface HKMedicalIDEditorSwitchCell : UITableViewCell {
    UISwitch *_switch;
}

@property (weak, nonatomic) id<HKMedicalIDEditorSwitchDelegate> delegate;

- (void).cxx_destruct;
- (void)_switchSwitched:(id)a0;
- (id)initWithTitle:(id)a0 defaultState:(BOOL)a1;
- (void)setUIDisabled;

@end
