@protocol EKCellShortener;

@interface PreferencesValueCell : EKUITableViewCell

@property (weak, nonatomic) id<EKCellShortener> shortener;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_checkValueWidth;

@end
