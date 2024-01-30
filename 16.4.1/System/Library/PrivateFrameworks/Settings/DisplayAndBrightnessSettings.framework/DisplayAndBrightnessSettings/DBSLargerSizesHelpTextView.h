@class UILabel;

@interface DBSLargerSizesHelpTextView : UIView <PSHeaderFooterView> {
    UILabel *_helpLabel;
}

- (id)initWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)layoutForWidth:(double)a0 inTableView:(id)a1;

@end
