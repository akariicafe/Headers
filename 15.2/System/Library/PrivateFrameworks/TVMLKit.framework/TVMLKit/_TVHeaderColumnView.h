@class NSArray;

@interface _TVHeaderColumnView : UIView

@property (copy, nonatomic) NSArray *labelViews;
@property (nonatomic) double lineSpacing;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
