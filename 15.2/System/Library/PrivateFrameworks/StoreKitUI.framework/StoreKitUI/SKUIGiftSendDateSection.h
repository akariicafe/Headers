@class SKUIItem, NSString, SKUIGiftTableSectionHeaderView, NSDate;

@interface SKUIGiftSendDateSection : SKUIGiftTableViewSection {
    NSString *_dateString;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _headerInsets;
    SKUIGiftTableSectionHeaderView *_headerView;
}

@property (retain, nonatomic) SKUIItem *giftItem;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } headerInsets;
@property (copy, nonatomic) NSDate *sendDate;
@property (nonatomic) long long sendDateStyle;

- (id)_headerView;
- (void).cxx_destruct;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;
- (void)updateCell:(id)a0 forTransitionToSize:(struct CGSize { double x0; double x1; })a1;
- (id)headerViewForTableView:(id)a0;
- (void)_createFormattedDateString:(BOOL)a0;

@end
