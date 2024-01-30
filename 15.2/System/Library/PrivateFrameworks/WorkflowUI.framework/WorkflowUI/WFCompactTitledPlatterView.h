@class NSString, UIImage, WFCompactPlatterSashView;
@protocol WFCompactTitledPlatterViewDelegate;

@interface WFCompactTitledPlatterView : PLPlatterView

@property (retain, nonatomic) WFCompactPlatterSashView *sashView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *icon;
@property (weak, nonatomic) id<WFCompactTitledPlatterViewDelegate> delegate;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureSashViewIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainContentFrame;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (void)layoutHeaderViews;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;

@end
