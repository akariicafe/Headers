@class UISwitch;
@protocol SFSwitchTableViewCellDelegate;

@interface SFSwitchTableViewCell : UITableViewCell {
    UISwitch *_switchView;
}

@property (weak, nonatomic) id<SFSwitchTableViewCellDelegate> delegate;
@property (nonatomic, getter=isSwitchOn) BOOL switchOn;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_switchViewStateDidChange:(id)a0;

@end
