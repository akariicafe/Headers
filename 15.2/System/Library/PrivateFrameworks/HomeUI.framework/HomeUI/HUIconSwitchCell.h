@class UISwitch;
@protocol HUIconSwitchCellDelegate;

@interface HUIconSwitchCell : HUTitleDescriptionCell

@property (retain, nonatomic) UISwitch *switchView;
@property (nonatomic, getter=isOn) BOOL on;
@property (weak, nonatomic) id<HUIconSwitchCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_toggleOn:(id)a0;

@end
