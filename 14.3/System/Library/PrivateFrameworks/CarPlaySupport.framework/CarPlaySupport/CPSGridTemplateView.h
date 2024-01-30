@class NSArray;

@interface CPSGridTemplateView : UIView {
    NSArray *_gridButtons;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (unsigned long long)buttonViewCountThatFits:(double)a0 buttonPadding:(double)a1;
- (id)initWithGridButtons:(id)a0;

@end
