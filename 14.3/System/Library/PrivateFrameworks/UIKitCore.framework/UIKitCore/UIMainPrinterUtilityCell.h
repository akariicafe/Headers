@class NSArray;

@interface UIMainPrinterUtilityCell : UITableViewCell {
    NSArray *_supplyLevelViews;
}

@property (retain, nonatomic) NSArray *supplies;
@property (nonatomic) BOOL showSupplyDataUnderPrinterName;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
