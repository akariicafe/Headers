@class UIImageView, UILabel;

@interface NewsCompletionHeaderView : UITableViewHeaderFooterView {
    UIImageView *_newsImage;
    UILabel *_newsLabel;
}

- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)setHeaderText:(id)a0;

@end
