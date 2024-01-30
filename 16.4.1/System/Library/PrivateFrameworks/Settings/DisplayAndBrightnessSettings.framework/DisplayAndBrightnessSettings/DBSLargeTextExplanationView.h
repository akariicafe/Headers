@class UILabel, UITextView;

@interface DBSLargeTextExplanationView : UIView <PSHeaderFooterView> {
    UILabel *_bodyExampleLabel;
    UITextView *_bodyExampleTextView;
}

- (id)initWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)layoutForWidth:(double)a0 inTableView:(id)a1;

@end
