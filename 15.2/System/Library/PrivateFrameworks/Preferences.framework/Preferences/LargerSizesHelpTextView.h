@class UILabel;

@interface LargerSizesHelpTextView : UIView <PSHeaderFooterView> {
    UILabel *_helpLabel;
}

- (void)layoutSubviews;
- (void)layoutForWidth:(double)a0 inTableView:(id)a1;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (id)initWithSpecifier:(id)a0;

@end
