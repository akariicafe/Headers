@class UIImageView, UILabel;

@interface NewsCompletionHeaderView : UITableViewHeaderFooterView {
    UIImageView *_newsImage;
    UILabel *_newsLabel;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setHeaderText:(id)a0;

@end
