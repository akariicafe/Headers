@class NSString, WFIcon, WFCompactPlatterSashView;
@protocol WFCompactTitledPlatterViewDelegate, WFCompactAppearanceProvider;

@interface WFCompactTitledPlatterView : PLPlatterView

@property (retain, nonatomic) WFCompactPlatterSashView *sashView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) WFIcon *icon;
@property (weak, nonatomic) id<WFCompactTitledPlatterViewDelegate> delegate;
@property (retain, nonatomic) id<WFCompactAppearanceProvider> appearanceProvider;

- (void)setNeedsLayout;
- (void)configureSashViewIfNecessary;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainContentFrame;
- (void)layoutSubviews;
- (void)layoutHeaderViews;
- (void).cxx_destruct;

@end
