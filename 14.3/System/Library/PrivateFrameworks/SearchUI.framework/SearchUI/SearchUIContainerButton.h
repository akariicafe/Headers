@class SearchUIHorizontallyScrollingContainerButtonController, UIView;

@interface SearchUIContainerButton : UIButton

@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) SearchUIHorizontallyScrollingContainerButtonController *buttonController;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithContainerButtonController:(id)a0;

@end
