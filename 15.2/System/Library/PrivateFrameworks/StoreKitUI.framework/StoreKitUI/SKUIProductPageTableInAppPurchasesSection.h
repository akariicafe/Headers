@class SKUIColorScheme, NSArray, SKUIClientContext, NSNumberFormatter, SKUIProductPageTableExpandableHeaderView;

@interface SKUIProductPageTableInAppPurchasesSection : SKUIProductPageTableSection {
    SKUIClientContext *_clientContext;
    SKUIProductPageTableExpandableHeaderView *_headerView;
    NSArray *_inAppPurchases;
    NSNumberFormatter *_numberFormatter;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;

- (void)setExpanded:(BOOL)a0;
- (void).cxx_destruct;
- (void)_reloadHeaderView;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;
- (id)headerViewForTableView:(id)a0;
- (id)initWithInAppPurchases:(id)a0 clientContext:(id)a1;

@end
