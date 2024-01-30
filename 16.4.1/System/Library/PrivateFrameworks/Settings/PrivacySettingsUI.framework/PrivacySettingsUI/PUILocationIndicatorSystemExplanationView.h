@class UILabel;

@interface PUILocationIndicatorSystemExplanationView : PUILocationIndicatorExplanationView {
    UILabel *_additionalInfoLabel;
}

- (id)initWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void).cxx_destruct;
- (void)layoutForWidth:(double)a0 inTableView:(id)a1;

@end
