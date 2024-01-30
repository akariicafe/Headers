@class NSLock, UITableViewCell, ACAccount;

@interface ICQCloudStorageGraphTableViewRow : RUITableViewRow {
    NSLock *_tableCellLock;
    UITableViewCell *_tableCell;
    ACAccount *_account;
}

- (id)initWithAccount:(id)a0;
- (id)init;
- (id)tableCell;
- (void).cxx_destruct;
- (float)rowHeightWithMax:(float)a0 peggedHeight:(float)a1 tableView:(id)a2 indexPath:(id)a3;

@end
