@class TLKLabel;

@interface SearchUIScreenTimeTableCell : SearchUITableViewCell

@property (retain, nonatomic) TLKLabel *label;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;
- (id)visibleResults;

@end
