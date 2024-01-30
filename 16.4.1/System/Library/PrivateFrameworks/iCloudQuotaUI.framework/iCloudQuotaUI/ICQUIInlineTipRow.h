@class UITableViewCell, UIView;

@interface ICQUIInlineTipRow : RUITableViewRow {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _tableCellLock;
    UITableViewCell *_tableCell;
}

@property (retain, nonatomic) UIView *tipView;

- (id)init;
- (id)tableCell;
- (void).cxx_destruct;
- (float)rowHeightWithMax:(float)a0 peggedHeight:(float)a1 tableView:(id)a2 indexPath:(id)a3;

@end
