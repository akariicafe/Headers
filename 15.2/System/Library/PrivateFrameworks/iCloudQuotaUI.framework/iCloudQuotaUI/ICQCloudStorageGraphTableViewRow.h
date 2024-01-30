@class NSLock, UITableViewCell;

@interface ICQCloudStorageGraphTableViewRow : RUITableViewRow {
    NSLock *_tableCellLock;
    UITableViewCell *_tableCell;
}

- (void).cxx_destruct;
- (id)init;
- (id)tableCell;
- (float)rowHeightWithMax:(float)a0 peggedHeight:(float)a1 tableView:(id)a2 indexPath:(id)a3;

@end
