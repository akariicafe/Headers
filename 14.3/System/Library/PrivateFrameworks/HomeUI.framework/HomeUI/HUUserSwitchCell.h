@class UISwitch, UIActivityIndicatorView;
@protocol HUUserSwitchCellDelegate;

@interface HUUserSwitchCell : HUUserTitleValueCell

@property (retain, nonatomic) UISwitch *switchView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic, getter=isOn) BOOL on;
@property (weak, nonatomic) id<HUUserSwitchCellDelegate> delegate;

- (void)setDisabled:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_toggleOn:(id)a0;
- (double)labelSpacing;

@end
