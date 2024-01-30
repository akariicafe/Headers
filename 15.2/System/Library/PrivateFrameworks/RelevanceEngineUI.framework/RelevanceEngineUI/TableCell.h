@class REUpNextBaseCell;

@interface TableCell : UITableViewCell

@property (retain, nonatomic) REUpNextBaseCell *contentCell;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureWithContent:(id)a0;

@end
