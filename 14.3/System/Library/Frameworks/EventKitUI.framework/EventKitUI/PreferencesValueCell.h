@protocol EKCellShortener;

@interface PreferencesValueCell : EKUITableViewCell

@property (weak, nonatomic) id<EKCellShortener> shortener;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_checkValueWidth;

@end
