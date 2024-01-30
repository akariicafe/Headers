@class SearchUIHorizontallyScrollingContainerButtonController, UIView;

@interface SearchUIContainerButton : UIButton

@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) SearchUIHorizontallyScrollingContainerButtonController *buttonController;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithContainerButtonController:(id)a0;

@end
