@interface StocksUI.StockShareActivityItemSource : NSObject <UIActivityItemSource> {
    void /* unknown type, empty encoding */ stock;
    void /* unknown type, empty encoding */ quote;
}

- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
