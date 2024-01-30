@class NSArray;

@interface SKUIRedeemResultLinksTableViewSection : SKUITableViewSection {
    NSArray *_links;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void).cxx_destruct;
- (id)initWithLinks:(id)a0;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forIndexPath:(id)a2;

@end
