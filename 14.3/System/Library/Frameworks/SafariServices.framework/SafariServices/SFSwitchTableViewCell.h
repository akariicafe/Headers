@class UISwitch;
@protocol SFSwitchTableViewCellDelegate;

@interface SFSwitchTableViewCell : UITableViewCell {
    UISwitch *_switchView;
}

@property (weak, nonatomic) id<SFSwitchTableViewCellDelegate> delegate;
@property (nonatomic, getter=isSwitchOn) BOOL switchOn;

- (void).cxx_destruct;
- (void)_switchViewStateDidChange:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
