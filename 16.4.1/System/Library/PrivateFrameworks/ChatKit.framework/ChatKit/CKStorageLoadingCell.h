@class UIActivityIndicatorView;

@interface CKStorageLoadingCell : UITableViewCell

@property (retain, nonatomic) UIActivityIndicatorView *spinner;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
