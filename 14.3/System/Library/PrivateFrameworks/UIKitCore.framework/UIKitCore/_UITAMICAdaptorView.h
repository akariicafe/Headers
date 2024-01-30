@class UILayoutGuide, NSString, UIView, NSLayoutConstraint;

@interface _UITAMICAdaptorView : UIView <_UIGeometryChangeObserver> {
    NSLayoutConstraint *_width;
    NSLayoutConstraint *_height;
    struct CGSize { double width; double height; } _layoutSize;
    BOOL _inLayout;
}

@property (readonly, nonatomic) UIView *view;
@property (nonatomic) float sizingPriority;
@property (retain, nonatomic) UILayoutGuide *sizingLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldWrapView:(id)a0;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; id x4; id x5; id x6; id x7; } *)a0 forAncestor:(id)a1;
- (void)updateForAvailableSize;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
