@class UISwitch, NSIndexPath;
@protocol SRAuthorizationCellDelegate;

@interface SRAuthorizationCell : UITableViewCell

@property (retain, nonatomic) UISwitch *toggle;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<SRAuthorizationCellDelegate> delegate;

+ (id)authorizationCellForIndexPath:(id)a0 title:(id)a1 state:(id)a2 delegate:(id)a3 tableView:(id)a4;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)switchChanged;

@end
