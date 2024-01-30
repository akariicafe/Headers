@protocol WFCompactTitledPlatterViewDelegate;

@interface WFCompactTitledPlatterView : PLTitledPlatterView

@property (weak, nonatomic) id<WFCompactTitledPlatterViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;

@end
