@class UILabel, UITextView;

@interface DBSLargeTextExplanationView : UIView <PSHeaderFooterView> {
    UILabel *_bodyExampleLabel;
    UITextView *_bodyExampleTextView;
}

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)layoutForWidth:(double)a0 inTableView:(id)a1;
- (void)layoutSubviews;

@end
