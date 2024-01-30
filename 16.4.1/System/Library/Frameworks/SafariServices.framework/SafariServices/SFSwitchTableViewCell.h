@class UISwitch;
@protocol SFSwitchTableViewCellDelegate;

@interface SFSwitchTableViewCell : UITableViewCell {
    UISwitch *_switchView;
}

@property (weak, nonatomic) id<SFSwitchTableViewCellDelegate> delegate;
@property (nonatomic, getter=isSwitchOn) BOOL switchOn;

- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_switchViewStateDidChange:(id)a0;

@end
