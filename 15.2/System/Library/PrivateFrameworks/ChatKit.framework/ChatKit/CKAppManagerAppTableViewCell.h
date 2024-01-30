@class UISwitch;
@protocol CKAppManagerAppTableViewCellDelegate;

@interface CKAppManagerAppTableViewCell : UITableViewCell

@property (weak, nonatomic) id<CKAppManagerAppTableViewCellDelegate> delegate;
@property (retain, nonatomic) UISwitch *appToggle;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutMarginsDidChange;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setToggleVisible:(BOOL)a0 editable:(BOOL)a1 isOn:(BOOL)a2;
- (void)appToggleTapped:(id)a0;
- (void)updateCellWithPluginInfo:(id)a0;

@end
