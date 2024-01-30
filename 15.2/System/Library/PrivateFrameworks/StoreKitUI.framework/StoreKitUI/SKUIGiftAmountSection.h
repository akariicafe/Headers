@class NSString, SKUIGiftAmountControl, UIControl;

@interface SKUIGiftAmountSection : SKUIGiftTableViewSection {
    SKUIGiftAmountControl *_amountControl;
}

@property (readonly, nonatomic) UIControl *amountControl;
@property (readonly, nonatomic) long long selectedAmount;
@property (readonly, nonatomic) NSString *selectedAmountString;

- (void).cxx_destruct;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forIndexPath:(id)a2;

@end
